using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.SceneManagement;
public class AutomaticSceneSwitcher : MonoBehaviour {

    public VideoPlayer vid;
    public GameObject UI;

    public bool GoToForm = false;
    private void Start()
    {
        StartCoroutine(WaitAndLoad(7f, "MyScene"));
    }

    private IEnumerator WaitAndLoad(float value, string scene)
    {
        yield return new WaitForSeconds(value);
        print("Video Is Over");
        //if (PlayerPrefs.GetInt("form", 0) == 0 || GoToForm)
        //{
        //    SceneManager.LoadScene("FormScene");
       // }

        //else
       // {
            Destroy(vid);
            UI.SetActive(true);
            AsyncOperation async = SceneManager.LoadSceneAsync("Lens");

            while (!async.isDone)
            {
                yield return null;

            }
       //}
    }

}

