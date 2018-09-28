using UnityEngine;
using System.Collections;
using Vuforia;

public class ButtonPopup : MonoBehaviour, ITrackableEventHandler
{

    private TrackableBehaviour mTrackableBehaviour;

    private bool mShowGUIButton = false;
    public GameObject WebButton;
    public GameObject VideoButton;

    void Start()
    {
        mTrackableBehaviour = GetComponent<TrackableBehaviour>();
        if (mTrackableBehaviour)
        {
            mTrackableBehaviour.RegisterTrackableEventHandler(this);
        }
    }

    public void OnTrackableStateChanged(
                                    TrackableBehaviour.Status previousStatus,
                                    TrackableBehaviour.Status newStatus)
    {
        if (newStatus == TrackableBehaviour.Status.DETECTED ||
            newStatus == TrackableBehaviour.Status.TRACKED)
        {
            mShowGUIButton = true;
        }
        else
        {
            mShowGUIButton = false;
            WebButton.SetActive(false);
            VideoButton.SetActive(false);
        }
    }

    void OnGUI()
    {
        if (mShowGUIButton)
        {
            WebButton.SetActive(true);
            VideoButton.SetActive(true);
        }
    }
}