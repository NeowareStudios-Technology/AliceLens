using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class VuforiaInitializer : MonoBehaviour {
    public GameObject arCamera;
    public VuforiaBehaviour behaviour;
    void Start(){
        arCamera.SetActive(true);
        behaviour.enabled = true;
    }
}
