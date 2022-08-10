﻿namespace QFramework.Example
{
	using System.Collections;
	using UnityEngine.UI;
	using UnityEngine;
	
	public class ImageLoaderExample : MonoBehaviour
	{
		private ResLoader mResLoader = null;

		private IEnumerator Start()
		{
			ResMgr.Init();
			
			mResLoader = ResLoader.Allocate();

			// local image
			var localImageUrl = "file://" + Application.persistentDataPath + "/Workspaces/lM1wmsLQtfzRQc6fsdEU.jpg";

			mResLoader.Add2Load(localImageUrl.ToLocalImageResName(),
				delegate(bool b, IRes res)
				{
					Debug.LogError(b);
					if (b)
					{
						var texture2D = res.Asset as Texture2D;
						transform.Find("Image").GetComponent<Image>().sprite = Sprite.Create(texture2D,
							new Rect(0, 0, texture2D.width, texture2D.height), Vector2.one * 0.5f);
					}
				});
			
			mResLoader.LoadAsync();
			
			
			yield return new WaitForSeconds(5.0f);
			mResLoader.Recycle2Cache();
			mResLoader = null;
		}
	}
}