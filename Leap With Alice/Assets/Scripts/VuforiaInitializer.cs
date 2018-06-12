using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VuforiaInitializer : MonoBehaviour {
    public GameObject arCamera;
    void Start(){
        arCamera.SetActive(true);
    }
}
