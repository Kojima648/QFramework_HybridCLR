### HybridCLR + QFramework 热更demo演示

- QFramework:https://qframework.cn/
- HybridCLR(wolong):https://hybridclr.doc.code-philosophy.com/docs/intro
- B站演示视频：https://www.bilibili.com/video/bv1VW4y1Y7Nh
- 目录下视频：Document\Demo.mp4

#### 说明：

1. 视频演示了使用HybridCLR为QFramework的Example（五子棋）示例工程热更。
2. 对QF没有做任何修改，打包也是用的ResKit，仅仅是修改了DLL生成 加载相关的代码。
3. 每次打AB（Patch 补丁）之前都要 Build代码，如果是出底包，则需要生成all，然后Build代码，再QF打包，DLL那个目录已经标记了
4. 视频演示了通过Streamingasset 加载文件，每次替换改后的文件就可以。
5. 没有做远端服务器更新，文件MD5对比之类的东西，如有需要，则自己实现。
6. 编辑器下我是Win平台，直接用IO加载目录下的dll，真机模式则走的AB包里的DLL，其他平台没有做测试，如果有问题，自己微调一下。
7. 这个项目，只是一个思路的演示，可能不能直接拿来用，请自己斟酌！



#### 更新日志

2022年8月10日，首次合并提交。

2024年5月21日，第二次合并修改。
