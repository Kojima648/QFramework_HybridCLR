using UnityEngine;
using UnityEngine.UI;

namespace QFramework.Example
{
	public class LoadResourcesResExample : MonoBehaviour
	{
		public RawImage RawImage;
		
		private ResLoader mResLoader = ResLoader.Allocate();
		
		private void Start()
		{
			//  加载 Resources 目录里的资源不用调用 ResKit.Init
			
			RawImage.texture = mResLoader.LoadSync<Texture2D>("resources://TestTexture");
		}

		private void OnDestroy()
		{
			Debug.Log("On Destroy ");
			mResLoader.Recycle2Cache();
			mResLoader = null;
		}
	}
}