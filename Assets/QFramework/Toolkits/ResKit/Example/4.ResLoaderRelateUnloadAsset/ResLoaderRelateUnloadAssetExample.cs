﻿using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace QFramework.Example
{
    public class ResLoaderRelateUnloadAssetExample : MonoBehaviour
    {
        // Use this for initialization
        IEnumerator Start()
        {
            var image = transform.Find("Image").GetComponent<Image>();

            ResKit.Init();

            var resLoader = ResLoader.Allocate();
            
            var texture2D = resLoader.LoadSync<Texture2D>("TextureExample1");

            // create Sprite 扩展
            var sprite = Sprite.Create(texture2D, new Rect(0, 0, texture2D.width, texture2D.height), Vector2.one * 0.5f);

            image.sprite = sprite;

            // 添加关联的 Sprite
            resLoader.AddObjectForDestroyWhenRecycle2Cache(sprite);

            yield return new WaitForSeconds(5.0f);
            
            // 当释放时 sprite 也会销毁
            resLoader.Recycle2Cache();
            resLoader = null;
        }
    }
}