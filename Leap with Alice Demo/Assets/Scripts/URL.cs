using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class URL : MonoBehaviour {

	public void openTechandBeerFacebookPage ()
	{
		float startTime;
		startTime = Time.timeSinceLevelLoad;

		// open the facebook app in IOS
		Application.OpenURL("fb://page/?id=350989365287405");
		// open the facebook app in Andorid
		Application.OpenURL ("fb://page/350989365287405");

		if (Time.timeSinceLevelLoad - startTime <= 1f)
		{
			//fail. Open safari.
			Application.OpenURL("https://www.facebook.com/leapwithalice/");
		}
	}

	public void openLeapWithAliceSite ()
	{
		float startTime;
		startTime = Time.timeSinceLevelLoad;

		Application.OpenURL("https://leapwithalice.io/");

	}

	public void openFoxlioPage ()
	{
		Application.OpenURL ("http://foxlio.com/");
	}

	public void openOkojiPage ()
	{
		Application.OpenURL ("http://okoji.com/");
	}

	public void openSchoolSite1 ()
	{
		Application.OpenURL ("https://solarsystem.nasa.gov/planets/neptune");
	}

	public void openSchoolSite2 ()
	{
		Application.OpenURL ("https://www.youtube.com/watch?v=VM22MyLaRSs");
	}




}