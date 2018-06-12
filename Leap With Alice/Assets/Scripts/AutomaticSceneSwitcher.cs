using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.SceneManagement;
public class AutomaticSceneSwitcher : MonoBehaviour {

    public VideoPlayer vid;

    public bool GoToForm = false;
    void Start() { vid.loopPointReached += CheckOver; }

    void CheckOver(UnityEngine.Video.VideoPlayer vp)
    {
        print("Video Is Over");
        if (PlayerPrefs.GetInt("form", 0) == 0 ||GoToForm) { 
            SceneManager.LoadScene("FormScene");
        }

        else
        {
            SceneManager.LoadScene("GameScene");
        }
        
    }

}

