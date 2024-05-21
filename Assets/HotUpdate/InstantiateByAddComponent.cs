using QFramework;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;

public class InstantiateByAddComponent : MonoBehaviour
{
    ResLoader loader = null;

    void Start()
    {
        ResKit.Init();
        loader =  ResLoader.Allocate();
        loader.LoadSceneAsync("App", onStartLoading: oper =>
        {
            Debug.Log($"[InstantiateByAddComponent] 这个脚本通过AddComponent的方式实例化.");
            Debug.Log($"加载五子棋的示例场景，这是一个热更新场景。");
        });
        


    }
}
