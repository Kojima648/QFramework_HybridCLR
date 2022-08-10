﻿using UnityEngine;

namespace QFramework.Example
{
    public class GlobalMonoEventsExample : MonoBehaviour
    {
        void Start()
        {
            ActionKit.OnUpdate.Register(() =>
            {
                if (Time.frameCount % 30 == 0)
                {
                    Debug.Log("Update");
                }
            }).UnRegisterWhenGameObjectDestroyed(gameObject);

            ActionKit.OnFixedUpdate.Register(() =>
            {
                // fixed update code here
                // 这里写 fixed update 相关代码
            }).UnRegisterWhenGameObjectDestroyed(gameObject);
            
            ActionKit.OnLateUpdate.Register(() =>
            {
                // late update code here
                // 这里写 late update 相关代码
            }).UnRegisterWhenGameObjectDestroyed(gameObject);

            ActionKit.OnGUI.Register(() =>
            {
                GUILayout.Label("See Example Code");
                GUILayout.Label("请查看示例代码");
            }).UnRegisterWhenGameObjectDestroyed(gameObject);

            ActionKit.OnApplicationFocus.Register(focus =>
            {
                Debug.Log("focus:" + focus);
            }).UnRegisterWhenGameObjectDestroyed(gameObject);

            ActionKit.OnApplicationPause.Register(pause =>
            {
                Debug.Log("pause:" + pause);
            }).UnRegisterWhenGameObjectDestroyed(gameObject);

            ActionKit.OnApplicationQuit.Register(() =>
            {
                Debug.Log("quit");
            }).UnRegisterWhenGameObjectDestroyed(gameObject);
        }
    }
}