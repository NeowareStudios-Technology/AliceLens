using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using UnityEngine;
using UnityEngine.UI;

public class Hubspotapi : MonoBehaviour {
    public Text first;
    public Text last;
    public Text email;
    public Text user;
    public Text country;
    public Text background;
    public Text responseText;
    
    public void SendForm()
    {
        WWWForm form = new WWWForm();
        // Build dictionary of field names/values (must match the HS field names)
        Dictionary<string, string> headers = form.headers;
        form.AddField("email", email.text);
        form.AddField("firstname", first.text);
        form.AddField("lastname", last.text);
        form.AddField("what_kind_of_user_", user.text);
        form.AddField("country", country.text);
        form.AddField("what_is_your_background_in_education_", background.text);


        // Form Variables (from the HubSpot Form Edit Screen)
        int intPortalID = 4555673; //place your portal ID here
        string strFormGUID = "777a1bfa-0dfb-44d1-a9c7-cc8a81af346b"; //place your form guid here

        // Tracking Code Variables
        string strHubSpotUTK = "untracked";
        string strIpAddress = LocalIPAddress();

        // Page Variables
        string strPageTitle = this.name;
        string strPageURL = "not included";

        // Do the post, returns true/false
        string strError = "";

        byte[] rawFormData = form.data;
        string strEndpointURL = string.Format("https://forms.hubspot.com/uploads/form/v2/{0}/{1}", intPortalID, strFormGUID);
        Debug.Log("Making request");
        WWW request = new WWW(strEndpointURL, rawFormData, headers);
        StartCoroutine(OnResponse(request));
    }

    private IEnumerator OnResponse(WWW req)
    {
        yield return req;
        if(responseText)
        responseText.text = req.text;
    }

    public string LocalIPAddress()
    {
        IPHostEntry host;
        string localIP = "";
        host = Dns.GetHostEntry(Dns.GetHostName());
        foreach (IPAddress ip in host.AddressList)
        {
            if (ip.AddressFamily == AddressFamily.InterNetwork)
            {
                localIP = ip.ToString();
                break;
            }
        }
        return localIP;
    }

    /// 
    /// This helper function sends data to the the HubSpot Forms API
    /// 
    /// HubSpot Portal ID, or 'HUB ID'
    /// Unique ID for the form
    /// Dictionary containing all of the field names/values
    /// UserToken from the visitor's browser
    /// IP Address of the visitor
    /// Title of the page they visited
    /// URL of the page they visited
    /// 
    /// 
   
}
