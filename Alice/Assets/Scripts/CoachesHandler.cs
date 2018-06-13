using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoachesHandler : MonoBehaviour {

    public string[] coaches;
    public bool deleteAll = false;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void ClearCoaches ()
    {
        if(deleteAll)
        {
            PlayerPrefs.DeleteAll();
        }
        else
        {
            foreach (string str in coaches)
            {
                PlayerPrefs.SetInt(str, 0);
            }
        }

        
    }
}
