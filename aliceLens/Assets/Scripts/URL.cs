using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class URL : MonoBehaviour {

	public void openLWAFacebookPage ()
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

	public void openLWATelegram ()
	{
		Application.OpenURL ("https://t.me/LeapWithAlice");
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




	public void SendEmail ()

    {

    string email = "info@leapwithalice.io";

    string subject = MyEscapeURL("Leap With Alice ");

    string body = MyEscapeURL(" ");
     

    Application.OpenURL ("mailto:" + email + "?subject=" + subject + "&body=" + body);

    }  

    string MyEscapeURL (string url)

    {

    return WWW.EscapeURL(url).Replace("+","%20");

    }

    public void HillelSite()
    {
        Application.OpenURL("https://www.hillelhebrew.org");
    }

    public void UCFSite()
    {
        Application.OpenURL("https://www.ucf.edu");
    }

    public void PavingtheWaySite()
    {
        Application.OpenURL("https://www.stoptraffickingtoday.com");
    }

    public void MontessoriSite()
    {
        Application.OpenURL("https://amshq.org");
    }

    public void SlatofHeavenSite()
    {
        Application.OpenURL("http://saltofheaven.org");
    }



    public void neptuneVideo()
    {
        Application.OpenURL("https://youtu.be/VM22MyLaRSs");
    }
    public void neptuneWebsite()
    {
        Application.OpenURL("https://solarsystem.nasa.gov/planets/neptune");   
    }

}