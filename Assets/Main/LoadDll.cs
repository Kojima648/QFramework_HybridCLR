using HybridCLR;
using QFramework;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEngine;

public class LoadDll : MonoBehaviour
{
    private static ResLoader mResLoader = ResLoader.Allocate();
    void Start()
    {
        ResKit.Init();
        DownLoadAssets(this.StartGame);
    }

    #region download assets

    private static Dictionary<string, byte[]> s_assetDatas = new Dictionary<string, byte[]>();

    public static byte[] ReadBytesFromStreamingAssets(string dllName)
    {
        return s_assetDatas[dllName];
    }

    private string GetWebRequestPath(string asset)
    {
        var path = $"{Application.streamingAssetsPath}/{asset}";
        if (!path.Contains("://"))
        {
            path = "file://" + path;
        }
        return path;
    }
    private static List<string> AOTMetaAssemblyFiles { get; } = new List<string>()
    {
        "mscorlib.dll.bytes",
        "System.dll.bytes",
        "System.Core.dll.bytes",
    };

    void DownLoadAssets(Action onDownloadComplete)
    {
        var assets = new List<string>
        {
            "Assembly-CSharp.dll.bytes",
        }.Concat(AOTMetaAssemblyFiles);

        // 编辑器下直接 IO 去读取
        if (AssetBundlePathHelper.SimulationMode)
        {
            foreach (var asset in assets)
            {
                string assetPath = $"Assets/AssetRaw/DLL/{asset}";
                // 确保文件存在
                if (File.Exists(assetPath))
                {
                    // 读取字节数据
                    var assetData = File.ReadAllBytes(assetPath);
                    var assetSize = assetData.Length;

                    // 赋值（假设 s_assetDatas 是一个字典）
                    s_assetDatas[asset] = assetData;

                    // Debug 输出
                    Debug.Log($"dll: {asset} size: {assetSize}");

                }
            }
        }
        else
        {
            foreach (var asset in assets)
            {
                AssetBundle dllAB = mResLoader.LoadSync<AssetBundle>("dll");
                var assetData = dllAB.LoadAsset<TextAsset>(asset);
                Debug.Log($"dll:{asset}  size:{assetData.bytes.Length}");
                s_assetDatas[asset] = assetData.bytes;
            }
        }

        onDownloadComplete();
    }

    #endregion

    private static Assembly _hotUpdateAss;

    /// <summary>
    /// 为aot assembly加载原始metadata， 这个代码放aot或者热更新都行。
    /// 一旦加载后，如果AOT泛型函数对应native实现不存在，则自动替换为解释模式执行
    /// </summary>
    private static void LoadMetadataForAOTAssemblies()
    {
        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in AOTMetaAssemblyFiles)
        {
            byte[] dllBytes = ReadBytesFromStreamingAssets(aotDllName);
            // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }

    void StartGame()
    {
        LoadMetadataForAOTAssemblies();
#if !UNITY_EDITOR
        _hotUpdateAss = Assembly.Load(ReadBytesFromStreamingAssets("Assembly-CSharp.dll.bytes"));
#else
        _hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "Assembly-CSharp");
#endif
        Type entryType = _hotUpdateAss.GetType("Entry");
        entryType.GetMethod("Start").Invoke(null, null);

        Run_InstantiateComponentByAsset();
    }

    private static void Run_InstantiateComponentByAsset()
    {
        // 通过实例化assetbundle中的资源，还原资源上的热更新脚本
        var prefab = mResLoader.LoadSync<GameObject>("Cube");
        GameObject.Instantiate(prefab);
    }
}
