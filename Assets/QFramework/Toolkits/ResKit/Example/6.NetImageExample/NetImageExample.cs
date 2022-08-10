﻿using UnityEngine;
using UnityEngine.UI;

namespace QFramework.Example
{
    public class NetImageExample : MonoBehaviour
    {
        ResLoader mResLoader = ResLoader.Allocate();

        // Use this for initialization
        void Start()
        {
            var image = transform.Find("Image").GetComponent<Image>();
            
            mResLoader.Add2Load<Texture2D>(
                "http://pic.616pic.com/ys_b_img/00/44/76/IUJ3YQSjx1.jpg".ToNetImageResName(),
                (b, res) =>
                {
                    if (b)
                    {
                        var texture = res.Asset as Texture2D;

                        var sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height),
                            Vector2.one * 0.5f);
                        image.sprite = sprite;
                        mResLoader.AddObjectForDestroyWhenRecycle2Cache(sprite);
                    }
                });
            
            mResLoader.LoadAsync();
        }
        
        private void OnDestroy()
        {
            mResLoader.Recycle2Cache();
            mResLoader = null;
        }
    }
}