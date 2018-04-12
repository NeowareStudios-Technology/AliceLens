using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisableCoaches : MonoBehaviour {

    public string playerPrefsStorageName = "DONT FORGET TO CHANGE THIS";

	// Use this for initialization
	void Start () {

        if (PlayerPrefs.GetInt(playerPrefsStorageName) == 1)
        {
            //Destroy(GameObject.Find("Coach"));
            this.gameObject.SetActive(false);
        }
        else
        {
            PlayerPrefs.SetInt(playerPrefsStorageName, 1);
            this.gameObject.SetActive(true);
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
