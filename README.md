# QFramework_HybridCLR
HybridCLR + QFramework 热更演示

B站视频：https://www.bilibili.com/video/bv1VW4y1Y7Nh

视频演示了使用HybridCLR为QF的Example示例工程热更，仅仅是演示，在hybridclr_trial基础上改的。

ui和game打入AB包，热更的dll也在这个AB包，打包后直接从StreamingAssets复制新资源即可。

打包和出包都用了hybridclr_trial自带的，资源的打包和加载也没用QF的，但是可以换。

如果你拉取了工程，QFramework_HybridCLR\HybridCLRData\init_local_il2cpp_data.bat

这个bat的unity il2cpp路径改成你的，如果你是2020版本，那么需要改上面的分支为2020.3.33

分支和Unity版本需要统一，改完了重新运行下这个bat，有问题留言，如果有时间会完善这个demo