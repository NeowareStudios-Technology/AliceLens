using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Formbutton : MonoBehaviour {

    public Toggle toggle;
    public GameObject warningText;
    public GameObject FormPanel;
    public GameObject ConfirmationPanel;
	// Use this for initialization
    public void pressedbutton(){
        if (gameObject.GetComponent<Hubspotapi>().email.text != "" && toggle.isOn)
        {
            this.gameObject.GetComponent<Hubspotapi>().SendForm();
            PlayerPrefs.SetInt("form", 1);
            FormPanel.SetActive(false);
            ConfirmationPanel.SetActive(true);
            SceneManager.LoadScene("GameScene");
        }
        else
        {
            warningText.SetActive(true);
        }
    }
}
