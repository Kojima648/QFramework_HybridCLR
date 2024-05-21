using UnityEngine;

namespace QFramework.WuZiQi
{

	public class UIController : MonoBehaviour
	{
		private void Awake()
		{
			ResKit.Init();
		}

		void Start()
		{
			TypeEventSystem.Global.Register<GameOverEvent>(OnGameOver);
		}

		void OnGameOver(GameOverEvent gameOverEvent)
		{
			UIKit.OpenPanel<UIGameOver>(new UIGameOverData()
			{
				BlackWin = gameOverEvent.IsBlackWin
			});
		}

		private void OnDestroy()
		{
			TypeEventSystem.Global.UnRegister<GameOverEvent>(OnGameOver);
		}
	}
}