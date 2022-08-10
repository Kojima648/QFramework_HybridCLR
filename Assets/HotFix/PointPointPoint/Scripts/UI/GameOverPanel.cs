using QFramework;
using QFramework.PointGame;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameOverPanel : MonoBehaviour,IController
{
    public IArchitecture GetArchitecture()
    {
        return PointGame.Interface;
    }

    void Start()
    {
        transform.Find("BtnBack").GetComponent<Button>()
               .onClick.AddListener(() =>
               {
                   gameObject.SetActive(false);
                   Debug.Log("���������¿�ʼ");
                   this.SendCommand<StartGameCommand>();
               });
    }
 
}
