# Alice Lens

The Alice Lens application is built within Unity 2018.2.15f1 using the Vuforia Unity package for augmented reality image target detection and database. Within this latest version of the application there are multiple scenes that follow similar priciples in terms of what is within. These scenes contain augmentable videos, images, 3D models, button links, scene switchers, etc.

## Getting Started

The Alice Lens project is meant to be simple and easy to develop for. The ability to add and remove AR content has been simplified to the point of copy & paste and drag & drop. If there are any additional pieces that you believe should be added to this readme, reach out with suggested additions/changes to better enhance the documentation. 

### Prerequisites

What things you need to install the software and how to install them

**Unity 2018.2.15f1** 
>In order to open the project make sure you are on the same version of Unity (2018.2.15f1) for the most seamless experience. If using another Unity version you run the risk ok prefabs beging broken, missing scripts, and other errors. The simplest way to maintain multiple different versions of Unity is by having the program Unity Hub. All versions of Unity can be found at the following link to download: [Unity Archive](https://unity3d.com/get-unity/download/archive)

**Access to company Vuforia account** 
>This account is used to create a vuforia license to use Vuforia AR Framework. This is also how you input image targets to be rated for augmentable rating (Expresses quality of image target to track and stability) and to be downloaded to be put in the scene. If access is needed for Vuforia reach out to Lead Developer.

### Installing

Simply pull the repo into Github desktop to keep track of the most up to date pulls and make your own pushes. Github best practices to follow are coming soon and will be linked here. 

Once you have the project downloaded and the proper Unity version installed open the project and all parts of the project should be accurate in terms of UI, functioanlity, UI, etc.

## Inside the project

Within this build you will find multiple scenes, scripts, and UI assets. These are listed below:

**Scenes:**

> **Alice Lens:** Flagship main demo application to show of image recognition augmented reality.

> **Hillel:** Created for Hillel Hebrew Academy.

> **Larry:** Created as a one off lens for a demo.

> **Montessori:** Created to show off AR to parents looking into Montessori education.

> **Opening:** This scene was put in for instances when the application is too large for android and needs to be built as a split binary. Their is a script within the scene that can be edited to load in the content needed for the split binary, but the script must be in the scene prior to the one you want to have the active content in, hence the opening scene prior to the alice scene appearing.

> **OTB_AR:** Created for the OTB platform as an AR counterpart to be shown off. Now is going to serve as the lens for the UCF recruiting mailouts.

> **OTB_Home:** Initial opening screen of the OTB_AR app. This screen lets users choose between opening the AR portion of the app or open up the OTB platform website within the application.

> **Paving The Way:** Created as a lens for the non-profit organization Paving the Way. 

> **PolyBlox:** Created as a lens for the educational toy PolyBlox.

> **Salt of Heaven:** Created as a lens for Salt of Heaven, an organization and non-profit.

> **UCF:** Created as a lens to show off AR on UCF logos.


## Scripts

The following scripts are found in the Lens project

> **AndroidSplitLoadFirstScene:** This is a script attached to the first scene loaded before the AR Scene is opened. This loads in the Vuforia AR database

> **Auto Rotate:** This script can be applied to objects in the scene to auto-rotate.

> **ColorPicker:** This is a simple script that allows users to choose between colors for an object in the scene.

> **DefaultTrackableEventHandler:** Vuforia created script for tracking of image targets.

> **ObbExtractor:** This extractor is used to extract and load in the Vuforia AR database files for Android split binary builds 

> **PlayerTrackableEventHandler:** Vuforia created script for tracking of image targets.

> **SceneSwitchers:** This script allows for the ability to switch between specified scenes

> **Sharing:** This script allows for native sharing on iOS and Android when the button is attached to is tapped. Can only be tested on iOS and Android devices, not in the Unity Editor. This script is dependent on the Native Share plugin folder within the app.

> **URL:** Allows for creating links to open urls, call phone numbers, send emails, facebook links, youtube links, twitter links.

## Built With

Note: This GitHub Repo ReadMe was created with the intended purposes of giving the developer insight on the current build as is. It is not a replacement for understanding Unity, Vuforia, Invision, Github Desktop, and Unity Hub. 

Documentations for these items can be found here:
* [Unity](https://docs.unity3d.com/Manual/index.html) - The web framework used
* [Vuforia](https://docs.unity3d.com/Manual/index.html) - Dependency Management
* [Unity Hub](https://docs.unity3d.com/Manual/GettingStartedUnityHub.html) - Used to generate RSS Feeds
* [Github Desktop](https://docs.unity3d.com/Manual/GettingStartedUnityHub.html) - Used to generate RSS Feeds
* [Invision](https://support.invisionapp.com/hc/en-us) - Used to generate RSS Feeds


## Versioning

We use Github for versioning. For the versions available, see the Alice Lens Respository (https://github.com/LeapWithAlice/AliceLens). 

## License

This project is private and not to be shared outside of internal use.

## Acknowledgments

* Hat tip to anyone whose code was used
* Alfonso Morales, Lee Ramirez, Daniel Roach
* etc
