using System.Collections;
using UnityEngine;
using UnityEngine.U2D;
using UnityEngine.UI;

namespace QFramework
{
	/// <inheritdoc />
	/// <summary>
	/// 参考:http://www.cnblogs.com/TheChenLin/p/9763710.html
	/// </summary>
	public class TestSpriteAtlas : MonoBehaviour
	{
		[SerializeField] private Image mImage;

		// Use this for initialization
		private IEnumerator Start()
		{
			var loader = ResLoader.Allocate();

			ResKit.Init();

			var spriteAtlas = loader.LoadSync<SpriteAtlas>("spriteatlas");
			var square = spriteAtlas.GetSprite("shop");
			
			loader.AddObjectForDestroyWhenRecycle2Cache(square);

			mImage.sprite = square;

			yield return new WaitForSeconds(5.0f);

			loader.Recycle2Cache();
			loader = null;
		}
	}
}