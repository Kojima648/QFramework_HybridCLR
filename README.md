# QFramework_HybridCLR
HybridCLR + QFramework 热更演示

B站视频：https://www.bilibili.com/video/bv1VW4y1Y7Nh

视频演示了使用HybridCLR为QFramework的Example示例工程热更，对QF的打包做了一些修改，打包前先处理DLL相关的逻辑。

UI和Game打入Prefabs这个AB包，热更的dll在AssetBundleSourceData/StandaloneWindows64 这个AB包，这两个都标记了文件夹

真机模式和模拟模式都可以体验，观察game和ui的组件，都变白那就是AB，打包后测：直接从StreamingAssets复制新资源替换即可。

对于DLL的处理用了HybridCLR原有的逻辑，ResKit打包前，DLL的文件夹已经被处理就绪。所以只需要标记。

如果你拉取了工程，QFramework_HybridCLR\HybridCLRData\init_local_il2cpp_data.bat

这个bat的unity il2cpp路径改成你的，如果你是2020版本，那么需要改上面的分支为2020.3.33

分支和Unity版本需要统一，改完了重新运行下这个bat，有问题留言，如果有时间会完善这个demo