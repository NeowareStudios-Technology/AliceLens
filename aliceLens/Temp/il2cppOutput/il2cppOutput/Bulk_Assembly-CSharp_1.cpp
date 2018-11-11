#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// CameraSettings
struct CameraSettings_t3152619780;
// DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t1588957063;
// FrameQualityMeter
struct FrameQualityMeter_t3206426345;
// MenuOptions
struct MenuOptions_t1951716431;
// OptionsConfig
struct OptionsConfig_t900326454;
// PanelShowHide
struct PanelShowHide_t3128188850;
// QualityDialog
struct QualityDialog_t529473262;
// SamplesNavigationHandler
struct SamplesNavigationHandler_t3426315339;
// SceneOrientation
struct SceneOrientation_t160940122;
// SceneSwitchers
struct SceneSwitchers_t1869753645;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t819399007;
// System.Action`1<Vuforia.VuMarkBehaviour>
struct Action_1_t1350698054;
// System.Action`1<Vuforia.VuMarkTarget>
struct Action_1_t1302041398;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.DictionaryEntry>
struct Transform_1_t2179010862;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.Texture2D,System.Collections.DictionaryEntry>
struct Transform_1_t3295043608;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Vuforia.VuMarkBehaviour>>
struct Dictionary_2_t1539018532;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>
struct Dictionary_2_t1340713322;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t2272543;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonBehaviour>
struct Dictionary_2_t325039782;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t898892918;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
struct Dictionary_2_t3625702484;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t2265887763;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable>
struct IEnumerable_1_t1431852880;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkBehaviour>
struct IEnumerable_1_t158083348;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManager/TrackableIdPair>
struct LinkedList_1_t3066996466;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t4142344393;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t463142320;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t2968050330;
// System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>
struct List_1_t2728888017;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t905170877;
// System.Collections.Generic.List`1<Vuforia.IVirtualButtonEventHandler>
struct List_1_t365750880;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t2585633954;
// System.Collections.Generic.List`1<Vuforia.VuMarkBehaviour>
struct List_1_t2650305201;
// System.Collections.Generic.List`1<Vuforia.VuMarkTarget>
struct List_1_t2601648545;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// TapHandler
struct TapHandler_t334234343;
// TouchHandler
struct TouchHandler_t3441426771;
// TrackableSettings
struct TrackableSettings_t2862243993;
// UDTEventHandler
struct UDTEventHandler_t2349357857;
// UDTEventHandler/<FadeOutQualityDialog>c__Iterator0
struct U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494;
// URL
struct URL_t2492693491;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// UnityEngine.CanvasGroup
struct CanvasGroup_t4083511760;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.LineRenderer
struct LineRenderer_t3154350270;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t149664596;
// UnityEngine.Touch[]
struct TouchU5BU5D_t1849554061;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2439009922;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Toggle
struct Toggle_t2735377061;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Video.VideoClip
struct VideoClip_t1281919028;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t1683042537;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t3211687919;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t3436254912;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t3848515759;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t445758600;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// UnityEngine.WaitUntil
struct WaitUntil_t3373419216;
// VideoController
struct VideoController_t2238106033;
// VideoTrackableEventHandler
struct VideoTrackableEventHandler_t944783369;
// VirtualButtonEventHandler
struct VirtualButtonEventHandler_t1548763206;
// VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0
struct U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297;
// VuMarkHandler
struct VuMarkHandler_t1415762101;
// VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0
struct U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394;
// VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0/<OnVuMarkTargetAvailable>c__AnonStorey2
struct U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152;
// VuMarkHandler/<ShowPanelAfter>c__Iterator1
struct U3CShowPanelAfterU3Ec__Iterator1_t1638954166;
// VuMarkHandler/AugmentationObject
struct AugmentationObject_t2506029784;
// VuMarkHandler/AugmentationObject[]
struct AugmentationObjectU5BU5D_t2045593289;
// VuMarkTrackableEventHandler
struct VuMarkTrackableEventHandler_t4082851918;
// Vuforia.CameraCalibrationComparer
struct CameraCalibrationComparer_t2990055837;
// Vuforia.DataSet
struct DataSet_t3286034874;
// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t3430730379;
// Vuforia.DataSet[]
struct DataSetU5BU5D_t4052198943;
// Vuforia.DeviceTrackerARController
struct DeviceTrackerARController_t1095592542;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t3849131975;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t1054226036;
// Vuforia.DigitalEyewearARController/SerializableViewerParameters
struct SerializableViewerParameters_t2043332680;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t283990539;
// Vuforia.IExtendedTrackingManager
struct IExtendedTrackingManager_t821947488;
// Vuforia.ITrackerManager
struct ITrackerManager_t607206903;
// Vuforia.IUserDefinedTargetEventHandler
struct IUserDefinedTargetEventHandler_t1256813275;
// Vuforia.IVirtualButtonEventHandler
struct IVirtualButtonEventHandler_t3188643434;
// Vuforia.IlluminationManager
struct IlluminationManager_t3960931838;
// Vuforia.Image
struct Image_t745056343;
// Vuforia.ImageTarget
struct ImageTarget_t3707016494;
// Vuforia.ImageTargetBehaviour
struct ImageTargetBehaviour_t2200418350;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t2430893908;
// Vuforia.LateLatchingManager
struct LateLatchingManager_t3198550161;
// Vuforia.ObjectTracker
struct ObjectTracker_t4177997237;
// Vuforia.PositionalDeviceTracker
struct PositionalDeviceTracker_t656722001;
// Vuforia.StateManager
struct StateManager_t1982749557;
// Vuforia.TargetFinder
struct TargetFinder_t2439332195;
// Vuforia.Trackable
struct Trackable_t2451999991;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// Vuforia.TrackableSource
struct TrackableSource_t2567074243;
// Vuforia.TrackerData/TrackableResultData[]
struct TrackableResultDataU5BU5D_t4273811049;
// Vuforia.TrackerData/VuMarkTargetData[]
struct VuMarkTargetDataU5BU5D_t4015091482;
// Vuforia.TrackerData/VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t2157423781;
// Vuforia.UserDefinedTargetBuildingBehaviour
struct UserDefinedTargetBuildingBehaviour_t4262637471;
// Vuforia.VRDeviceController
struct VRDeviceController_t3863472269;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_t2198727358;
// Vuforia.VirtualButton
struct VirtualButton_t386166510;
// Vuforia.VirtualButtonBehaviour
struct VirtualButtonBehaviour_t1436326451;
// Vuforia.VirtualButtonBehaviour[]
struct VirtualButtonBehaviourU5BU5D_t2153394082;
// Vuforia.VuMarkBehaviour
struct VuMarkBehaviour_t1178230459;
// Vuforia.VuMarkManager
struct VuMarkManager_t2982459596;
// Vuforia.VuMarkTarget
struct VuMarkTarget_t1129573803;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3623118391;
// Vuforia.VuforiaARController
struct VuforiaARController_t1876945237;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t2151848540;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t1763229349;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_t721467671;
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t546560202;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t3697830469;
// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct SmartTerrainConfiguration_t1514074484;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t3392414655;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t1101614731;
// Vuforia.VuforiaManager
struct VuforiaManager_t1653423889;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t632567575;

extern RuntimeClass* Action_1_t1302041398_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t1350698054_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimationCurve_t3046754366_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* DeviceTrackerARController_t1095592542_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3625702484_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t898892918_il2cpp_TypeInfo_var;
extern RuntimeClass* DigitalEyewearARController_t1054226036_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* ErrorEventHandler_t3211687919_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_t3436254912_il2cpp_TypeInfo_var;
extern RuntimeClass* FrameQuality_t46289180_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t3822001908_il2cpp_TypeInfo_var;
extern RuntimeClass* FusionProviderType_t4010899297_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t1431852880_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t158083348_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t2265887763_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1610800927_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2884570459_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3718605342_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* ITrackerManager_t607206903_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* InstanceId_t2455430337_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* LineRenderer_t3154350270_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* SamplesMainMenu_t83803002_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* TouchHandler_t3441426771_il2cpp_TypeInfo_var;
extern RuntimeClass* Trackable_t2451999991_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494_il2cpp_TypeInfo_var;
extern RuntimeClass* U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152_il2cpp_TypeInfo_var;
extern RuntimeClass* U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CShowPanelAfterU3Ec__Iterator1_t1638954166_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* VuMarkBehaviour_t1178230459_il2cpp_TypeInfo_var;
extern RuntimeClass* VuMarkTarget_t1129573803_il2cpp_TypeInfo_var;
extern RuntimeClass* VuMarkTemplate_t3623118391_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaARController_t1876945237_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaManager_t1653423889_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitUntil_t3373419216_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1083894219;
extern String_t* _stringLiteral1203774290;
extern String_t* _stringLiteral1236129805;
extern String_t* _stringLiteral1282720118;
extern String_t* _stringLiteral1301807608;
extern String_t* _stringLiteral130596679;
extern String_t* _stringLiteral133775182;
extern String_t* _stringLiteral1420135443;
extern String_t* _stringLiteral1464496448;
extern String_t* _stringLiteral1503557889;
extern String_t* _stringLiteral1518049465;
extern String_t* _stringLiteral153966953;
extern String_t* _stringLiteral1565518172;
extern String_t* _stringLiteral1604074356;
extern String_t* _stringLiteral1652118252;
extern String_t* _stringLiteral1671087354;
extern String_t* _stringLiteral1751771208;
extern String_t* _stringLiteral1793997154;
extern String_t* _stringLiteral198528444;
extern String_t* _stringLiteral2092875817;
extern String_t* _stringLiteral2103867904;
extern String_t* _stringLiteral2126657399;
extern String_t* _stringLiteral2131449724;
extern String_t* _stringLiteral2138194072;
extern String_t* _stringLiteral2155613312;
extern String_t* _stringLiteral2158056861;
extern String_t* _stringLiteral2204736425;
extern String_t* _stringLiteral2277370231;
extern String_t* _stringLiteral2320172621;
extern String_t* _stringLiteral2338220262;
extern String_t* _stringLiteral2350804804;
extern String_t* _stringLiteral2364257750;
extern String_t* _stringLiteral2463663537;
extern String_t* _stringLiteral2488734292;
extern String_t* _stringLiteral2583292761;
extern String_t* _stringLiteral2625406672;
extern String_t* _stringLiteral2711244180;
extern String_t* _stringLiteral2744019522;
extern String_t* _stringLiteral2746114121;
extern String_t* _stringLiteral27616695;
extern String_t* _stringLiteral2828273141;
extern String_t* _stringLiteral2854237347;
extern String_t* _stringLiteral2902409615;
extern String_t* _stringLiteral2933500717;
extern String_t* _stringLiteral2990266777;
extern String_t* _stringLiteral3005784759;
extern String_t* _stringLiteral3036646208;
extern String_t* _stringLiteral3041277966;
extern String_t* _stringLiteral3042945994;
extern String_t* _stringLiteral3061987517;
extern String_t* _stringLiteral3074512661;
extern String_t* _stringLiteral3111837516;
extern String_t* _stringLiteral3156944788;
extern String_t* _stringLiteral316544498;
extern String_t* _stringLiteral3170052601;
extern String_t* _stringLiteral3216961754;
extern String_t* _stringLiteral3225169242;
extern String_t* _stringLiteral3276552461;
extern String_t* _stringLiteral3307481495;
extern String_t* _stringLiteral3373731737;
extern String_t* _stringLiteral3374546222;
extern String_t* _stringLiteral3427509042;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3452614532;
extern String_t* _stringLiteral3452614533;
extern String_t* _stringLiteral3452614616;
extern String_t* _stringLiteral3453413746;
extern String_t* _stringLiteral3486828104;
extern String_t* _stringLiteral3491265674;
extern String_t* _stringLiteral3501509749;
extern String_t* _stringLiteral3546115221;
extern String_t* _stringLiteral3549741636;
extern String_t* _stringLiteral3587629840;
extern String_t* _stringLiteral3592728426;
extern String_t* _stringLiteral3628737245;
extern String_t* _stringLiteral3659986591;
extern String_t* _stringLiteral366052538;
extern String_t* _stringLiteral3707370499;
extern String_t* _stringLiteral3786252490;
extern String_t* _stringLiteral3806870710;
extern String_t* _stringLiteral3877245508;
extern String_t* _stringLiteral3931593679;
extern String_t* _stringLiteral3932363835;
extern String_t* _stringLiteral4039910812;
extern String_t* _stringLiteral408578987;
extern String_t* _stringLiteral4093769862;
extern String_t* _stringLiteral4162797046;
extern String_t* _stringLiteral4181278833;
extern String_t* _stringLiteral4273954858;
extern String_t* _stringLiteral511758811;
extern String_t* _stringLiteral530034621;
extern String_t* _stringLiteral628560640;
extern String_t* _stringLiteral64818126;
extern String_t* _stringLiteral793465148;
extern String_t* _stringLiteral869545341;
extern String_t* _stringLiteral992034722;
extern const RuntimeMethod* Action_1__ctor_m2885317269_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m4047871495_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisCanvasGroup_t4083511760_m2486821986_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisLineRenderer_t3154350270_m2269411787_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisVideoController_t2238106033_m1753125609_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t587009260_m3511415476_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisUserDefinedTargetBuildingBehaviour_t4262637471_m1010333672_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisVideoPlayer_t1683042537_m3779405067_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisVirtualButtonBehaviour_t1436326451_m4196814779_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1235394044_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1828178762_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m19875156_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2275355514_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Count_TisTrackable_t2451999991_m3490415887_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ElementAt_TisDataSet_t3286034874_m1304043092_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisDataSet_t3286034874_m1984750843_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1247034833_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1234730920_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1064371760_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m1399073142_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisLineRenderer_t3154350270_m2920077551_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponentsInChildren_TisCanvas_t3310196443_m2470993954_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponentsInChildren_TisCollider_t1773347010_m248290622_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponentsInChildren_TisImage_t2670269651_m3275015851_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponentsInChildren_TisRenderer_t2627027031_m551606854_RuntimeMethod_var;
extern const RuntimeMethod* ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var;
extern const RuntimeMethod* ITrackerManager_GetTracker_TisPositionalDeviceTracker_t656722001_m1362359953_RuntimeMethod_var;
extern const RuntimeMethod* ITrackerManager_InitTracker_TisPositionalDeviceTracker_t656722001_m428557869_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m6144716_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3978133574_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisCameraSettings_t3152619780_m4203198741_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisFrameQualityMeter_t3206426345_m1820019217_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisMenuOptions_t1951716431_m1050906446_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisPanelShowHide_t3128188850_m4107511304_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisQualityDialog_t529473262_m1126594414_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisVuMarkBehaviour_t1178230459_m2803750251_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisImageTargetBehaviour_t2200418350_m3631208717_RuntimeMethod_var;
extern const RuntimeMethod* TrackableSettings_OnBeforeVuforiaTrackerInitialized_m3565618179_RuntimeMethod_var;
extern const RuntimeMethod* TrackableSettings_OnVuforiaInitialized_m491189749_RuntimeMethod_var;
extern const RuntimeMethod* TrackableSettings_OnVuforiaStarted_m1428112215_RuntimeMethod_var;
extern const RuntimeMethod* U3CDelayOnButtonReleasedEventU3Ec__Iterator0_Reset_m3669565378_RuntimeMethod_var;
extern const RuntimeMethod* U3CFadeOutQualityDialogU3Ec__Iterator0_Reset_m492261578_RuntimeMethod_var;
extern const RuntimeMethod* U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_U3CU3Em__0_m1906099321_RuntimeMethod_var;
extern const RuntimeMethod* U3COnVuMarkTargetAvailableU3Ec__Iterator0_Reset_m1976781890_RuntimeMethod_var;
extern const RuntimeMethod* U3CShowPanelAfterU3Ec__Iterator1_Reset_m1100367435_RuntimeMethod_var;
extern const RuntimeMethod* VideoController_HandleLoopPointReached_m1821354098_RuntimeMethod_var;
extern const RuntimeMethod* VideoController_HandlePrepareCompleted_m2365717223_RuntimeMethod_var;
extern const RuntimeMethod* VideoController_HandleSeekCompleted_m3173537108_RuntimeMethod_var;
extern const RuntimeMethod* VideoController_HandleStartedEvent_m252637058_RuntimeMethod_var;
extern const RuntimeMethod* VideoController_HandleVideoError_m1843996965_RuntimeMethod_var;
extern const RuntimeMethod* VuMarkHandler_GetValueFromDictionary_TisGameObject_t1113636619_m3240415858_RuntimeMethod_var;
extern const RuntimeMethod* VuMarkHandler_GetValueFromDictionary_TisTexture2D_t3840446185_m224541793_RuntimeMethod_var;
extern const RuntimeMethod* VuMarkHandler_OnBeforeVuforiaTrackerInitialized_m424657148_RuntimeMethod_var;
extern const RuntimeMethod* VuMarkHandler_OnVuMarkBehaviourDetected_m2885491279_RuntimeMethod_var;
extern const RuntimeMethod* VuMarkHandler_OnVuMarkDetected_m1153129555_RuntimeMethod_var;
extern const RuntimeMethod* VuMarkHandler_OnVuMarkLost_m1757530151_RuntimeMethod_var;
extern const RuntimeMethod* VuMarkHandler_OnVuforiaStarted_m1391111315_RuntimeMethod_var;
extern const RuntimeMethod* VuMarkTrackableEventHandler_OnVuMarkTargetAssigned_m3717424069_RuntimeMethod_var;
extern const RuntimeMethod* VuMarkTrackableEventHandler_OnVuMarkTargetLost_m3960611387_RuntimeMethod_var;
extern const RuntimeMethod* VuMarkTrackableEventHandler_OnVuforiaStarted_m3972534910_RuntimeMethod_var;
extern const uint32_t SamplesNavigationHandler_LoadMenuScene_m1027968060_MetadataUsageId;
extern const uint32_t SamplesNavigationHandler_OnStartAR_m2510147401_MetadataUsageId;
extern const uint32_t SceneSwitchers_SwitchtoAlice_m772076356_MetadataUsageId;
extern const uint32_t SceneSwitchers_SwitchtoHillel_m838625315_MetadataUsageId;
extern const uint32_t SceneSwitchers_SwitchtoMontessori_m3652170433_MetadataUsageId;
extern const uint32_t SceneSwitchers_SwitchtoPaving_m1391191236_MetadataUsageId;
extern const uint32_t SceneSwitchers_SwitchtoSaltofHeaven_m2622232066_MetadataUsageId;
extern const uint32_t SceneSwitchers_SwitchtoUCF_m3182087219_MetadataUsageId;
extern const uint32_t TapHandler_HandleTap_m1322678531_MetadataUsageId;
extern const uint32_t TapHandler_OnDoubleTap_m2928608177_MetadataUsageId;
extern const uint32_t TapHandler_OnSingleTapConfirmed_m3372274260_MetadataUsageId;
extern const uint32_t TapHandler_Start_m554074027_MetadataUsageId;
extern const uint32_t TapHandler_Update_m2328515667_MetadataUsageId;
extern const uint32_t TouchHandler_IsSingleFingerDown_m3398302991_MetadataUsageId;
extern const uint32_t TouchHandler_Update_m979527913_MetadataUsageId;
extern const uint32_t TouchHandler_get_DoubleTap_m2526479256_MetadataUsageId;
extern const uint32_t TouchHandler_get_IsSingleFingerDragging_m622244804_MetadataUsageId;
extern const uint32_t TouchHandler_get_IsSingleFingerStationary_m3242675026_MetadataUsageId;
extern const uint32_t TrackableSettings_ActivateDataSet_m4118878993_MetadataUsageId;
extern const uint32_t TrackableSettings_Awake_m3736947311_MetadataUsageId;
extern const uint32_t TrackableSettings_GetActiveDatasetName_m1771968640_MetadataUsageId;
extern const uint32_t TrackableSettings_OnBeforeVuforiaTrackerInitialized_m3565618179_MetadataUsageId;
extern const uint32_t TrackableSettings_OnDestroy_m3924781701_MetadataUsageId;
extern const uint32_t TrackableSettings_OnVuforiaInitialized_m491189749_MetadataUsageId;
extern const uint32_t TrackableSettings_Start_m2630206653_MetadataUsageId;
extern const uint32_t TrackableSettings_ToggleDeviceTracking_m2293540750_MetadataUsageId;
extern const uint32_t U3CDelayOnButtonReleasedEventU3Ec__Iterator0_MoveNext_m1533449474_MetadataUsageId;
extern const uint32_t U3CDelayOnButtonReleasedEventU3Ec__Iterator0_Reset_m3669565378_MetadataUsageId;
extern const uint32_t U3CFadeOutQualityDialogU3Ec__Iterator0_MoveNext_m2636230838_MetadataUsageId;
extern const uint32_t U3CFadeOutQualityDialogU3Ec__Iterator0_Reset_m492261578_MetadataUsageId;
extern const uint32_t U3COnVuMarkTargetAvailableU3Ec__Iterator0_MoveNext_m1211627643_MetadataUsageId;
extern const uint32_t U3COnVuMarkTargetAvailableU3Ec__Iterator0_Reset_m1976781890_MetadataUsageId;
extern const uint32_t U3CShowPanelAfterU3Ec__Iterator1_MoveNext_m1609615004_MetadataUsageId;
extern const uint32_t U3CShowPanelAfterU3Ec__Iterator1_Reset_m1100367435_MetadataUsageId;
extern const uint32_t UDTEventHandler_BuildNewTarget_m1528029411_MetadataUsageId;
extern const uint32_t UDTEventHandler_FadeOutQualityDialog_m980690163_MetadataUsageId;
extern const uint32_t UDTEventHandler_OnFrameQualityChanged_m719761063_MetadataUsageId;
extern const uint32_t UDTEventHandler_OnInitialized_m3816131351_MetadataUsageId;
extern const uint32_t UDTEventHandler_OnNewTrackableSource_m1601646674_MetadataUsageId;
extern const uint32_t UDTEventHandler_Start_m3476692967_MetadataUsageId;
extern const uint32_t URL_HillelSite_m3664511886_MetadataUsageId;
extern const uint32_t URL_MontessoriSite_m3652069198_MetadataUsageId;
extern const uint32_t URL_MyEscapeURL_m3517090145_MetadataUsageId;
extern const uint32_t URL_PavingtheWaySite_m4006525426_MetadataUsageId;
extern const uint32_t URL_SendEmail_m4229652824_MetadataUsageId;
extern const uint32_t URL_SlatofHeavenSite_m913799348_MetadataUsageId;
extern const uint32_t URL_UCFSite_m170137463_MetadataUsageId;
extern const uint32_t URL_neptuneVideo_m3338928179_MetadataUsageId;
extern const uint32_t URL_neptuneWebsite_m774126154_MetadataUsageId;
extern const uint32_t URL_openLWAFacebookPage_m4054613283_MetadataUsageId;
extern const uint32_t URL_openLWATelegram_m2467091938_MetadataUsageId;
extern const uint32_t URL_openLeapWithAliceSite_m1152243986_MetadataUsageId;
extern const uint32_t URL_openOkojiPage_m1322536793_MetadataUsageId;
extern const uint32_t URL_openSchoolSite1_m4139449927_MetadataUsageId;
extern const uint32_t URL_openSchoolSite2_m2183134791_MetadataUsageId;
extern const uint32_t UtilityHelper_EnableRendererColliderCanvas_m3340540226_MetadataUsageId;
extern const uint32_t UtilityHelper_RotateTowardCamera_m3301900625_MetadataUsageId;
extern const uint32_t VideoController_HandleLoopPointReached_m1821354098_MetadataUsageId;
extern const uint32_t VideoController_HandlePrepareCompleted_m2365717223_MetadataUsageId;
extern const uint32_t VideoController_HandleSeekCompleted_m3173537108_MetadataUsageId;
extern const uint32_t VideoController_HandleStartedEvent_m252637058_MetadataUsageId;
extern const uint32_t VideoController_HandleVideoError_m1843996965_MetadataUsageId;
extern const uint32_t VideoController_LogClipInfo_m4268250143_MetadataUsageId;
extern const uint32_t VideoController_OnApplicationPause_m54962351_MetadataUsageId;
extern const uint32_t VideoController_Pause_m3562938676_MetadataUsageId;
extern const uint32_t VideoController_Play_m3654523600_MetadataUsageId;
extern const uint32_t VideoController_ShowPlayButton_m3344188228_MetadataUsageId;
extern const uint32_t VideoController_Start_m2118955092_MetadataUsageId;
extern const uint32_t VideoController_Update_m3618326226_MetadataUsageId;
extern const uint32_t VideoTrackableEventHandler_OnTrackingFound_m2042275778_MetadataUsageId;
extern const uint32_t VideoTrackableEventHandler_OnTrackingLost_m2629131473_MetadataUsageId;
extern const uint32_t VirtualButtonEventHandler_DelayOnButtonReleasedEvent_m751776769_MetadataUsageId;
extern const uint32_t VirtualButtonEventHandler_OnButtonPressed_m2383829469_MetadataUsageId;
extern const uint32_t VirtualButtonEventHandler_OnButtonReleased_m160710258_MetadataUsageId;
extern const uint32_t VirtualButtonEventHandler_SetVirtualButtonMaterial_m447769224_MetadataUsageId;
extern const uint32_t VirtualButtonEventHandler_Start_m2291542140_MetadataUsageId;
extern const uint32_t VuMarkHandler_Awake_m1422516943_MetadataUsageId;
extern const uint32_t VuMarkHandler_DestroyChildAugmentationsOfTransform_m3294511784_MetadataUsageId;
extern const uint32_t VuMarkHandler_FlipTextureY_m40679181_MetadataUsageId;
extern const uint32_t VuMarkHandler_GenerateTextureFromVuMarkInstanceImage_m2453209064_MetadataUsageId;
extern const uint32_t VuMarkHandler_GenerateVuMarkBorderOutline_m2061814309_MetadataUsageId;
extern const uint32_t VuMarkHandler_GetNumericVuMarkDescription_m384725732_MetadataUsageId;
extern const uint32_t VuMarkHandler_GetVuMarkDataType_m4036864623_MetadataUsageId;
extern const uint32_t VuMarkHandler_GetVuMarkId_m2242633984_MetadataUsageId;
extern const uint32_t VuMarkHandler_GetVuMarkImage_m1022510546_MetadataUsageId;
extern const uint32_t VuMarkHandler_OnBeforeVuforiaTrackerInitialized_m424657148_MetadataUsageId;
extern const uint32_t VuMarkHandler_OnDestroy_m1959387815_MetadataUsageId;
extern const uint32_t VuMarkHandler_OnVuMarkBehaviourDetected_m2885491279_MetadataUsageId;
extern const uint32_t VuMarkHandler_OnVuMarkDetected_m1153129555_MetadataUsageId;
extern const uint32_t VuMarkHandler_OnVuMarkLost_m1757530151_MetadataUsageId;
extern const uint32_t VuMarkHandler_OnVuMarkTargetAvailable_m27070708_MetadataUsageId;
extern const uint32_t VuMarkHandler_OnVuforiaStarted_m1391111315_MetadataUsageId;
extern const uint32_t VuMarkHandler_RetrieveStoredTextureForVuMarkTarget_m3023601945_MetadataUsageId;
extern const uint32_t VuMarkHandler_SetVuMarkAugmentation_m3922064865_MetadataUsageId;
extern const uint32_t VuMarkHandler_SetVuMarkInfoForCanvas_m2305932128_MetadataUsageId;
extern const uint32_t VuMarkHandler_SetVuMarkOpticalSeeThroughConfig_m1191219436_MetadataUsageId;
extern const uint32_t VuMarkHandler_ShowPanelAfter_m629699576_MetadataUsageId;
extern const uint32_t VuMarkHandler_Start_m3241718565_MetadataUsageId;
extern const uint32_t VuMarkHandler_ToggleRenderers_m2154168747_MetadataUsageId;
extern const uint32_t VuMarkHandler_UpdateClosestTarget_m1555317948_MetadataUsageId;
extern const uint32_t VuMarkTrackableEventHandler_DestroyChildAugmentationsOfTransform_m3112459060_MetadataUsageId;
extern const uint32_t VuMarkTrackableEventHandler_OnVuMarkTargetAssigned_m3717424069_MetadataUsageId;
extern const uint32_t VuMarkTrackableEventHandler_OnVuMarkTargetLost_m3960611387_MetadataUsageId;
extern const uint32_t VuMarkTrackableEventHandler_OnVuforiaStarted_m3972534910_MetadataUsageId;
extern const uint32_t VuMarkTrackableEventHandler_Start_m3485156240_MetadataUsageId;
extern const uint32_t VuMarkTrackableEventHandler_UpdateCanvasFadeAmount_m1272505830_MetadataUsageId;
extern const uint32_t VuMarkTrackableEventHandler_UpdateVuMarkBorderOutline_m3636685738_MetadataUsageId;

struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;
struct CanvasU5BU5D_t682926938;
struct ColliderU5BU5D_t4234922487;
struct ColorU5BU5D_t941916413;
struct RendererU5BU5D_t3210418286;
struct TouchU5BU5D_t1849554061;
struct ImageU5BU5D_t2439009922;
struct Vector3U5BU5D_t1718750761;
struct AugmentationObjectU5BU5D_t2045593289;
struct VirtualButtonBehaviourU5BU5D_t2153394082;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T898892918_H
#define DICTIONARY_2_T898892918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct  Dictionary_2_t898892918  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	GameObjectU5BU5D_t3328599146* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___valueSlots_7)); }
	inline GameObjectU5BU5D_t3328599146* get_valueSlots_7() const { return ___valueSlots_7; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(GameObjectU5BU5D_t3328599146* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t898892918_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2179010862 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2179010862 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2179010862 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2179010862 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T898892918_H
#ifndef DICTIONARY_2_T3625702484_H
#define DICTIONARY_2_T3625702484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
struct  Dictionary_2_t3625702484  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Texture2DU5BU5D_t149664596* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3625702484, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3625702484, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3625702484, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3625702484, ___valueSlots_7)); }
	inline Texture2DU5BU5D_t149664596* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Texture2DU5BU5D_t149664596** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Texture2DU5BU5D_t149664596* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3625702484, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3625702484, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3625702484, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3625702484, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3625702484, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3625702484, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3625702484, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3625702484_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3295043608 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3625702484_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3295043608 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3295043608 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3295043608 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3625702484_H
#ifndef LIST_1_T463142320_H
#define LIST_1_T463142320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Vuforia.DataSet>
struct  List_1_t463142320  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DataSetU5BU5D_t4052198943* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t463142320, ____items_1)); }
	inline DataSetU5BU5D_t4052198943* get__items_1() const { return ____items_1; }
	inline DataSetU5BU5D_t4052198943** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DataSetU5BU5D_t4052198943* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t463142320, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t463142320, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t463142320_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	DataSetU5BU5D_t4052198943* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t463142320_StaticFields, ___EmptyArray_4)); }
	inline DataSetU5BU5D_t4052198943* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline DataSetU5BU5D_t4052198943** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(DataSetU5BU5D_t4052198943* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T463142320_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CFADEOUTQUALITYDIALOGU3EC__ITERATOR0_T2977426494_H
#define U3CFADEOUTQUALITYDIALOGU3EC__ITERATOR0_T2977426494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UDTEventHandler/<FadeOutQualityDialog>c__Iterator0
struct  U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494  : public RuntimeObject
{
public:
	// UnityEngine.CanvasGroup UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::<canvasGroup>__0
	CanvasGroup_t4083511760 * ___U3CcanvasGroupU3E__0_0;
	// System.Single UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::<f>__1
	float ___U3CfU3E__1_1;
	// UDTEventHandler UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::$this
	UDTEventHandler_t2349357857 * ___U24this_2;
	// System.Object UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CcanvasGroupU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494, ___U3CcanvasGroupU3E__0_0)); }
	inline CanvasGroup_t4083511760 * get_U3CcanvasGroupU3E__0_0() const { return ___U3CcanvasGroupU3E__0_0; }
	inline CanvasGroup_t4083511760 ** get_address_of_U3CcanvasGroupU3E__0_0() { return &___U3CcanvasGroupU3E__0_0; }
	inline void set_U3CcanvasGroupU3E__0_0(CanvasGroup_t4083511760 * value)
	{
		___U3CcanvasGroupU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcanvasGroupU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CfU3E__1_1() { return static_cast<int32_t>(offsetof(U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494, ___U3CfU3E__1_1)); }
	inline float get_U3CfU3E__1_1() const { return ___U3CfU3E__1_1; }
	inline float* get_address_of_U3CfU3E__1_1() { return &___U3CfU3E__1_1; }
	inline void set_U3CfU3E__1_1(float value)
	{
		___U3CfU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494, ___U24this_2)); }
	inline UDTEventHandler_t2349357857 * get_U24this_2() const { return ___U24this_2; }
	inline UDTEventHandler_t2349357857 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(UDTEventHandler_t2349357857 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADEOUTQUALITYDIALOGU3EC__ITERATOR0_T2977426494_H
#ifndef CUSTOMYIELDINSTRUCTION_T1895667560_H
#define CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1895667560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef UTILITYHELPER_T1766679415_H
#define UTILITYHELPER_T1766679415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UtilityHelper
struct  UtilityHelper_t1766679415  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILITYHELPER_T1766679415_H
#ifndef U3CDELAYONBUTTONRELEASEDEVENTU3EC__ITERATOR0_T2119283297_H
#define U3CDELAYONBUTTONRELEASEDEVENTU3EC__ITERATOR0_T2119283297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0
struct  U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297  : public RuntimeObject
{
public:
	// System.Single VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::waitTime
	float ___waitTime_0;
	// VirtualButtonEventHandler VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::$this
	VirtualButtonEventHandler_t1548763206 * ___U24this_1;
	// System.Object VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_waitTime_0() { return static_cast<int32_t>(offsetof(U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297, ___waitTime_0)); }
	inline float get_waitTime_0() const { return ___waitTime_0; }
	inline float* get_address_of_waitTime_0() { return &___waitTime_0; }
	inline void set_waitTime_0(float value)
	{
		___waitTime_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297, ___U24this_1)); }
	inline VirtualButtonEventHandler_t1548763206 * get_U24this_1() const { return ___U24this_1; }
	inline VirtualButtonEventHandler_t1548763206 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(VirtualButtonEventHandler_t1548763206 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDELAYONBUTTONRELEASEDEVENTU3EC__ITERATOR0_T2119283297_H
#ifndef U3CONVUMARKTARGETAVAILABLEU3EC__ITERATOR0_T1919121394_H
#define U3CONVUMARKTARGETAVAILABLEU3EC__ITERATOR0_T1919121394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0
struct  U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394  : public RuntimeObject
{
public:
	// Vuforia.VuMarkBehaviour VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0::vumarkBehaviour
	VuMarkBehaviour_t1178230459 * ___vumarkBehaviour_0;
	// VuMarkHandler VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0::$this
	VuMarkHandler_t1415762101 * ___U24this_1;
	// System.Object VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0::$PC
	int32_t ___U24PC_4;
	// VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0/<OnVuMarkTargetAvailable>c__AnonStorey2 VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0::$locvar0
	U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 * ___U24locvar0_5;

public:
	inline static int32_t get_offset_of_vumarkBehaviour_0() { return static_cast<int32_t>(offsetof(U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394, ___vumarkBehaviour_0)); }
	inline VuMarkBehaviour_t1178230459 * get_vumarkBehaviour_0() const { return ___vumarkBehaviour_0; }
	inline VuMarkBehaviour_t1178230459 ** get_address_of_vumarkBehaviour_0() { return &___vumarkBehaviour_0; }
	inline void set_vumarkBehaviour_0(VuMarkBehaviour_t1178230459 * value)
	{
		___vumarkBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___vumarkBehaviour_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394, ___U24this_1)); }
	inline VuMarkHandler_t1415762101 * get_U24this_1() const { return ___U24this_1; }
	inline VuMarkHandler_t1415762101 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(VuMarkHandler_t1415762101 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}

	inline static int32_t get_offset_of_U24locvar0_5() { return static_cast<int32_t>(offsetof(U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394, ___U24locvar0_5)); }
	inline U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 * get_U24locvar0_5() const { return ___U24locvar0_5; }
	inline U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 ** get_address_of_U24locvar0_5() { return &___U24locvar0_5; }
	inline void set_U24locvar0_5(U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 * value)
	{
		___U24locvar0_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONVUMARKTARGETAVAILABLEU3EC__ITERATOR0_T1919121394_H
#ifndef U3CONVUMARKTARGETAVAILABLEU3EC__ANONSTOREY2_T602961152_H
#define U3CONVUMARKTARGETAVAILABLEU3EC__ANONSTOREY2_T602961152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0/<OnVuMarkTargetAvailable>c__AnonStorey2
struct  U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152  : public RuntimeObject
{
public:
	// Vuforia.VuMarkBehaviour VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0/<OnVuMarkTargetAvailable>c__AnonStorey2::vumarkBehaviour
	VuMarkBehaviour_t1178230459 * ___vumarkBehaviour_0;
	// VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0 VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0/<OnVuMarkTargetAvailable>c__AnonStorey2::<>f__ref$0
	U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * ___U3CU3Ef__refU240_1;

public:
	inline static int32_t get_offset_of_vumarkBehaviour_0() { return static_cast<int32_t>(offsetof(U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152, ___vumarkBehaviour_0)); }
	inline VuMarkBehaviour_t1178230459 * get_vumarkBehaviour_0() const { return ___vumarkBehaviour_0; }
	inline VuMarkBehaviour_t1178230459 ** get_address_of_vumarkBehaviour_0() { return &___vumarkBehaviour_0; }
	inline void set_vumarkBehaviour_0(VuMarkBehaviour_t1178230459 * value)
	{
		___vumarkBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___vumarkBehaviour_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU240_1() { return static_cast<int32_t>(offsetof(U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152, ___U3CU3Ef__refU240_1)); }
	inline U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * get_U3CU3Ef__refU240_1() const { return ___U3CU3Ef__refU240_1; }
	inline U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 ** get_address_of_U3CU3Ef__refU240_1() { return &___U3CU3Ef__refU240_1; }
	inline void set_U3CU3Ef__refU240_1(U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * value)
	{
		___U3CU3Ef__refU240_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU240_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONVUMARKTARGETAVAILABLEU3EC__ANONSTOREY2_T602961152_H
#ifndef U3CSHOWPANELAFTERU3EC__ITERATOR1_T1638954166_H
#define U3CSHOWPANELAFTERU3EC__ITERATOR1_T1638954166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuMarkHandler/<ShowPanelAfter>c__Iterator1
struct  U3CShowPanelAfterU3Ec__Iterator1_t1638954166  : public RuntimeObject
{
public:
	// System.Single VuMarkHandler/<ShowPanelAfter>c__Iterator1::seconds
	float ___seconds_0;
	// System.String VuMarkHandler/<ShowPanelAfter>c__Iterator1::vuMarkId
	String_t* ___vuMarkId_1;
	// System.String VuMarkHandler/<ShowPanelAfter>c__Iterator1::vuMarkDataType
	String_t* ___vuMarkDataType_2;
	// System.String VuMarkHandler/<ShowPanelAfter>c__Iterator1::vuMarkDesc
	String_t* ___vuMarkDesc_3;
	// UnityEngine.Sprite VuMarkHandler/<ShowPanelAfter>c__Iterator1::vuMarkImage
	Sprite_t280657092 * ___vuMarkImage_4;
	// VuMarkHandler VuMarkHandler/<ShowPanelAfter>c__Iterator1::$this
	VuMarkHandler_t1415762101 * ___U24this_5;
	// System.Object VuMarkHandler/<ShowPanelAfter>c__Iterator1::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean VuMarkHandler/<ShowPanelAfter>c__Iterator1::$disposing
	bool ___U24disposing_7;
	// System.Int32 VuMarkHandler/<ShowPanelAfter>c__Iterator1::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_seconds_0() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator1_t1638954166, ___seconds_0)); }
	inline float get_seconds_0() const { return ___seconds_0; }
	inline float* get_address_of_seconds_0() { return &___seconds_0; }
	inline void set_seconds_0(float value)
	{
		___seconds_0 = value;
	}

	inline static int32_t get_offset_of_vuMarkId_1() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator1_t1638954166, ___vuMarkId_1)); }
	inline String_t* get_vuMarkId_1() const { return ___vuMarkId_1; }
	inline String_t** get_address_of_vuMarkId_1() { return &___vuMarkId_1; }
	inline void set_vuMarkId_1(String_t* value)
	{
		___vuMarkId_1 = value;
		Il2CppCodeGenWriteBarrier((&___vuMarkId_1), value);
	}

	inline static int32_t get_offset_of_vuMarkDataType_2() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator1_t1638954166, ___vuMarkDataType_2)); }
	inline String_t* get_vuMarkDataType_2() const { return ___vuMarkDataType_2; }
	inline String_t** get_address_of_vuMarkDataType_2() { return &___vuMarkDataType_2; }
	inline void set_vuMarkDataType_2(String_t* value)
	{
		___vuMarkDataType_2 = value;
		Il2CppCodeGenWriteBarrier((&___vuMarkDataType_2), value);
	}

	inline static int32_t get_offset_of_vuMarkDesc_3() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator1_t1638954166, ___vuMarkDesc_3)); }
	inline String_t* get_vuMarkDesc_3() const { return ___vuMarkDesc_3; }
	inline String_t** get_address_of_vuMarkDesc_3() { return &___vuMarkDesc_3; }
	inline void set_vuMarkDesc_3(String_t* value)
	{
		___vuMarkDesc_3 = value;
		Il2CppCodeGenWriteBarrier((&___vuMarkDesc_3), value);
	}

	inline static int32_t get_offset_of_vuMarkImage_4() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator1_t1638954166, ___vuMarkImage_4)); }
	inline Sprite_t280657092 * get_vuMarkImage_4() const { return ___vuMarkImage_4; }
	inline Sprite_t280657092 ** get_address_of_vuMarkImage_4() { return &___vuMarkImage_4; }
	inline void set_vuMarkImage_4(Sprite_t280657092 * value)
	{
		___vuMarkImage_4 = value;
		Il2CppCodeGenWriteBarrier((&___vuMarkImage_4), value);
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator1_t1638954166, ___U24this_5)); }
	inline VuMarkHandler_t1415762101 * get_U24this_5() const { return ___U24this_5; }
	inline VuMarkHandler_t1415762101 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(VuMarkHandler_t1415762101 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator1_t1638954166, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator1_t1638954166, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator1_t1638954166, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSHOWPANELAFTERU3EC__ITERATOR1_T1638954166_H
#ifndef AUGMENTATIONOBJECT_T2506029784_H
#define AUGMENTATIONOBJECT_T2506029784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuMarkHandler/AugmentationObject
struct  AugmentationObject_t2506029784  : public RuntimeObject
{
public:
	// System.String VuMarkHandler/AugmentationObject::vumarkID
	String_t* ___vumarkID_0;
	// UnityEngine.GameObject VuMarkHandler/AugmentationObject::augmentation
	GameObject_t1113636619 * ___augmentation_1;

public:
	inline static int32_t get_offset_of_vumarkID_0() { return static_cast<int32_t>(offsetof(AugmentationObject_t2506029784, ___vumarkID_0)); }
	inline String_t* get_vumarkID_0() const { return ___vumarkID_0; }
	inline String_t** get_address_of_vumarkID_0() { return &___vumarkID_0; }
	inline void set_vumarkID_0(String_t* value)
	{
		___vumarkID_0 = value;
		Il2CppCodeGenWriteBarrier((&___vumarkID_0), value);
	}

	inline static int32_t get_offset_of_augmentation_1() { return static_cast<int32_t>(offsetof(AugmentationObject_t2506029784, ___augmentation_1)); }
	inline GameObject_t1113636619 * get_augmentation_1() const { return ___augmentation_1; }
	inline GameObject_t1113636619 ** get_address_of_augmentation_1() { return &___augmentation_1; }
	inline void set_augmentation_1(GameObject_t1113636619 * value)
	{
		___augmentation_1 = value;
		Il2CppCodeGenWriteBarrier((&___augmentation_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUGMENTATIONOBJECT_T2506029784_H
#ifndef ARCONTROLLER_T116632334_H
#define ARCONTROLLER_T116632334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_t116632334  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_t116632334, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCONTROLLER_T116632334_H
#ifndef STATEMANAGER_T1982749557_H
#define STATEMANAGER_T1982749557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.StateManager
struct  StateManager_t1982749557  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManager::mTrackableBehaviours
	Dictionary_2_t2272543 * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManager::mAutomaticallyCreatedBehaviours
	List_1_t128053199 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mBehavioursMarkedForDeletion
	List_1_t2585633954 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mActiveTrackableBehaviours
	List_1_t2585633954 * ___mActiveTrackableBehaviours_3;
	// Vuforia.VuMarkManager Vuforia.StateManager::mVuMarkManager
	VuMarkManager_t2982459596 * ___mVuMarkManager_4;
	// Vuforia.DeviceTrackingManager Vuforia.StateManager::mDeviceTrackingManager
	DeviceTrackingManager_t3849131975 * ___mDeviceTrackingManager_5;
	// UnityEngine.GameObject Vuforia.StateManager::mCameraPositioningHelper
	GameObject_t1113636619 * ___mCameraPositioningHelper_6;
	// Vuforia.IExtendedTrackingManager Vuforia.StateManager::mExtendedTrackingManager
	RuntimeObject* ___mExtendedTrackingManager_7;
	// Vuforia.IlluminationManager Vuforia.StateManager::mIlluminationManager
	IlluminationManager_t3960931838 * ___mIlluminationManager_8;

public:
	inline static int32_t get_offset_of_mTrackableBehaviours_0() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mTrackableBehaviours_0)); }
	inline Dictionary_2_t2272543 * get_mTrackableBehaviours_0() const { return ___mTrackableBehaviours_0; }
	inline Dictionary_2_t2272543 ** get_address_of_mTrackableBehaviours_0() { return &___mTrackableBehaviours_0; }
	inline void set_mTrackableBehaviours_0(Dictionary_2_t2272543 * value)
	{
		___mTrackableBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviours_0), value);
	}

	inline static int32_t get_offset_of_mAutomaticallyCreatedBehaviours_1() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mAutomaticallyCreatedBehaviours_1)); }
	inline List_1_t128053199 * get_mAutomaticallyCreatedBehaviours_1() const { return ___mAutomaticallyCreatedBehaviours_1; }
	inline List_1_t128053199 ** get_address_of_mAutomaticallyCreatedBehaviours_1() { return &___mAutomaticallyCreatedBehaviours_1; }
	inline void set_mAutomaticallyCreatedBehaviours_1(List_1_t128053199 * value)
	{
		___mAutomaticallyCreatedBehaviours_1 = value;
		Il2CppCodeGenWriteBarrier((&___mAutomaticallyCreatedBehaviours_1), value);
	}

	inline static int32_t get_offset_of_mBehavioursMarkedForDeletion_2() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mBehavioursMarkedForDeletion_2)); }
	inline List_1_t2585633954 * get_mBehavioursMarkedForDeletion_2() const { return ___mBehavioursMarkedForDeletion_2; }
	inline List_1_t2585633954 ** get_address_of_mBehavioursMarkedForDeletion_2() { return &___mBehavioursMarkedForDeletion_2; }
	inline void set_mBehavioursMarkedForDeletion_2(List_1_t2585633954 * value)
	{
		___mBehavioursMarkedForDeletion_2 = value;
		Il2CppCodeGenWriteBarrier((&___mBehavioursMarkedForDeletion_2), value);
	}

	inline static int32_t get_offset_of_mActiveTrackableBehaviours_3() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mActiveTrackableBehaviours_3)); }
	inline List_1_t2585633954 * get_mActiveTrackableBehaviours_3() const { return ___mActiveTrackableBehaviours_3; }
	inline List_1_t2585633954 ** get_address_of_mActiveTrackableBehaviours_3() { return &___mActiveTrackableBehaviours_3; }
	inline void set_mActiveTrackableBehaviours_3(List_1_t2585633954 * value)
	{
		___mActiveTrackableBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveTrackableBehaviours_3), value);
	}

	inline static int32_t get_offset_of_mVuMarkManager_4() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mVuMarkManager_4)); }
	inline VuMarkManager_t2982459596 * get_mVuMarkManager_4() const { return ___mVuMarkManager_4; }
	inline VuMarkManager_t2982459596 ** get_address_of_mVuMarkManager_4() { return &___mVuMarkManager_4; }
	inline void set_mVuMarkManager_4(VuMarkManager_t2982459596 * value)
	{
		___mVuMarkManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkManager_4), value);
	}

	inline static int32_t get_offset_of_mDeviceTrackingManager_5() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mDeviceTrackingManager_5)); }
	inline DeviceTrackingManager_t3849131975 * get_mDeviceTrackingManager_5() const { return ___mDeviceTrackingManager_5; }
	inline DeviceTrackingManager_t3849131975 ** get_address_of_mDeviceTrackingManager_5() { return &___mDeviceTrackingManager_5; }
	inline void set_mDeviceTrackingManager_5(DeviceTrackingManager_t3849131975 * value)
	{
		___mDeviceTrackingManager_5 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceTrackingManager_5), value);
	}

	inline static int32_t get_offset_of_mCameraPositioningHelper_6() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mCameraPositioningHelper_6)); }
	inline GameObject_t1113636619 * get_mCameraPositioningHelper_6() const { return ___mCameraPositioningHelper_6; }
	inline GameObject_t1113636619 ** get_address_of_mCameraPositioningHelper_6() { return &___mCameraPositioningHelper_6; }
	inline void set_mCameraPositioningHelper_6(GameObject_t1113636619 * value)
	{
		___mCameraPositioningHelper_6 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraPositioningHelper_6), value);
	}

	inline static int32_t get_offset_of_mExtendedTrackingManager_7() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mExtendedTrackingManager_7)); }
	inline RuntimeObject* get_mExtendedTrackingManager_7() const { return ___mExtendedTrackingManager_7; }
	inline RuntimeObject** get_address_of_mExtendedTrackingManager_7() { return &___mExtendedTrackingManager_7; }
	inline void set_mExtendedTrackingManager_7(RuntimeObject* value)
	{
		___mExtendedTrackingManager_7 = value;
		Il2CppCodeGenWriteBarrier((&___mExtendedTrackingManager_7), value);
	}

	inline static int32_t get_offset_of_mIlluminationManager_8() { return static_cast<int32_t>(offsetof(StateManager_t1982749557, ___mIlluminationManager_8)); }
	inline IlluminationManager_t3960931838 * get_mIlluminationManager_8() const { return ___mIlluminationManager_8; }
	inline IlluminationManager_t3960931838 ** get_address_of_mIlluminationManager_8() { return &___mIlluminationManager_8; }
	inline void set_mIlluminationManager_8(IlluminationManager_t3960931838 * value)
	{
		___mIlluminationManager_8 = value;
		Il2CppCodeGenWriteBarrier((&___mIlluminationManager_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMANAGER_T1982749557_H
#ifndef TRACKER_T2709586299_H
#define TRACKER_T2709586299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Tracker
struct  Tracker_t2709586299  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t2709586299, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKER_T2709586299_H
#ifndef VUMARKMANAGER_T2982459596_H
#define VUMARKMANAGER_T2982459596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkManager
struct  VuMarkManager_t2982459596  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Vuforia.VuMarkBehaviour>> Vuforia.VuMarkManager::mBehaviours
	Dictionary_2_t1539018532 * ___mBehaviours_0;
	// System.Collections.Generic.List`1<Vuforia.VuMarkTarget> Vuforia.VuMarkManager::mActiveVuMarkTargets
	List_1_t2601648545 * ___mActiveVuMarkTargets_1;
	// System.Collections.Generic.List`1<Vuforia.VuMarkBehaviour> Vuforia.VuMarkManager::mDestroyedBehaviours
	List_1_t2650305201 * ___mDestroyedBehaviours_2;
	// System.Action`1<Vuforia.VuMarkTarget> Vuforia.VuMarkManager::mOnVuMarkDetected
	Action_1_t1302041398 * ___mOnVuMarkDetected_3;
	// System.Action`1<Vuforia.VuMarkTarget> Vuforia.VuMarkManager::mOnVuMarkLost
	Action_1_t1302041398 * ___mOnVuMarkLost_4;
	// System.Action`1<Vuforia.VuMarkBehaviour> Vuforia.VuMarkManager::mOnVuMarkBehaviourDetected
	Action_1_t1350698054 * ___mOnVuMarkBehaviourDetected_5;

public:
	inline static int32_t get_offset_of_mBehaviours_0() { return static_cast<int32_t>(offsetof(VuMarkManager_t2982459596, ___mBehaviours_0)); }
	inline Dictionary_2_t1539018532 * get_mBehaviours_0() const { return ___mBehaviours_0; }
	inline Dictionary_2_t1539018532 ** get_address_of_mBehaviours_0() { return &___mBehaviours_0; }
	inline void set_mBehaviours_0(Dictionary_2_t1539018532 * value)
	{
		___mBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier((&___mBehaviours_0), value);
	}

	inline static int32_t get_offset_of_mActiveVuMarkTargets_1() { return static_cast<int32_t>(offsetof(VuMarkManager_t2982459596, ___mActiveVuMarkTargets_1)); }
	inline List_1_t2601648545 * get_mActiveVuMarkTargets_1() const { return ___mActiveVuMarkTargets_1; }
	inline List_1_t2601648545 ** get_address_of_mActiveVuMarkTargets_1() { return &___mActiveVuMarkTargets_1; }
	inline void set_mActiveVuMarkTargets_1(List_1_t2601648545 * value)
	{
		___mActiveVuMarkTargets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveVuMarkTargets_1), value);
	}

	inline static int32_t get_offset_of_mDestroyedBehaviours_2() { return static_cast<int32_t>(offsetof(VuMarkManager_t2982459596, ___mDestroyedBehaviours_2)); }
	inline List_1_t2650305201 * get_mDestroyedBehaviours_2() const { return ___mDestroyedBehaviours_2; }
	inline List_1_t2650305201 ** get_address_of_mDestroyedBehaviours_2() { return &___mDestroyedBehaviours_2; }
	inline void set_mDestroyedBehaviours_2(List_1_t2650305201 * value)
	{
		___mDestroyedBehaviours_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDestroyedBehaviours_2), value);
	}

	inline static int32_t get_offset_of_mOnVuMarkDetected_3() { return static_cast<int32_t>(offsetof(VuMarkManager_t2982459596, ___mOnVuMarkDetected_3)); }
	inline Action_1_t1302041398 * get_mOnVuMarkDetected_3() const { return ___mOnVuMarkDetected_3; }
	inline Action_1_t1302041398 ** get_address_of_mOnVuMarkDetected_3() { return &___mOnVuMarkDetected_3; }
	inline void set_mOnVuMarkDetected_3(Action_1_t1302041398 * value)
	{
		___mOnVuMarkDetected_3 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuMarkDetected_3), value);
	}

	inline static int32_t get_offset_of_mOnVuMarkLost_4() { return static_cast<int32_t>(offsetof(VuMarkManager_t2982459596, ___mOnVuMarkLost_4)); }
	inline Action_1_t1302041398 * get_mOnVuMarkLost_4() const { return ___mOnVuMarkLost_4; }
	inline Action_1_t1302041398 ** get_address_of_mOnVuMarkLost_4() { return &___mOnVuMarkLost_4; }
	inline void set_mOnVuMarkLost_4(Action_1_t1302041398 * value)
	{
		___mOnVuMarkLost_4 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuMarkLost_4), value);
	}

	inline static int32_t get_offset_of_mOnVuMarkBehaviourDetected_5() { return static_cast<int32_t>(offsetof(VuMarkManager_t2982459596, ___mOnVuMarkBehaviourDetected_5)); }
	inline Action_1_t1350698054 * get_mOnVuMarkBehaviourDetected_5() const { return ___mOnVuMarkBehaviourDetected_5; }
	inline Action_1_t1350698054 ** get_address_of_mOnVuMarkBehaviourDetected_5() { return &___mOnVuMarkBehaviourDetected_5; }
	inline void set_mOnVuMarkBehaviourDetected_5(Action_1_t1350698054 * value)
	{
		___mOnVuMarkBehaviourDetected_5 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuMarkBehaviourDetected_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKMANAGER_T2982459596_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T2352386197_H
#define ENUMERATOR_T2352386197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Vuforia.DataSet>
struct  Enumerator_t2352386197 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t463142320 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DataSet_t3286034874 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2352386197, ___l_0)); }
	inline List_1_t463142320 * get_l_0() const { return ___l_0; }
	inline List_1_t463142320 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t463142320 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2352386197, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2352386197, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2352386197, ___current_3)); }
	inline DataSet_t3286034874 * get_current_3() const { return ___current_3; }
	inline DataSet_t3286034874 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DataSet_t3286034874 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2352386197_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef WAITUNTIL_T3373419216_H
#define WAITUNTIL_T3373419216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitUntil
struct  WaitUntil_t3373419216  : public CustomYieldInstruction_t1895667560
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t3822001908 * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t3373419216, ___m_Predicate_0)); }
	inline Func_1_t3822001908 * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t3822001908 ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t3822001908 * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Predicate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITUNTIL_T3373419216_H
#ifndef DEVICETRACKER_T2315692373_H
#define DEVICETRACKER_T2315692373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTracker
struct  DeviceTracker_t2315692373  : public Tracker_t2709586299
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETRACKER_T2315692373_H
#ifndef OBJECTTRACKER_T4177997237_H
#define OBJECTTRACKER_T4177997237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTracker
struct  ObjectTracker_t4177997237  : public Tracker_t2709586299
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mActiveDataSets
	List_1_t463142320 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTracker::mDataSets
	List_1_t463142320 * ___mDataSets_2;
	// Vuforia.TargetFinder Vuforia.ObjectTracker::mTargetFinder
	TargetFinder_t2439332195 * ___mTargetFinder_3;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::mImageTargetBuilder
	ImageTargetBuilder_t2430893908 * ___mImageTargetBuilder_4;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mActiveDataSets_1)); }
	inline List_1_t463142320 * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_t463142320 ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_t463142320 * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveDataSets_1), value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mDataSets_2)); }
	inline List_1_t463142320 * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_t463142320 ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_t463142320 * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSets_2), value);
	}

	inline static int32_t get_offset_of_mTargetFinder_3() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mTargetFinder_3)); }
	inline TargetFinder_t2439332195 * get_mTargetFinder_3() const { return ___mTargetFinder_3; }
	inline TargetFinder_t2439332195 ** get_address_of_mTargetFinder_3() { return &___mTargetFinder_3; }
	inline void set_mTargetFinder_3(TargetFinder_t2439332195 * value)
	{
		___mTargetFinder_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetFinder_3), value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_4() { return static_cast<int32_t>(offsetof(ObjectTracker_t4177997237, ___mImageTargetBuilder_4)); }
	inline ImageTargetBuilder_t2430893908 * get_mImageTargetBuilder_4() const { return ___mImageTargetBuilder_4; }
	inline ImageTargetBuilder_t2430893908 ** get_address_of_mImageTargetBuilder_4() { return &___mImageTargetBuilder_4; }
	inline void set_mImageTargetBuilder_4(ImageTargetBuilder_t2430893908 * value)
	{
		___mImageTargetBuilder_4 = value;
		Il2CppCodeGenWriteBarrier((&___mImageTargetBuilder_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTRACKER_T4177997237_H
#ifndef AUTOROTATIONSTATE_T2150317116_H
#define AUTOROTATIONSTATE_T2150317116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager/AutoRotationState
struct  AutoRotationState_t2150317116 
{
public:
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::setOnPause
	bool ___setOnPause_0;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToPortrait
	bool ___autorotateToPortrait_1;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToPortraitUpsideDown
	bool ___autorotateToPortraitUpsideDown_2;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToLandscapeLeft
	bool ___autorotateToLandscapeLeft_3;
	// System.Boolean Vuforia.VuforiaManager/AutoRotationState::autorotateToLandscapeRight
	bool ___autorotateToLandscapeRight_4;

public:
	inline static int32_t get_offset_of_setOnPause_0() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___setOnPause_0)); }
	inline bool get_setOnPause_0() const { return ___setOnPause_0; }
	inline bool* get_address_of_setOnPause_0() { return &___setOnPause_0; }
	inline void set_setOnPause_0(bool value)
	{
		___setOnPause_0 = value;
	}

	inline static int32_t get_offset_of_autorotateToPortrait_1() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToPortrait_1)); }
	inline bool get_autorotateToPortrait_1() const { return ___autorotateToPortrait_1; }
	inline bool* get_address_of_autorotateToPortrait_1() { return &___autorotateToPortrait_1; }
	inline void set_autorotateToPortrait_1(bool value)
	{
		___autorotateToPortrait_1 = value;
	}

	inline static int32_t get_offset_of_autorotateToPortraitUpsideDown_2() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToPortraitUpsideDown_2)); }
	inline bool get_autorotateToPortraitUpsideDown_2() const { return ___autorotateToPortraitUpsideDown_2; }
	inline bool* get_address_of_autorotateToPortraitUpsideDown_2() { return &___autorotateToPortraitUpsideDown_2; }
	inline void set_autorotateToPortraitUpsideDown_2(bool value)
	{
		___autorotateToPortraitUpsideDown_2 = value;
	}

	inline static int32_t get_offset_of_autorotateToLandscapeLeft_3() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToLandscapeLeft_3)); }
	inline bool get_autorotateToLandscapeLeft_3() const { return ___autorotateToLandscapeLeft_3; }
	inline bool* get_address_of_autorotateToLandscapeLeft_3() { return &___autorotateToLandscapeLeft_3; }
	inline void set_autorotateToLandscapeLeft_3(bool value)
	{
		___autorotateToLandscapeLeft_3 = value;
	}

	inline static int32_t get_offset_of_autorotateToLandscapeRight_4() { return static_cast<int32_t>(offsetof(AutoRotationState_t2150317116, ___autorotateToLandscapeRight_4)); }
	inline bool get_autorotateToLandscapeRight_4() const { return ___autorotateToLandscapeRight_4; }
	inline bool* get_address_of_autorotateToLandscapeRight_4() { return &___autorotateToLandscapeRight_4; }
	inline void set_autorotateToLandscapeRight_4(bool value)
	{
		___autorotateToLandscapeRight_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.VuforiaManager/AutoRotationState
struct AutoRotationState_t2150317116_marshaled_pinvoke
{
	int32_t ___setOnPause_0;
	int32_t ___autorotateToPortrait_1;
	int32_t ___autorotateToPortraitUpsideDown_2;
	int32_t ___autorotateToLandscapeLeft_3;
	int32_t ___autorotateToLandscapeRight_4;
};
// Native definition for COM marshalling of Vuforia.VuforiaManager/AutoRotationState
struct AutoRotationState_t2150317116_marshaled_com
{
	int32_t ___setOnPause_0;
	int32_t ___autorotateToPortrait_1;
	int32_t ___autorotateToPortraitUpsideDown_2;
	int32_t ___autorotateToLandscapeLeft_3;
	int32_t ___autorotateToLandscapeRight_4;
};
#endif // AUTOROTATIONSTATE_T2150317116_H
#ifndef MENUITEM_T4061609034_H
#define MENUITEM_T4061609034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SamplesMainMenu/MenuItem
struct  MenuItem_t4061609034 
{
public:
	// System.Int32 SamplesMainMenu/MenuItem::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MenuItem_t4061609034, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUITEM_T4061609034_H
#ifndef ORIENTATION_T3671038586_H
#define ORIENTATION_T3671038586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneOrientation/Orientation
struct  Orientation_t3671038586 
{
public:
	// System.Int32 SceneOrientation/Orientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Orientation_t3671038586, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORIENTATION_T3671038586_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef ANIMATIONCURVE_T3046754366_H
#define ANIMATIONCURVE_T3046754366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t3046754366  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t3046754366, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T3046754366_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef SHADOWCASTINGMODE_T2280965600_H
#define SHADOWCASTINGMODE_T2280965600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ShadowCastingMode
struct  ShadowCastingMode_t2280965600 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowCastingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ShadowCastingMode_t2280965600, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOWCASTINGMODE_T2280965600_H
#ifndef SCREENORIENTATION_T1705519499_H
#define SCREENORIENTATION_T1705519499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t1705519499 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScreenOrientation_t1705519499, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENORIENTATION_T1705519499_H
#ifndef SENDMESSAGEOPTIONS_T3580193095_H
#define SENDMESSAGEOPTIONS_T3580193095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t3580193095 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t3580193095, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMESSAGEOPTIONS_T3580193095_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_T72348083_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T2034578258_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef CAMERADEVICEMODE_T2478715656_H
#define CAMERADEVICEMODE_T2478715656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2478715656 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2478715656, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICEMODE_T2478715656_H
#ifndef CAMERADIRECTION_T637748435_H
#define CAMERADIRECTION_T637748435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t637748435 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraDirection_t637748435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADIRECTION_T637748435_H
#ifndef TRACKING_MODE_T4048578679_H
#define TRACKING_MODE_T4048578679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTracker/TRACKING_MODE
struct  TRACKING_MODE_t4048578679 
{
public:
	// System.Int32 Vuforia.DeviceTracker/TRACKING_MODE::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TRACKING_MODE_t4048578679, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKING_MODE_T4048578679_H
#ifndef EYEWEARTYPE_T2277580470_H
#define EYEWEARTYPE_T2277580470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/EyewearType
struct  EyewearType_t2277580470 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/EyewearType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EyewearType_t2277580470, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARTYPE_T2277580470_H
#ifndef SEETHROUGHCONFIGURATION_T568665021_H
#define SEETHROUGHCONFIGURATION_T568665021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/SeeThroughConfiguration
struct  SeeThroughConfiguration_t568665021 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/SeeThroughConfiguration::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SeeThroughConfiguration_t568665021, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEETHROUGHCONFIGURATION_T568665021_H
#ifndef STEREOFRAMEWORK_T3144873991_H
#define STEREOFRAMEWORK_T3144873991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/StereoFramework
struct  StereoFramework_t3144873991 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/StereoFramework::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StereoFramework_t3144873991, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEREOFRAMEWORK_T3144873991_H
#ifndef FUSIONPROVIDERTYPE_T4010899297_H
#define FUSIONPROVIDERTYPE_T4010899297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.FusionProviderType
struct  FusionProviderType_t4010899297 
{
public:
	// System.Int32 Vuforia.FusionProviderType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FusionProviderType_t4010899297, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUSIONPROVIDERTYPE_T4010899297_H
#ifndef PIXEL_FORMAT_T3209881435_H
#define PIXEL_FORMAT_T3209881435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image/PIXEL_FORMAT
struct  PIXEL_FORMAT_t3209881435 
{
public:
	// System.Int32 Vuforia.Image/PIXEL_FORMAT::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PIXEL_FORMAT_t3209881435, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIXEL_FORMAT_T3209881435_H
#ifndef FRAMEQUALITY_T46289180_H
#define FRAMEQUALITY_T46289180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetBuilder/FrameQuality
struct  FrameQuality_t46289180 
{
public:
	// System.Int32 Vuforia.ImageTargetBuilder/FrameQuality::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FrameQuality_t46289180, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEQUALITY_T46289180_H
#ifndef IMAGETARGETTYPE_T2834081427_H
#define IMAGETARGETTYPE_T2834081427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetType
struct  ImageTargetType_t2834081427 
{
public:
	// System.Int32 Vuforia.ImageTargetType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ImageTargetType_t2834081427, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGETARGETTYPE_T2834081427_H
#ifndef INSTANCEIDTYPE_T420283664_H
#define INSTANCEIDTYPE_T420283664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.InstanceIdType
struct  InstanceIdType_t420283664 
{
public:
	// System.Int32 Vuforia.InstanceIdType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InstanceIdType_t420283664, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEIDTYPE_T420283664_H
#ifndef POSITIONALDEVICETRACKER_T656722001_H
#define POSITIONALDEVICETRACKER_T656722001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PositionalDeviceTracker
struct  PositionalDeviceTracker_t656722001  : public DeviceTracker_t2315692373
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONALDEVICETRACKER_T656722001_H
#ifndef MODEL_CORRECTION_MODE_T1953038946_H
#define MODEL_CORRECTION_MODE_T1953038946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE
struct  MODEL_CORRECTION_MODE_t1953038946 
{
public:
	// System.Int32 Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MODEL_CORRECTION_MODE_t1953038946, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODEL_CORRECTION_MODE_T1953038946_H
#ifndef STATUS_T1100905814_H
#define STATUS_T1100905814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t1100905814 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t1100905814, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATUS_T1100905814_H
#ifndef TRACKABLESOURCE_T2567074243_H
#define TRACKABLESOURCE_T2567074243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableSource
struct  TrackableSource_t2567074243  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TrackableSource::<TrackableSourcePtr>k__BackingField
	intptr_t ___U3CTrackableSourcePtrU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTrackableSourcePtrU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableSource_t2567074243, ___U3CTrackableSourcePtrU3Ek__BackingField_0)); }
	inline intptr_t get_U3CTrackableSourcePtrU3Ek__BackingField_0() const { return ___U3CTrackableSourcePtrU3Ek__BackingField_0; }
	inline intptr_t* get_address_of_U3CTrackableSourcePtrU3Ek__BackingField_0() { return &___U3CTrackableSourcePtrU3Ek__BackingField_0; }
	inline void set_U3CTrackableSourcePtrU3Ek__BackingField_0(intptr_t value)
	{
		___U3CTrackableSourcePtrU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLESOURCE_T2567074243_H
#ifndef FRAMESTATE_T2717258284_H
#define FRAMESTATE_T2717258284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/FrameState
#pragma pack(push, tp, 1)
struct  FrameState_t2717258284 
{
public:
	// System.IntPtr Vuforia.TrackerData/FrameState::trackableDataArray
	intptr_t ___trackableDataArray_0;
	// System.IntPtr Vuforia.TrackerData/FrameState::vbDataArray
	intptr_t ___vbDataArray_1;
	// System.IntPtr Vuforia.TrackerData/FrameState::vuMarkResultArray
	intptr_t ___vuMarkResultArray_2;
	// System.IntPtr Vuforia.TrackerData/FrameState::newVuMarkDataArray
	intptr_t ___newVuMarkDataArray_3;
	// System.IntPtr Vuforia.TrackerData/FrameState::illuminationData
	intptr_t ___illuminationData_4;
	// System.Int32 Vuforia.TrackerData/FrameState::numTrackableResults
	int32_t ___numTrackableResults_5;
	// System.Int32 Vuforia.TrackerData/FrameState::numVirtualButtonResults
	int32_t ___numVirtualButtonResults_6;
	// System.Int32 Vuforia.TrackerData/FrameState::frameIndex
	int32_t ___frameIndex_7;
	// System.Int32 Vuforia.TrackerData/FrameState::numVuMarkResults
	int32_t ___numVuMarkResults_8;
	// System.Int32 Vuforia.TrackerData/FrameState::numNewVuMarks
	int32_t ___numNewVuMarks_9;
	// System.Int32 Vuforia.TrackerData/FrameState::deviceTrackableId
	int32_t ___deviceTrackableId_10;
	// System.Int32 Vuforia.TrackerData/FrameState::deviceTrackableStatusInfo
	int32_t ___deviceTrackableStatusInfo_11;
	// UnityEngine.Vector4 Vuforia.TrackerData/FrameState::minCameraCalibration
	Vector4_t3319028937  ___minCameraCalibration_12;

public:
	inline static int32_t get_offset_of_trackableDataArray_0() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___trackableDataArray_0)); }
	inline intptr_t get_trackableDataArray_0() const { return ___trackableDataArray_0; }
	inline intptr_t* get_address_of_trackableDataArray_0() { return &___trackableDataArray_0; }
	inline void set_trackableDataArray_0(intptr_t value)
	{
		___trackableDataArray_0 = value;
	}

	inline static int32_t get_offset_of_vbDataArray_1() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___vbDataArray_1)); }
	inline intptr_t get_vbDataArray_1() const { return ___vbDataArray_1; }
	inline intptr_t* get_address_of_vbDataArray_1() { return &___vbDataArray_1; }
	inline void set_vbDataArray_1(intptr_t value)
	{
		___vbDataArray_1 = value;
	}

	inline static int32_t get_offset_of_vuMarkResultArray_2() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___vuMarkResultArray_2)); }
	inline intptr_t get_vuMarkResultArray_2() const { return ___vuMarkResultArray_2; }
	inline intptr_t* get_address_of_vuMarkResultArray_2() { return &___vuMarkResultArray_2; }
	inline void set_vuMarkResultArray_2(intptr_t value)
	{
		___vuMarkResultArray_2 = value;
	}

	inline static int32_t get_offset_of_newVuMarkDataArray_3() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___newVuMarkDataArray_3)); }
	inline intptr_t get_newVuMarkDataArray_3() const { return ___newVuMarkDataArray_3; }
	inline intptr_t* get_address_of_newVuMarkDataArray_3() { return &___newVuMarkDataArray_3; }
	inline void set_newVuMarkDataArray_3(intptr_t value)
	{
		___newVuMarkDataArray_3 = value;
	}

	inline static int32_t get_offset_of_illuminationData_4() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___illuminationData_4)); }
	inline intptr_t get_illuminationData_4() const { return ___illuminationData_4; }
	inline intptr_t* get_address_of_illuminationData_4() { return &___illuminationData_4; }
	inline void set_illuminationData_4(intptr_t value)
	{
		___illuminationData_4 = value;
	}

	inline static int32_t get_offset_of_numTrackableResults_5() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numTrackableResults_5)); }
	inline int32_t get_numTrackableResults_5() const { return ___numTrackableResults_5; }
	inline int32_t* get_address_of_numTrackableResults_5() { return &___numTrackableResults_5; }
	inline void set_numTrackableResults_5(int32_t value)
	{
		___numTrackableResults_5 = value;
	}

	inline static int32_t get_offset_of_numVirtualButtonResults_6() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numVirtualButtonResults_6)); }
	inline int32_t get_numVirtualButtonResults_6() const { return ___numVirtualButtonResults_6; }
	inline int32_t* get_address_of_numVirtualButtonResults_6() { return &___numVirtualButtonResults_6; }
	inline void set_numVirtualButtonResults_6(int32_t value)
	{
		___numVirtualButtonResults_6 = value;
	}

	inline static int32_t get_offset_of_frameIndex_7() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___frameIndex_7)); }
	inline int32_t get_frameIndex_7() const { return ___frameIndex_7; }
	inline int32_t* get_address_of_frameIndex_7() { return &___frameIndex_7; }
	inline void set_frameIndex_7(int32_t value)
	{
		___frameIndex_7 = value;
	}

	inline static int32_t get_offset_of_numVuMarkResults_8() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numVuMarkResults_8)); }
	inline int32_t get_numVuMarkResults_8() const { return ___numVuMarkResults_8; }
	inline int32_t* get_address_of_numVuMarkResults_8() { return &___numVuMarkResults_8; }
	inline void set_numVuMarkResults_8(int32_t value)
	{
		___numVuMarkResults_8 = value;
	}

	inline static int32_t get_offset_of_numNewVuMarks_9() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numNewVuMarks_9)); }
	inline int32_t get_numNewVuMarks_9() const { return ___numNewVuMarks_9; }
	inline int32_t* get_address_of_numNewVuMarks_9() { return &___numNewVuMarks_9; }
	inline void set_numNewVuMarks_9(int32_t value)
	{
		___numNewVuMarks_9 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableId_10() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___deviceTrackableId_10)); }
	inline int32_t get_deviceTrackableId_10() const { return ___deviceTrackableId_10; }
	inline int32_t* get_address_of_deviceTrackableId_10() { return &___deviceTrackableId_10; }
	inline void set_deviceTrackableId_10(int32_t value)
	{
		___deviceTrackableId_10 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableStatusInfo_11() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___deviceTrackableStatusInfo_11)); }
	inline int32_t get_deviceTrackableStatusInfo_11() const { return ___deviceTrackableStatusInfo_11; }
	inline int32_t* get_address_of_deviceTrackableStatusInfo_11() { return &___deviceTrackableStatusInfo_11; }
	inline void set_deviceTrackableStatusInfo_11(int32_t value)
	{
		___deviceTrackableStatusInfo_11 = value;
	}

	inline static int32_t get_offset_of_minCameraCalibration_12() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___minCameraCalibration_12)); }
	inline Vector4_t3319028937  get_minCameraCalibration_12() const { return ___minCameraCalibration_12; }
	inline Vector4_t3319028937 * get_address_of_minCameraCalibration_12() { return &___minCameraCalibration_12; }
	inline void set_minCameraCalibration_12(Vector4_t3319028937  value)
	{
		___minCameraCalibration_12 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMESTATE_T2717258284_H
#ifndef SENSITIVITY_T3045829715_H
#define SENSITIVITY_T3045829715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VirtualButton/Sensitivity
struct  Sensitivity_t3045829715 
{
public:
	// System.Int32 Vuforia.VirtualButton/Sensitivity::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sensitivity_t3045829715, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENSITIVITY_T3045829715_H
#ifndef WORLDCENTERMODE_T3672819471_H
#define WORLDCENTERMODE_T3672819471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t3672819471 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WorldCenterMode_t3672819471, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDCENTERMODE_T3672819471_H
#ifndef VIDEOBACKGROUNDREFLECTION_T736962841_H
#define VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t736962841 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t736962841, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifndef STORAGETYPE_T857810839_H
#define STORAGETYPE_T857810839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/StorageType
struct  StorageType_t857810839 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/StorageType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StorageType_t857810839, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORAGETYPE_T857810839_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef VIDEOCLIP_T1281919028_H
#define VIDEOCLIP_T1281919028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoClip
struct  VideoClip_t1281919028  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCLIP_T1281919028_H
#ifndef DATASET_T3286034874_H
#define DATASET_T3286034874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSet
struct  DataSet_t3286034874  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.DataSet::mDataSetPtr
	intptr_t ___mDataSetPtr_0;
	// System.String Vuforia.DataSet::mPath
	String_t* ___mPath_1;
	// Vuforia.VuforiaUnity/StorageType Vuforia.DataSet::mStorageType
	int32_t ___mStorageType_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable> Vuforia.DataSet::mTrackablesDict
	Dictionary_2_t1340713322 * ___mTrackablesDict_3;

public:
	inline static int32_t get_offset_of_mDataSetPtr_0() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mDataSetPtr_0)); }
	inline intptr_t get_mDataSetPtr_0() const { return ___mDataSetPtr_0; }
	inline intptr_t* get_address_of_mDataSetPtr_0() { return &___mDataSetPtr_0; }
	inline void set_mDataSetPtr_0(intptr_t value)
	{
		___mDataSetPtr_0 = value;
	}

	inline static int32_t get_offset_of_mPath_1() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mPath_1)); }
	inline String_t* get_mPath_1() const { return ___mPath_1; }
	inline String_t** get_address_of_mPath_1() { return &___mPath_1; }
	inline void set_mPath_1(String_t* value)
	{
		___mPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___mPath_1), value);
	}

	inline static int32_t get_offset_of_mStorageType_2() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mStorageType_2)); }
	inline int32_t get_mStorageType_2() const { return ___mStorageType_2; }
	inline int32_t* get_address_of_mStorageType_2() { return &___mStorageType_2; }
	inline void set_mStorageType_2(int32_t value)
	{
		___mStorageType_2 = value;
	}

	inline static int32_t get_offset_of_mTrackablesDict_3() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mTrackablesDict_3)); }
	inline Dictionary_2_t1340713322 * get_mTrackablesDict_3() const { return ___mTrackablesDict_3; }
	inline Dictionary_2_t1340713322 ** get_address_of_mTrackablesDict_3() { return &___mTrackablesDict_3; }
	inline void set_mTrackablesDict_3(Dictionary_2_t1340713322 * value)
	{
		___mTrackablesDict_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackablesDict_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASET_T3286034874_H
#ifndef DEVICETRACKERARCONTROLLER_T1095592542_H
#define DEVICETRACKERARCONTROLLER_T1095592542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTrackerARController
struct  DeviceTrackerARController_t1095592542  : public ARController_t116632334
{
public:
	// Vuforia.DeviceTracker/TRACKING_MODE Vuforia.DeviceTrackerARController::mTrackingMode
	int32_t ___mTrackingMode_3;
	// System.Boolean Vuforia.DeviceTrackerARController::mAutoInitTracker
	bool ___mAutoInitTracker_4;
	// System.Boolean Vuforia.DeviceTrackerARController::mAutoStartTracker
	bool ___mAutoStartTracker_5;
	// System.Boolean Vuforia.DeviceTrackerARController::mPosePrediction
	bool ___mPosePrediction_6;
	// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.DeviceTrackerARController::mModelCorrectionMode
	int32_t ___mModelCorrectionMode_7;
	// System.Boolean Vuforia.DeviceTrackerARController::mModelTransformEnabled
	bool ___mModelTransformEnabled_8;
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::mModelTransform
	Vector3_t3722313464  ___mModelTransform_9;
	// Vuforia.FusionProviderType Vuforia.DeviceTrackerARController::mFusionProviderType
	int32_t ___mFusionProviderType_10;
	// System.Action Vuforia.DeviceTrackerARController::mTrackerStarted
	Action_t1264377477 * ___mTrackerStarted_11;
	// System.Boolean Vuforia.DeviceTrackerARController::mTrackerWasActiveBeforePause
	bool ___mTrackerWasActiveBeforePause_12;
	// System.Boolean Vuforia.DeviceTrackerARController::mTrackerWasActiveBeforeDisabling
	bool ___mTrackerWasActiveBeforeDisabling_13;
	// System.Single Vuforia.DeviceTrackerARController::mEmulatorPositionVelocity
	float ___mEmulatorPositionVelocity_14;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.DeviceTrackerARController::mDeviceTrackerConfiguration
	DeviceTrackerConfiguration_t721467671 * ___mDeviceTrackerConfiguration_15;

public:
	inline static int32_t get_offset_of_mTrackingMode_3() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mTrackingMode_3)); }
	inline int32_t get_mTrackingMode_3() const { return ___mTrackingMode_3; }
	inline int32_t* get_address_of_mTrackingMode_3() { return &___mTrackingMode_3; }
	inline void set_mTrackingMode_3(int32_t value)
	{
		___mTrackingMode_3 = value;
	}

	inline static int32_t get_offset_of_mAutoInitTracker_4() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mAutoInitTracker_4)); }
	inline bool get_mAutoInitTracker_4() const { return ___mAutoInitTracker_4; }
	inline bool* get_address_of_mAutoInitTracker_4() { return &___mAutoInitTracker_4; }
	inline void set_mAutoInitTracker_4(bool value)
	{
		___mAutoInitTracker_4 = value;
	}

	inline static int32_t get_offset_of_mAutoStartTracker_5() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mAutoStartTracker_5)); }
	inline bool get_mAutoStartTracker_5() const { return ___mAutoStartTracker_5; }
	inline bool* get_address_of_mAutoStartTracker_5() { return &___mAutoStartTracker_5; }
	inline void set_mAutoStartTracker_5(bool value)
	{
		___mAutoStartTracker_5 = value;
	}

	inline static int32_t get_offset_of_mPosePrediction_6() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mPosePrediction_6)); }
	inline bool get_mPosePrediction_6() const { return ___mPosePrediction_6; }
	inline bool* get_address_of_mPosePrediction_6() { return &___mPosePrediction_6; }
	inline void set_mPosePrediction_6(bool value)
	{
		___mPosePrediction_6 = value;
	}

	inline static int32_t get_offset_of_mModelCorrectionMode_7() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mModelCorrectionMode_7)); }
	inline int32_t get_mModelCorrectionMode_7() const { return ___mModelCorrectionMode_7; }
	inline int32_t* get_address_of_mModelCorrectionMode_7() { return &___mModelCorrectionMode_7; }
	inline void set_mModelCorrectionMode_7(int32_t value)
	{
		___mModelCorrectionMode_7 = value;
	}

	inline static int32_t get_offset_of_mModelTransformEnabled_8() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mModelTransformEnabled_8)); }
	inline bool get_mModelTransformEnabled_8() const { return ___mModelTransformEnabled_8; }
	inline bool* get_address_of_mModelTransformEnabled_8() { return &___mModelTransformEnabled_8; }
	inline void set_mModelTransformEnabled_8(bool value)
	{
		___mModelTransformEnabled_8 = value;
	}

	inline static int32_t get_offset_of_mModelTransform_9() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mModelTransform_9)); }
	inline Vector3_t3722313464  get_mModelTransform_9() const { return ___mModelTransform_9; }
	inline Vector3_t3722313464 * get_address_of_mModelTransform_9() { return &___mModelTransform_9; }
	inline void set_mModelTransform_9(Vector3_t3722313464  value)
	{
		___mModelTransform_9 = value;
	}

	inline static int32_t get_offset_of_mFusionProviderType_10() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mFusionProviderType_10)); }
	inline int32_t get_mFusionProviderType_10() const { return ___mFusionProviderType_10; }
	inline int32_t* get_address_of_mFusionProviderType_10() { return &___mFusionProviderType_10; }
	inline void set_mFusionProviderType_10(int32_t value)
	{
		___mFusionProviderType_10 = value;
	}

	inline static int32_t get_offset_of_mTrackerStarted_11() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mTrackerStarted_11)); }
	inline Action_t1264377477 * get_mTrackerStarted_11() const { return ___mTrackerStarted_11; }
	inline Action_t1264377477 ** get_address_of_mTrackerStarted_11() { return &___mTrackerStarted_11; }
	inline void set_mTrackerStarted_11(Action_t1264377477 * value)
	{
		___mTrackerStarted_11 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackerStarted_11), value);
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforePause_12() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mTrackerWasActiveBeforePause_12)); }
	inline bool get_mTrackerWasActiveBeforePause_12() const { return ___mTrackerWasActiveBeforePause_12; }
	inline bool* get_address_of_mTrackerWasActiveBeforePause_12() { return &___mTrackerWasActiveBeforePause_12; }
	inline void set_mTrackerWasActiveBeforePause_12(bool value)
	{
		___mTrackerWasActiveBeforePause_12 = value;
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforeDisabling_13() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mTrackerWasActiveBeforeDisabling_13)); }
	inline bool get_mTrackerWasActiveBeforeDisabling_13() const { return ___mTrackerWasActiveBeforeDisabling_13; }
	inline bool* get_address_of_mTrackerWasActiveBeforeDisabling_13() { return &___mTrackerWasActiveBeforeDisabling_13; }
	inline void set_mTrackerWasActiveBeforeDisabling_13(bool value)
	{
		___mTrackerWasActiveBeforeDisabling_13 = value;
	}

	inline static int32_t get_offset_of_mEmulatorPositionVelocity_14() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mEmulatorPositionVelocity_14)); }
	inline float get_mEmulatorPositionVelocity_14() const { return ___mEmulatorPositionVelocity_14; }
	inline float* get_address_of_mEmulatorPositionVelocity_14() { return &___mEmulatorPositionVelocity_14; }
	inline void set_mEmulatorPositionVelocity_14(float value)
	{
		___mEmulatorPositionVelocity_14 = value;
	}

	inline static int32_t get_offset_of_mDeviceTrackerConfiguration_15() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542, ___mDeviceTrackerConfiguration_15)); }
	inline DeviceTrackerConfiguration_t721467671 * get_mDeviceTrackerConfiguration_15() const { return ___mDeviceTrackerConfiguration_15; }
	inline DeviceTrackerConfiguration_t721467671 ** get_address_of_mDeviceTrackerConfiguration_15() { return &___mDeviceTrackerConfiguration_15; }
	inline void set_mDeviceTrackerConfiguration_15(DeviceTrackerConfiguration_t721467671 * value)
	{
		___mDeviceTrackerConfiguration_15 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceTrackerConfiguration_15), value);
	}
};

struct DeviceTrackerARController_t1095592542_StaticFields
{
public:
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::DEFAULT_HEAD_PIVOT
	Vector3_t3722313464  ___DEFAULT_HEAD_PIVOT_1;
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::DEFAULT_HANDHELD_PIVOT
	Vector3_t3722313464  ___DEFAULT_HANDHELD_PIVOT_2;
	// Vuforia.DeviceTrackerARController Vuforia.DeviceTrackerARController::mInstance
	DeviceTrackerARController_t1095592542 * ___mInstance_16;
	// System.Object Vuforia.DeviceTrackerARController::mPadlock
	RuntimeObject * ___mPadlock_17;

public:
	inline static int32_t get_offset_of_DEFAULT_HEAD_PIVOT_1() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542_StaticFields, ___DEFAULT_HEAD_PIVOT_1)); }
	inline Vector3_t3722313464  get_DEFAULT_HEAD_PIVOT_1() const { return ___DEFAULT_HEAD_PIVOT_1; }
	inline Vector3_t3722313464 * get_address_of_DEFAULT_HEAD_PIVOT_1() { return &___DEFAULT_HEAD_PIVOT_1; }
	inline void set_DEFAULT_HEAD_PIVOT_1(Vector3_t3722313464  value)
	{
		___DEFAULT_HEAD_PIVOT_1 = value;
	}

	inline static int32_t get_offset_of_DEFAULT_HANDHELD_PIVOT_2() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542_StaticFields, ___DEFAULT_HANDHELD_PIVOT_2)); }
	inline Vector3_t3722313464  get_DEFAULT_HANDHELD_PIVOT_2() const { return ___DEFAULT_HANDHELD_PIVOT_2; }
	inline Vector3_t3722313464 * get_address_of_DEFAULT_HANDHELD_PIVOT_2() { return &___DEFAULT_HANDHELD_PIVOT_2; }
	inline void set_DEFAULT_HANDHELD_PIVOT_2(Vector3_t3722313464  value)
	{
		___DEFAULT_HANDHELD_PIVOT_2 = value;
	}

	inline static int32_t get_offset_of_mInstance_16() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542_StaticFields, ___mInstance_16)); }
	inline DeviceTrackerARController_t1095592542 * get_mInstance_16() const { return ___mInstance_16; }
	inline DeviceTrackerARController_t1095592542 ** get_address_of_mInstance_16() { return &___mInstance_16; }
	inline void set_mInstance_16(DeviceTrackerARController_t1095592542 * value)
	{
		___mInstance_16 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_16), value);
	}

	inline static int32_t get_offset_of_mPadlock_17() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t1095592542_StaticFields, ___mPadlock_17)); }
	inline RuntimeObject * get_mPadlock_17() const { return ___mPadlock_17; }
	inline RuntimeObject ** get_address_of_mPadlock_17() { return &___mPadlock_17; }
	inline void set_mPadlock_17(RuntimeObject * value)
	{
		___mPadlock_17 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETRACKERARCONTROLLER_T1095592542_H
#ifndef DIGITALEYEWEARARCONTROLLER_T1054226036_H
#define DIGITALEYEWEARARCONTROLLER_T1054226036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController
struct  DigitalEyewearARController_t1054226036  : public ARController_t116632334
{
public:
	// System.Single Vuforia.DigitalEyewearARController::mCameraOffset
	float ___mCameraOffset_5;
	// System.Int32 Vuforia.DigitalEyewearARController::mDistortionRenderingLayer
	int32_t ___mDistortionRenderingLayer_6;
	// Vuforia.DigitalEyewearARController/EyewearType Vuforia.DigitalEyewearARController::mEyewearType
	int32_t ___mEyewearType_7;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.DigitalEyewearARController::mStereoFramework
	int32_t ___mStereoFramework_8;
	// Vuforia.DigitalEyewearARController/SeeThroughConfiguration Vuforia.DigitalEyewearARController::mSeeThroughConfiguration
	int32_t ___mSeeThroughConfiguration_9;
	// System.String Vuforia.DigitalEyewearARController::mViewerName
	String_t* ___mViewerName_10;
	// System.String Vuforia.DigitalEyewearARController::mViewerManufacturer
	String_t* ___mViewerManufacturer_11;
	// System.Boolean Vuforia.DigitalEyewearARController::mUseCustomViewer
	bool ___mUseCustomViewer_12;
	// Vuforia.DigitalEyewearARController/SerializableViewerParameters Vuforia.DigitalEyewearARController::mCustomViewer
	SerializableViewerParameters_t2043332680 * ___mCustomViewer_13;
	// UnityEngine.Transform Vuforia.DigitalEyewearARController::mCentralAnchorPoint
	Transform_t3600365921 * ___mCentralAnchorPoint_14;
	// UnityEngine.Camera Vuforia.DigitalEyewearARController::mPrimaryCamera
	Camera_t4157153871 * ___mPrimaryCamera_15;
	// Vuforia.VuforiaARController Vuforia.DigitalEyewearARController::mVuforiaBehaviour
	VuforiaARController_t1876945237 * ___mVuforiaBehaviour_16;
	// System.Boolean Vuforia.DigitalEyewearARController::mSetFocusPlaneAutomatically
	bool ___mSetFocusPlaneAutomatically_17;
	// Vuforia.VRDeviceController Vuforia.DigitalEyewearARController::mVRDeviceController
	VRDeviceController_t3863472269 * ___mVRDeviceController_18;
	// UnityEngine.Vector3 Vuforia.DigitalEyewearARController::mCamPositionAtSceneStart
	Vector3_t3722313464  ___mCamPositionAtSceneStart_19;
	// UnityEngine.Quaternion Vuforia.DigitalEyewearARController::mCamRotationAtSceneStart
	Quaternion_t2301928331  ___mCamRotationAtSceneStart_20;

public:
	inline static int32_t get_offset_of_mCameraOffset_5() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCameraOffset_5)); }
	inline float get_mCameraOffset_5() const { return ___mCameraOffset_5; }
	inline float* get_address_of_mCameraOffset_5() { return &___mCameraOffset_5; }
	inline void set_mCameraOffset_5(float value)
	{
		___mCameraOffset_5 = value;
	}

	inline static int32_t get_offset_of_mDistortionRenderingLayer_6() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mDistortionRenderingLayer_6)); }
	inline int32_t get_mDistortionRenderingLayer_6() const { return ___mDistortionRenderingLayer_6; }
	inline int32_t* get_address_of_mDistortionRenderingLayer_6() { return &___mDistortionRenderingLayer_6; }
	inline void set_mDistortionRenderingLayer_6(int32_t value)
	{
		___mDistortionRenderingLayer_6 = value;
	}

	inline static int32_t get_offset_of_mEyewearType_7() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mEyewearType_7)); }
	inline int32_t get_mEyewearType_7() const { return ___mEyewearType_7; }
	inline int32_t* get_address_of_mEyewearType_7() { return &___mEyewearType_7; }
	inline void set_mEyewearType_7(int32_t value)
	{
		___mEyewearType_7 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_8() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mStereoFramework_8)); }
	inline int32_t get_mStereoFramework_8() const { return ___mStereoFramework_8; }
	inline int32_t* get_address_of_mStereoFramework_8() { return &___mStereoFramework_8; }
	inline void set_mStereoFramework_8(int32_t value)
	{
		___mStereoFramework_8 = value;
	}

	inline static int32_t get_offset_of_mSeeThroughConfiguration_9() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mSeeThroughConfiguration_9)); }
	inline int32_t get_mSeeThroughConfiguration_9() const { return ___mSeeThroughConfiguration_9; }
	inline int32_t* get_address_of_mSeeThroughConfiguration_9() { return &___mSeeThroughConfiguration_9; }
	inline void set_mSeeThroughConfiguration_9(int32_t value)
	{
		___mSeeThroughConfiguration_9 = value;
	}

	inline static int32_t get_offset_of_mViewerName_10() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mViewerName_10)); }
	inline String_t* get_mViewerName_10() const { return ___mViewerName_10; }
	inline String_t** get_address_of_mViewerName_10() { return &___mViewerName_10; }
	inline void set_mViewerName_10(String_t* value)
	{
		___mViewerName_10 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerName_10), value);
	}

	inline static int32_t get_offset_of_mViewerManufacturer_11() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mViewerManufacturer_11)); }
	inline String_t* get_mViewerManufacturer_11() const { return ___mViewerManufacturer_11; }
	inline String_t** get_address_of_mViewerManufacturer_11() { return &___mViewerManufacturer_11; }
	inline void set_mViewerManufacturer_11(String_t* value)
	{
		___mViewerManufacturer_11 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerManufacturer_11), value);
	}

	inline static int32_t get_offset_of_mUseCustomViewer_12() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mUseCustomViewer_12)); }
	inline bool get_mUseCustomViewer_12() const { return ___mUseCustomViewer_12; }
	inline bool* get_address_of_mUseCustomViewer_12() { return &___mUseCustomViewer_12; }
	inline void set_mUseCustomViewer_12(bool value)
	{
		___mUseCustomViewer_12 = value;
	}

	inline static int32_t get_offset_of_mCustomViewer_13() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCustomViewer_13)); }
	inline SerializableViewerParameters_t2043332680 * get_mCustomViewer_13() const { return ___mCustomViewer_13; }
	inline SerializableViewerParameters_t2043332680 ** get_address_of_mCustomViewer_13() { return &___mCustomViewer_13; }
	inline void set_mCustomViewer_13(SerializableViewerParameters_t2043332680 * value)
	{
		___mCustomViewer_13 = value;
		Il2CppCodeGenWriteBarrier((&___mCustomViewer_13), value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_14() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCentralAnchorPoint_14)); }
	inline Transform_t3600365921 * get_mCentralAnchorPoint_14() const { return ___mCentralAnchorPoint_14; }
	inline Transform_t3600365921 ** get_address_of_mCentralAnchorPoint_14() { return &___mCentralAnchorPoint_14; }
	inline void set_mCentralAnchorPoint_14(Transform_t3600365921 * value)
	{
		___mCentralAnchorPoint_14 = value;
		Il2CppCodeGenWriteBarrier((&___mCentralAnchorPoint_14), value);
	}

	inline static int32_t get_offset_of_mPrimaryCamera_15() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mPrimaryCamera_15)); }
	inline Camera_t4157153871 * get_mPrimaryCamera_15() const { return ___mPrimaryCamera_15; }
	inline Camera_t4157153871 ** get_address_of_mPrimaryCamera_15() { return &___mPrimaryCamera_15; }
	inline void set_mPrimaryCamera_15(Camera_t4157153871 * value)
	{
		___mPrimaryCamera_15 = value;
		Il2CppCodeGenWriteBarrier((&___mPrimaryCamera_15), value);
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_16() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mVuforiaBehaviour_16)); }
	inline VuforiaARController_t1876945237 * get_mVuforiaBehaviour_16() const { return ___mVuforiaBehaviour_16; }
	inline VuforiaARController_t1876945237 ** get_address_of_mVuforiaBehaviour_16() { return &___mVuforiaBehaviour_16; }
	inline void set_mVuforiaBehaviour_16(VuforiaARController_t1876945237 * value)
	{
		___mVuforiaBehaviour_16 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_16), value);
	}

	inline static int32_t get_offset_of_mSetFocusPlaneAutomatically_17() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mSetFocusPlaneAutomatically_17)); }
	inline bool get_mSetFocusPlaneAutomatically_17() const { return ___mSetFocusPlaneAutomatically_17; }
	inline bool* get_address_of_mSetFocusPlaneAutomatically_17() { return &___mSetFocusPlaneAutomatically_17; }
	inline void set_mSetFocusPlaneAutomatically_17(bool value)
	{
		___mSetFocusPlaneAutomatically_17 = value;
	}

	inline static int32_t get_offset_of_mVRDeviceController_18() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mVRDeviceController_18)); }
	inline VRDeviceController_t3863472269 * get_mVRDeviceController_18() const { return ___mVRDeviceController_18; }
	inline VRDeviceController_t3863472269 ** get_address_of_mVRDeviceController_18() { return &___mVRDeviceController_18; }
	inline void set_mVRDeviceController_18(VRDeviceController_t3863472269 * value)
	{
		___mVRDeviceController_18 = value;
		Il2CppCodeGenWriteBarrier((&___mVRDeviceController_18), value);
	}

	inline static int32_t get_offset_of_mCamPositionAtSceneStart_19() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCamPositionAtSceneStart_19)); }
	inline Vector3_t3722313464  get_mCamPositionAtSceneStart_19() const { return ___mCamPositionAtSceneStart_19; }
	inline Vector3_t3722313464 * get_address_of_mCamPositionAtSceneStart_19() { return &___mCamPositionAtSceneStart_19; }
	inline void set_mCamPositionAtSceneStart_19(Vector3_t3722313464  value)
	{
		___mCamPositionAtSceneStart_19 = value;
	}

	inline static int32_t get_offset_of_mCamRotationAtSceneStart_20() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036, ___mCamRotationAtSceneStart_20)); }
	inline Quaternion_t2301928331  get_mCamRotationAtSceneStart_20() const { return ___mCamRotationAtSceneStart_20; }
	inline Quaternion_t2301928331 * get_address_of_mCamRotationAtSceneStart_20() { return &___mCamRotationAtSceneStart_20; }
	inline void set_mCamRotationAtSceneStart_20(Quaternion_t2301928331  value)
	{
		___mCamRotationAtSceneStart_20 = value;
	}
};

struct DigitalEyewearARController_t1054226036_StaticFields
{
public:
	// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::mInstance
	DigitalEyewearARController_t1054226036 * ___mInstance_21;
	// System.Object Vuforia.DigitalEyewearARController::mPadlock
	RuntimeObject * ___mPadlock_22;

public:
	inline static int32_t get_offset_of_mInstance_21() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036_StaticFields, ___mInstance_21)); }
	inline DigitalEyewearARController_t1054226036 * get_mInstance_21() const { return ___mInstance_21; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mInstance_21() { return &___mInstance_21; }
	inline void set_mInstance_21(DigitalEyewearARController_t1054226036 * value)
	{
		___mInstance_21 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_21), value);
	}

	inline static int32_t get_offset_of_mPadlock_22() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t1054226036_StaticFields, ___mPadlock_22)); }
	inline RuntimeObject * get_mPadlock_22() const { return ___mPadlock_22; }
	inline RuntimeObject ** get_address_of_mPadlock_22() { return &___mPadlock_22; }
	inline void set_mPadlock_22(RuntimeObject * value)
	{
		___mPadlock_22 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGITALEYEWEARARCONTROLLER_T1054226036_H
#ifndef IMAGE_T745056343_H
#define IMAGE_T745056343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image
struct  Image_t745056343  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.Image::mWidth
	int32_t ___mWidth_0;
	// System.Int32 Vuforia.Image::mHeight
	int32_t ___mHeight_1;
	// System.Int32 Vuforia.Image::mStride
	int32_t ___mStride_2;
	// System.Int32 Vuforia.Image::mBufferWidth
	int32_t ___mBufferWidth_3;
	// System.Int32 Vuforia.Image::mBufferHeight
	int32_t ___mBufferHeight_4;
	// Vuforia.Image/PIXEL_FORMAT Vuforia.Image::mPixelFormat
	int32_t ___mPixelFormat_5;
	// System.Byte[] Vuforia.Image::mData
	ByteU5BU5D_t4116647657* ___mData_6;
	// System.IntPtr Vuforia.Image::mUnmanagedData
	intptr_t ___mUnmanagedData_7;
	// System.Boolean Vuforia.Image::mDataSet
	bool ___mDataSet_8;
	// UnityEngine.Color32[] Vuforia.Image::mPixel32
	Color32U5BU5D_t3850468773* ___mPixel32_9;

public:
	inline static int32_t get_offset_of_mWidth_0() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mWidth_0)); }
	inline int32_t get_mWidth_0() const { return ___mWidth_0; }
	inline int32_t* get_address_of_mWidth_0() { return &___mWidth_0; }
	inline void set_mWidth_0(int32_t value)
	{
		___mWidth_0 = value;
	}

	inline static int32_t get_offset_of_mHeight_1() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mHeight_1)); }
	inline int32_t get_mHeight_1() const { return ___mHeight_1; }
	inline int32_t* get_address_of_mHeight_1() { return &___mHeight_1; }
	inline void set_mHeight_1(int32_t value)
	{
		___mHeight_1 = value;
	}

	inline static int32_t get_offset_of_mStride_2() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mStride_2)); }
	inline int32_t get_mStride_2() const { return ___mStride_2; }
	inline int32_t* get_address_of_mStride_2() { return &___mStride_2; }
	inline void set_mStride_2(int32_t value)
	{
		___mStride_2 = value;
	}

	inline static int32_t get_offset_of_mBufferWidth_3() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mBufferWidth_3)); }
	inline int32_t get_mBufferWidth_3() const { return ___mBufferWidth_3; }
	inline int32_t* get_address_of_mBufferWidth_3() { return &___mBufferWidth_3; }
	inline void set_mBufferWidth_3(int32_t value)
	{
		___mBufferWidth_3 = value;
	}

	inline static int32_t get_offset_of_mBufferHeight_4() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mBufferHeight_4)); }
	inline int32_t get_mBufferHeight_4() const { return ___mBufferHeight_4; }
	inline int32_t* get_address_of_mBufferHeight_4() { return &___mBufferHeight_4; }
	inline void set_mBufferHeight_4(int32_t value)
	{
		___mBufferHeight_4 = value;
	}

	inline static int32_t get_offset_of_mPixelFormat_5() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mPixelFormat_5)); }
	inline int32_t get_mPixelFormat_5() const { return ___mPixelFormat_5; }
	inline int32_t* get_address_of_mPixelFormat_5() { return &___mPixelFormat_5; }
	inline void set_mPixelFormat_5(int32_t value)
	{
		___mPixelFormat_5 = value;
	}

	inline static int32_t get_offset_of_mData_6() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mData_6)); }
	inline ByteU5BU5D_t4116647657* get_mData_6() const { return ___mData_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_mData_6() { return &___mData_6; }
	inline void set_mData_6(ByteU5BU5D_t4116647657* value)
	{
		___mData_6 = value;
		Il2CppCodeGenWriteBarrier((&___mData_6), value);
	}

	inline static int32_t get_offset_of_mUnmanagedData_7() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mUnmanagedData_7)); }
	inline intptr_t get_mUnmanagedData_7() const { return ___mUnmanagedData_7; }
	inline intptr_t* get_address_of_mUnmanagedData_7() { return &___mUnmanagedData_7; }
	inline void set_mUnmanagedData_7(intptr_t value)
	{
		___mUnmanagedData_7 = value;
	}

	inline static int32_t get_offset_of_mDataSet_8() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mDataSet_8)); }
	inline bool get_mDataSet_8() const { return ___mDataSet_8; }
	inline bool* get_address_of_mDataSet_8() { return &___mDataSet_8; }
	inline void set_mDataSet_8(bool value)
	{
		___mDataSet_8 = value;
	}

	inline static int32_t get_offset_of_mPixel32_9() { return static_cast<int32_t>(offsetof(Image_t745056343, ___mPixel32_9)); }
	inline Color32U5BU5D_t3850468773* get_mPixel32_9() const { return ___mPixel32_9; }
	inline Color32U5BU5D_t3850468773** get_address_of_mPixel32_9() { return &___mPixel32_9; }
	inline void set_mPixel32_9(Color32U5BU5D_t3850468773* value)
	{
		___mPixel32_9 = value;
		Il2CppCodeGenWriteBarrier((&___mPixel32_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T745056343_H
#ifndef VUFORIAARCONTROLLER_T1876945237_H
#define VUFORIAARCONTROLLER_T1876945237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController
struct  VuforiaARController_t1876945237  : public ARController_t116632334
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaARController::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_1;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_2;
	// System.Int32 Vuforia.VuforiaARController::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_3;
	// System.Boolean Vuforia.VuforiaARController::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_4;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaARController::CameraDirection
	int32_t ___CameraDirection_5;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaARController::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_6;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaARController::mWorldCenterMode
	int32_t ___mWorldCenterMode_7;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaARController::mWorldCenter
	TrackableBehaviour_t1113559212 * ___mWorldCenter_8;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaARController::mVideoBgEventHandlers
	List_1_t905170877 * ___mVideoBgEventHandlers_9;
	// System.Action Vuforia.VuforiaARController::mOnBeforeVuforiaTrackersInitialized
	Action_t1264377477 * ___mOnBeforeVuforiaTrackersInitialized_10;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaInitialized
	Action_t1264377477 * ___mOnVuforiaInitialized_11;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaStarted
	Action_t1264377477 * ___mOnVuforiaStarted_12;
	// System.Action Vuforia.VuforiaARController::mOnVuforiaDeinitialized
	Action_t1264377477 * ___mOnVuforiaDeinitialized_13;
	// System.Action Vuforia.VuforiaARController::mOnTrackablesUpdated
	Action_t1264377477 * ___mOnTrackablesUpdated_14;
	// System.Action Vuforia.VuforiaARController::mRenderOnUpdate
	Action_t1264377477 * ___mRenderOnUpdate_15;
	// System.Action`1<System.Boolean> Vuforia.VuforiaARController::mOnPause
	Action_1_t269755560 * ___mOnPause_16;
	// System.Boolean Vuforia.VuforiaARController::mPaused
	bool ___mPaused_17;
	// System.Action Vuforia.VuforiaARController::mOnBackgroundTextureChanged
	Action_t1264377477 * ___mOnBackgroundTextureChanged_18;
	// System.Boolean Vuforia.VuforiaARController::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_19;
	// System.Boolean Vuforia.VuforiaARController::mHasStarted
	bool ___mHasStarted_20;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaARController::mCameraConfiguration
	RuntimeObject* ___mCameraConfiguration_21;
	// Vuforia.DigitalEyewearARController Vuforia.VuforiaARController::mEyewearBehaviour
	DigitalEyewearARController_t1054226036 * ___mEyewearBehaviour_22;
	// Vuforia.VideoBackgroundManager Vuforia.VuforiaARController::mVideoBackgroundMgr
	VideoBackgroundManager_t2198727358 * ___mVideoBackgroundMgr_23;
	// System.Boolean Vuforia.VuforiaARController::mCheckStopCamera
	bool ___mCheckStopCamera_24;
	// UnityEngine.Material Vuforia.VuforiaARController::mClearMaterial
	Material_t340375123 * ___mClearMaterial_25;
	// System.Boolean Vuforia.VuforiaARController::mMetalRendering
	bool ___mMetalRendering_26;
	// System.Boolean Vuforia.VuforiaARController::mHasStartedOnce
	bool ___mHasStartedOnce_27;
	// System.Boolean Vuforia.VuforiaARController::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_28;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_29;
	// System.Boolean Vuforia.VuforiaARController::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_30;
	// System.Int32 Vuforia.VuforiaARController::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_31;

public:
	inline static int32_t get_offset_of_CameraDeviceModeSetting_1() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDeviceModeSetting_1)); }
	inline int32_t get_CameraDeviceModeSetting_1() const { return ___CameraDeviceModeSetting_1; }
	inline int32_t* get_address_of_CameraDeviceModeSetting_1() { return &___CameraDeviceModeSetting_1; }
	inline void set_CameraDeviceModeSetting_1(int32_t value)
	{
		___CameraDeviceModeSetting_1 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousImageTargets_2() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousImageTargets_2)); }
	inline int32_t get_MaxSimultaneousImageTargets_2() const { return ___MaxSimultaneousImageTargets_2; }
	inline int32_t* get_address_of_MaxSimultaneousImageTargets_2() { return &___MaxSimultaneousImageTargets_2; }
	inline void set_MaxSimultaneousImageTargets_2(int32_t value)
	{
		___MaxSimultaneousImageTargets_2 = value;
	}

	inline static int32_t get_offset_of_MaxSimultaneousObjectTargets_3() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MaxSimultaneousObjectTargets_3)); }
	inline int32_t get_MaxSimultaneousObjectTargets_3() const { return ___MaxSimultaneousObjectTargets_3; }
	inline int32_t* get_address_of_MaxSimultaneousObjectTargets_3() { return &___MaxSimultaneousObjectTargets_3; }
	inline void set_MaxSimultaneousObjectTargets_3(int32_t value)
	{
		___MaxSimultaneousObjectTargets_3 = value;
	}

	inline static int32_t get_offset_of_UseDelayedLoadingObjectTargets_4() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___UseDelayedLoadingObjectTargets_4)); }
	inline bool get_UseDelayedLoadingObjectTargets_4() const { return ___UseDelayedLoadingObjectTargets_4; }
	inline bool* get_address_of_UseDelayedLoadingObjectTargets_4() { return &___UseDelayedLoadingObjectTargets_4; }
	inline void set_UseDelayedLoadingObjectTargets_4(bool value)
	{
		___UseDelayedLoadingObjectTargets_4 = value;
	}

	inline static int32_t get_offset_of_CameraDirection_5() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___CameraDirection_5)); }
	inline int32_t get_CameraDirection_5() const { return ___CameraDirection_5; }
	inline int32_t* get_address_of_CameraDirection_5() { return &___CameraDirection_5; }
	inline void set_CameraDirection_5(int32_t value)
	{
		___CameraDirection_5 = value;
	}

	inline static int32_t get_offset_of_MirrorVideoBackground_6() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___MirrorVideoBackground_6)); }
	inline int32_t get_MirrorVideoBackground_6() const { return ___MirrorVideoBackground_6; }
	inline int32_t* get_address_of_MirrorVideoBackground_6() { return &___MirrorVideoBackground_6; }
	inline void set_MirrorVideoBackground_6(int32_t value)
	{
		___MirrorVideoBackground_6 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_7() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenterMode_7)); }
	inline int32_t get_mWorldCenterMode_7() const { return ___mWorldCenterMode_7; }
	inline int32_t* get_address_of_mWorldCenterMode_7() { return &___mWorldCenterMode_7; }
	inline void set_mWorldCenterMode_7(int32_t value)
	{
		___mWorldCenterMode_7 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_8() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWorldCenter_8)); }
	inline TrackableBehaviour_t1113559212 * get_mWorldCenter_8() const { return ___mWorldCenter_8; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mWorldCenter_8() { return &___mWorldCenter_8; }
	inline void set_mWorldCenter_8(TrackableBehaviour_t1113559212 * value)
	{
		___mWorldCenter_8 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_8), value);
	}

	inline static int32_t get_offset_of_mVideoBgEventHandlers_9() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBgEventHandlers_9)); }
	inline List_1_t905170877 * get_mVideoBgEventHandlers_9() const { return ___mVideoBgEventHandlers_9; }
	inline List_1_t905170877 ** get_address_of_mVideoBgEventHandlers_9() { return &___mVideoBgEventHandlers_9; }
	inline void set_mVideoBgEventHandlers_9(List_1_t905170877 * value)
	{
		___mVideoBgEventHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBgEventHandlers_9), value);
	}

	inline static int32_t get_offset_of_mOnBeforeVuforiaTrackersInitialized_10() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnBeforeVuforiaTrackersInitialized_10)); }
	inline Action_t1264377477 * get_mOnBeforeVuforiaTrackersInitialized_10() const { return ___mOnBeforeVuforiaTrackersInitialized_10; }
	inline Action_t1264377477 ** get_address_of_mOnBeforeVuforiaTrackersInitialized_10() { return &___mOnBeforeVuforiaTrackersInitialized_10; }
	inline void set_mOnBeforeVuforiaTrackersInitialized_10(Action_t1264377477 * value)
	{
		___mOnBeforeVuforiaTrackersInitialized_10 = value;
		Il2CppCodeGenWriteBarrier((&___mOnBeforeVuforiaTrackersInitialized_10), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaInitialized_11() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaInitialized_11)); }
	inline Action_t1264377477 * get_mOnVuforiaInitialized_11() const { return ___mOnVuforiaInitialized_11; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaInitialized_11() { return &___mOnVuforiaInitialized_11; }
	inline void set_mOnVuforiaInitialized_11(Action_t1264377477 * value)
	{
		___mOnVuforiaInitialized_11 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitialized_11), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaStarted_12() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaStarted_12)); }
	inline Action_t1264377477 * get_mOnVuforiaStarted_12() const { return ___mOnVuforiaStarted_12; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaStarted_12() { return &___mOnVuforiaStarted_12; }
	inline void set_mOnVuforiaStarted_12(Action_t1264377477 * value)
	{
		___mOnVuforiaStarted_12 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaStarted_12), value);
	}

	inline static int32_t get_offset_of_mOnVuforiaDeinitialized_13() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnVuforiaDeinitialized_13)); }
	inline Action_t1264377477 * get_mOnVuforiaDeinitialized_13() const { return ___mOnVuforiaDeinitialized_13; }
	inline Action_t1264377477 ** get_address_of_mOnVuforiaDeinitialized_13() { return &___mOnVuforiaDeinitialized_13; }
	inline void set_mOnVuforiaDeinitialized_13(Action_t1264377477 * value)
	{
		___mOnVuforiaDeinitialized_13 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaDeinitialized_13), value);
	}

	inline static int32_t get_offset_of_mOnTrackablesUpdated_14() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnTrackablesUpdated_14)); }
	inline Action_t1264377477 * get_mOnTrackablesUpdated_14() const { return ___mOnTrackablesUpdated_14; }
	inline Action_t1264377477 ** get_address_of_mOnTrackablesUpdated_14() { return &___mOnTrackablesUpdated_14; }
	inline void set_mOnTrackablesUpdated_14(Action_t1264377477 * value)
	{
		___mOnTrackablesUpdated_14 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTrackablesUpdated_14), value);
	}

	inline static int32_t get_offset_of_mRenderOnUpdate_15() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mRenderOnUpdate_15)); }
	inline Action_t1264377477 * get_mRenderOnUpdate_15() const { return ___mRenderOnUpdate_15; }
	inline Action_t1264377477 ** get_address_of_mRenderOnUpdate_15() { return &___mRenderOnUpdate_15; }
	inline void set_mRenderOnUpdate_15(Action_t1264377477 * value)
	{
		___mRenderOnUpdate_15 = value;
		Il2CppCodeGenWriteBarrier((&___mRenderOnUpdate_15), value);
	}

	inline static int32_t get_offset_of_mOnPause_16() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnPause_16)); }
	inline Action_1_t269755560 * get_mOnPause_16() const { return ___mOnPause_16; }
	inline Action_1_t269755560 ** get_address_of_mOnPause_16() { return &___mOnPause_16; }
	inline void set_mOnPause_16(Action_1_t269755560 * value)
	{
		___mOnPause_16 = value;
		Il2CppCodeGenWriteBarrier((&___mOnPause_16), value);
	}

	inline static int32_t get_offset_of_mPaused_17() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mPaused_17)); }
	inline bool get_mPaused_17() const { return ___mPaused_17; }
	inline bool* get_address_of_mPaused_17() { return &___mPaused_17; }
	inline void set_mPaused_17(bool value)
	{
		___mPaused_17 = value;
	}

	inline static int32_t get_offset_of_mOnBackgroundTextureChanged_18() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mOnBackgroundTextureChanged_18)); }
	inline Action_t1264377477 * get_mOnBackgroundTextureChanged_18() const { return ___mOnBackgroundTextureChanged_18; }
	inline Action_t1264377477 ** get_address_of_mOnBackgroundTextureChanged_18() { return &___mOnBackgroundTextureChanged_18; }
	inline void set_mOnBackgroundTextureChanged_18(Action_t1264377477 * value)
	{
		___mOnBackgroundTextureChanged_18 = value;
		Il2CppCodeGenWriteBarrier((&___mOnBackgroundTextureChanged_18), value);
	}

	inline static int32_t get_offset_of_mStartHasBeenInvoked_19() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mStartHasBeenInvoked_19)); }
	inline bool get_mStartHasBeenInvoked_19() const { return ___mStartHasBeenInvoked_19; }
	inline bool* get_address_of_mStartHasBeenInvoked_19() { return &___mStartHasBeenInvoked_19; }
	inline void set_mStartHasBeenInvoked_19(bool value)
	{
		___mStartHasBeenInvoked_19 = value;
	}

	inline static int32_t get_offset_of_mHasStarted_20() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStarted_20)); }
	inline bool get_mHasStarted_20() const { return ___mHasStarted_20; }
	inline bool* get_address_of_mHasStarted_20() { return &___mHasStarted_20; }
	inline void set_mHasStarted_20(bool value)
	{
		___mHasStarted_20 = value;
	}

	inline static int32_t get_offset_of_mCameraConfiguration_21() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCameraConfiguration_21)); }
	inline RuntimeObject* get_mCameraConfiguration_21() const { return ___mCameraConfiguration_21; }
	inline RuntimeObject** get_address_of_mCameraConfiguration_21() { return &___mCameraConfiguration_21; }
	inline void set_mCameraConfiguration_21(RuntimeObject* value)
	{
		___mCameraConfiguration_21 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraConfiguration_21), value);
	}

	inline static int32_t get_offset_of_mEyewearBehaviour_22() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mEyewearBehaviour_22)); }
	inline DigitalEyewearARController_t1054226036 * get_mEyewearBehaviour_22() const { return ___mEyewearBehaviour_22; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mEyewearBehaviour_22() { return &___mEyewearBehaviour_22; }
	inline void set_mEyewearBehaviour_22(DigitalEyewearARController_t1054226036 * value)
	{
		___mEyewearBehaviour_22 = value;
		Il2CppCodeGenWriteBarrier((&___mEyewearBehaviour_22), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundMgr_23() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mVideoBackgroundMgr_23)); }
	inline VideoBackgroundManager_t2198727358 * get_mVideoBackgroundMgr_23() const { return ___mVideoBackgroundMgr_23; }
	inline VideoBackgroundManager_t2198727358 ** get_address_of_mVideoBackgroundMgr_23() { return &___mVideoBackgroundMgr_23; }
	inline void set_mVideoBackgroundMgr_23(VideoBackgroundManager_t2198727358 * value)
	{
		___mVideoBackgroundMgr_23 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundMgr_23), value);
	}

	inline static int32_t get_offset_of_mCheckStopCamera_24() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mCheckStopCamera_24)); }
	inline bool get_mCheckStopCamera_24() const { return ___mCheckStopCamera_24; }
	inline bool* get_address_of_mCheckStopCamera_24() { return &___mCheckStopCamera_24; }
	inline void set_mCheckStopCamera_24(bool value)
	{
		___mCheckStopCamera_24 = value;
	}

	inline static int32_t get_offset_of_mClearMaterial_25() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mClearMaterial_25)); }
	inline Material_t340375123 * get_mClearMaterial_25() const { return ___mClearMaterial_25; }
	inline Material_t340375123 ** get_address_of_mClearMaterial_25() { return &___mClearMaterial_25; }
	inline void set_mClearMaterial_25(Material_t340375123 * value)
	{
		___mClearMaterial_25 = value;
		Il2CppCodeGenWriteBarrier((&___mClearMaterial_25), value);
	}

	inline static int32_t get_offset_of_mMetalRendering_26() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mMetalRendering_26)); }
	inline bool get_mMetalRendering_26() const { return ___mMetalRendering_26; }
	inline bool* get_address_of_mMetalRendering_26() { return &___mMetalRendering_26; }
	inline void set_mMetalRendering_26(bool value)
	{
		___mMetalRendering_26 = value;
	}

	inline static int32_t get_offset_of_mHasStartedOnce_27() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mHasStartedOnce_27)); }
	inline bool get_mHasStartedOnce_27() const { return ___mHasStartedOnce_27; }
	inline bool* get_address_of_mHasStartedOnce_27() { return &___mHasStartedOnce_27; }
	inline void set_mHasStartedOnce_27(bool value)
	{
		___mHasStartedOnce_27 = value;
	}

	inline static int32_t get_offset_of_mWasEnabledBeforePause_28() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mWasEnabledBeforePause_28)); }
	inline bool get_mWasEnabledBeforePause_28() const { return ___mWasEnabledBeforePause_28; }
	inline bool* get_address_of_mWasEnabledBeforePause_28() { return &___mWasEnabledBeforePause_28; }
	inline void set_mWasEnabledBeforePause_28(bool value)
	{
		___mWasEnabledBeforePause_28 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforePause_29() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforePause_29)); }
	inline bool get_mObjectTrackerWasActiveBeforePause_29() const { return ___mObjectTrackerWasActiveBeforePause_29; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforePause_29() { return &___mObjectTrackerWasActiveBeforePause_29; }
	inline void set_mObjectTrackerWasActiveBeforePause_29(bool value)
	{
		___mObjectTrackerWasActiveBeforePause_29 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerWasActiveBeforeDisabling_30() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mObjectTrackerWasActiveBeforeDisabling_30)); }
	inline bool get_mObjectTrackerWasActiveBeforeDisabling_30() const { return ___mObjectTrackerWasActiveBeforeDisabling_30; }
	inline bool* get_address_of_mObjectTrackerWasActiveBeforeDisabling_30() { return &___mObjectTrackerWasActiveBeforeDisabling_30; }
	inline void set_mObjectTrackerWasActiveBeforeDisabling_30(bool value)
	{
		___mObjectTrackerWasActiveBeforeDisabling_30 = value;
	}

	inline static int32_t get_offset_of_mLastUpdatedFrame_31() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237, ___mLastUpdatedFrame_31)); }
	inline int32_t get_mLastUpdatedFrame_31() const { return ___mLastUpdatedFrame_31; }
	inline int32_t* get_address_of_mLastUpdatedFrame_31() { return &___mLastUpdatedFrame_31; }
	inline void set_mLastUpdatedFrame_31(int32_t value)
	{
		___mLastUpdatedFrame_31 = value;
	}
};

struct VuforiaARController_t1876945237_StaticFields
{
public:
	// Vuforia.VuforiaARController Vuforia.VuforiaARController::mInstance
	VuforiaARController_t1876945237 * ___mInstance_32;
	// System.Object Vuforia.VuforiaARController::mPadlock
	RuntimeObject * ___mPadlock_33;

public:
	inline static int32_t get_offset_of_mInstance_32() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mInstance_32)); }
	inline VuforiaARController_t1876945237 * get_mInstance_32() const { return ___mInstance_32; }
	inline VuforiaARController_t1876945237 ** get_address_of_mInstance_32() { return &___mInstance_32; }
	inline void set_mInstance_32(VuforiaARController_t1876945237 * value)
	{
		___mInstance_32 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_32), value);
	}

	inline static int32_t get_offset_of_mPadlock_33() { return static_cast<int32_t>(offsetof(VuforiaARController_t1876945237_StaticFields, ___mPadlock_33)); }
	inline RuntimeObject * get_mPadlock_33() const { return ___mPadlock_33; }
	inline RuntimeObject ** get_address_of_mPadlock_33() { return &___mPadlock_33; }
	inline void set_mPadlock_33(RuntimeObject * value)
	{
		___mPadlock_33 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAARCONTROLLER_T1876945237_H
#ifndef DIGITALEYEWEARCONFIGURATION_T546560202_H
#define DIGITALEYEWEARCONFIGURATION_T546560202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct  DigitalEyewearConfiguration_t546560202  : public RuntimeObject
{
public:
	// System.Single Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::cameraOffset
	float ___cameraOffset_0;
	// System.Int32 Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::distortionRenderingLayer
	int32_t ___distortionRenderingLayer_1;
	// Vuforia.DigitalEyewearARController/EyewearType Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::eyewearType
	int32_t ___eyewearType_2;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::stereoFramework
	int32_t ___stereoFramework_3;
	// Vuforia.DigitalEyewearARController/SeeThroughConfiguration Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::seeThroughConfiguration
	int32_t ___seeThroughConfiguration_4;
	// System.String Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::viewerName
	String_t* ___viewerName_5;
	// System.String Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::viewerManufacturer
	String_t* ___viewerManufacturer_6;
	// System.Boolean Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::useCustomViewer
	bool ___useCustomViewer_7;
	// Vuforia.DigitalEyewearARController/SerializableViewerParameters Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::customViewer
	SerializableViewerParameters_t2043332680 * ___customViewer_8;

public:
	inline static int32_t get_offset_of_cameraOffset_0() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___cameraOffset_0)); }
	inline float get_cameraOffset_0() const { return ___cameraOffset_0; }
	inline float* get_address_of_cameraOffset_0() { return &___cameraOffset_0; }
	inline void set_cameraOffset_0(float value)
	{
		___cameraOffset_0 = value;
	}

	inline static int32_t get_offset_of_distortionRenderingLayer_1() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___distortionRenderingLayer_1)); }
	inline int32_t get_distortionRenderingLayer_1() const { return ___distortionRenderingLayer_1; }
	inline int32_t* get_address_of_distortionRenderingLayer_1() { return &___distortionRenderingLayer_1; }
	inline void set_distortionRenderingLayer_1(int32_t value)
	{
		___distortionRenderingLayer_1 = value;
	}

	inline static int32_t get_offset_of_eyewearType_2() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___eyewearType_2)); }
	inline int32_t get_eyewearType_2() const { return ___eyewearType_2; }
	inline int32_t* get_address_of_eyewearType_2() { return &___eyewearType_2; }
	inline void set_eyewearType_2(int32_t value)
	{
		___eyewearType_2 = value;
	}

	inline static int32_t get_offset_of_stereoFramework_3() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___stereoFramework_3)); }
	inline int32_t get_stereoFramework_3() const { return ___stereoFramework_3; }
	inline int32_t* get_address_of_stereoFramework_3() { return &___stereoFramework_3; }
	inline void set_stereoFramework_3(int32_t value)
	{
		___stereoFramework_3 = value;
	}

	inline static int32_t get_offset_of_seeThroughConfiguration_4() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___seeThroughConfiguration_4)); }
	inline int32_t get_seeThroughConfiguration_4() const { return ___seeThroughConfiguration_4; }
	inline int32_t* get_address_of_seeThroughConfiguration_4() { return &___seeThroughConfiguration_4; }
	inline void set_seeThroughConfiguration_4(int32_t value)
	{
		___seeThroughConfiguration_4 = value;
	}

	inline static int32_t get_offset_of_viewerName_5() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___viewerName_5)); }
	inline String_t* get_viewerName_5() const { return ___viewerName_5; }
	inline String_t** get_address_of_viewerName_5() { return &___viewerName_5; }
	inline void set_viewerName_5(String_t* value)
	{
		___viewerName_5 = value;
		Il2CppCodeGenWriteBarrier((&___viewerName_5), value);
	}

	inline static int32_t get_offset_of_viewerManufacturer_6() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___viewerManufacturer_6)); }
	inline String_t* get_viewerManufacturer_6() const { return ___viewerManufacturer_6; }
	inline String_t** get_address_of_viewerManufacturer_6() { return &___viewerManufacturer_6; }
	inline void set_viewerManufacturer_6(String_t* value)
	{
		___viewerManufacturer_6 = value;
		Il2CppCodeGenWriteBarrier((&___viewerManufacturer_6), value);
	}

	inline static int32_t get_offset_of_useCustomViewer_7() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___useCustomViewer_7)); }
	inline bool get_useCustomViewer_7() const { return ___useCustomViewer_7; }
	inline bool* get_address_of_useCustomViewer_7() { return &___useCustomViewer_7; }
	inline void set_useCustomViewer_7(bool value)
	{
		___useCustomViewer_7 = value;
	}

	inline static int32_t get_offset_of_customViewer_8() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___customViewer_8)); }
	inline SerializableViewerParameters_t2043332680 * get_customViewer_8() const { return ___customViewer_8; }
	inline SerializableViewerParameters_t2043332680 ** get_address_of_customViewer_8() { return &___customViewer_8; }
	inline void set_customViewer_8(SerializableViewerParameters_t2043332680 * value)
	{
		___customViewer_8 = value;
		Il2CppCodeGenWriteBarrier((&___customViewer_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGITALEYEWEARCONFIGURATION_T546560202_H
#ifndef GENERICVUFORIACONFIGURATION_T3697830469_H
#define GENERICVUFORIACONFIGURATION_T3697830469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct  GenericVuforiaConfiguration_t3697830469  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_1;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::ufoLicenseKey
	String_t* ___ufoLicenseKey_2;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_3;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_4;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_5;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousObjectTargets
	int32_t ___maxSimultaneousObjectTargets_6;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::useDelayedLoadingObjectTargets
	bool ___useDelayedLoadingObjectTargets_7;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDirection
	int32_t ___cameraDirection_8;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::mirrorVideoBackground
	int32_t ___mirrorVideoBackground_9;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::version
	String_t* ___version_10;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::eulaAccepted
	bool ___eulaAccepted_11;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_1() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___vuforiaLicenseKey_1)); }
	inline String_t* get_vuforiaLicenseKey_1() const { return ___vuforiaLicenseKey_1; }
	inline String_t** get_address_of_vuforiaLicenseKey_1() { return &___vuforiaLicenseKey_1; }
	inline void set_vuforiaLicenseKey_1(String_t* value)
	{
		___vuforiaLicenseKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___vuforiaLicenseKey_1), value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___ufoLicenseKey_2)); }
	inline String_t* get_ufoLicenseKey_2() const { return ___ufoLicenseKey_2; }
	inline String_t** get_address_of_ufoLicenseKey_2() { return &___ufoLicenseKey_2; }
	inline void set_ufoLicenseKey_2(String_t* value)
	{
		___ufoLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___ufoLicenseKey_2), value);
	}

	inline static int32_t get_offset_of_delayedInitialization_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___delayedInitialization_3)); }
	inline bool get_delayedInitialization_3() const { return ___delayedInitialization_3; }
	inline bool* get_address_of_delayedInitialization_3() { return &___delayedInitialization_3; }
	inline void set_delayedInitialization_3(bool value)
	{
		___delayedInitialization_3 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDeviceModeSetting_4)); }
	inline int32_t get_cameraDeviceModeSetting_4() const { return ___cameraDeviceModeSetting_4; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_4() { return &___cameraDeviceModeSetting_4; }
	inline void set_cameraDeviceModeSetting_4(int32_t value)
	{
		___cameraDeviceModeSetting_4 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousImageTargets_5)); }
	inline int32_t get_maxSimultaneousImageTargets_5() const { return ___maxSimultaneousImageTargets_5; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_5() { return &___maxSimultaneousImageTargets_5; }
	inline void set_maxSimultaneousImageTargets_5(int32_t value)
	{
		___maxSimultaneousImageTargets_5 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousObjectTargets_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousObjectTargets_6)); }
	inline int32_t get_maxSimultaneousObjectTargets_6() const { return ___maxSimultaneousObjectTargets_6; }
	inline int32_t* get_address_of_maxSimultaneousObjectTargets_6() { return &___maxSimultaneousObjectTargets_6; }
	inline void set_maxSimultaneousObjectTargets_6(int32_t value)
	{
		___maxSimultaneousObjectTargets_6 = value;
	}

	inline static int32_t get_offset_of_useDelayedLoadingObjectTargets_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___useDelayedLoadingObjectTargets_7)); }
	inline bool get_useDelayedLoadingObjectTargets_7() const { return ___useDelayedLoadingObjectTargets_7; }
	inline bool* get_address_of_useDelayedLoadingObjectTargets_7() { return &___useDelayedLoadingObjectTargets_7; }
	inline void set_useDelayedLoadingObjectTargets_7(bool value)
	{
		___useDelayedLoadingObjectTargets_7 = value;
	}

	inline static int32_t get_offset_of_cameraDirection_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDirection_8)); }
	inline int32_t get_cameraDirection_8() const { return ___cameraDirection_8; }
	inline int32_t* get_address_of_cameraDirection_8() { return &___cameraDirection_8; }
	inline void set_cameraDirection_8(int32_t value)
	{
		___cameraDirection_8 = value;
	}

	inline static int32_t get_offset_of_mirrorVideoBackground_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___mirrorVideoBackground_9)); }
	inline int32_t get_mirrorVideoBackground_9() const { return ___mirrorVideoBackground_9; }
	inline int32_t* get_address_of_mirrorVideoBackground_9() { return &___mirrorVideoBackground_9; }
	inline void set_mirrorVideoBackground_9(int32_t value)
	{
		___mirrorVideoBackground_9 = value;
	}

	inline static int32_t get_offset_of_version_10() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___version_10)); }
	inline String_t* get_version_10() const { return ___version_10; }
	inline String_t** get_address_of_version_10() { return &___version_10; }
	inline void set_version_10(String_t* value)
	{
		___version_10 = value;
		Il2CppCodeGenWriteBarrier((&___version_10), value);
	}

	inline static int32_t get_offset_of_eulaAccepted_11() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___eulaAccepted_11)); }
	inline bool get_eulaAccepted_11() const { return ___eulaAccepted_11; }
	inline bool* get_address_of_eulaAccepted_11() { return &___eulaAccepted_11; }
	inline void set_eulaAccepted_11(bool value)
	{
		___eulaAccepted_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICVUFORIACONFIGURATION_T3697830469_H
#ifndef VUFORIAMANAGER_T1653423889_H
#define VUFORIAMANAGER_T1653423889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager
struct  VuforiaManager_t1653423889  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.VuforiaManager::<VideoBackgroundTextureSet>k__BackingField
	bool ___U3CVideoBackgroundTextureSetU3Ek__BackingField_0;
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaManager::mWorldCenterMode
	int32_t ___mWorldCenterMode_2;
	// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManager::mWorldCenter
	RuntimeObject* ___mWorldCenter_3;
	// Vuforia.VuMarkBehaviour Vuforia.VuforiaManager::mVuMarkWorldCenter
	VuMarkBehaviour_t1178230459 * ___mVuMarkWorldCenter_4;
	// UnityEngine.Transform Vuforia.VuforiaManager::mARCameraTransform
	Transform_t3600365921 * ___mARCameraTransform_5;
	// UnityEngine.Transform Vuforia.VuforiaManager::mCentralAnchorPoint
	Transform_t3600365921 * ___mCentralAnchorPoint_6;
	// Vuforia.TrackerData/TrackableResultData[] Vuforia.VuforiaManager::mTrackableResultDataArray
	TrackableResultDataU5BU5D_t4273811049* ___mTrackableResultDataArray_7;
	// Vuforia.TrackerData/VuMarkTargetData[] Vuforia.VuforiaManager::mVuMarkDataArray
	VuMarkTargetDataU5BU5D_t4015091482* ___mVuMarkDataArray_8;
	// Vuforia.TrackerData/VuMarkTargetResultData[] Vuforia.VuforiaManager::mVuMarkResultDataArray
	VuMarkTargetResultDataU5BU5D_t2157423781* ___mVuMarkResultDataArray_9;
	// System.Collections.Generic.LinkedList`1<Vuforia.VuforiaManager/TrackableIdPair> Vuforia.VuforiaManager::mWCTrackableFoundQueue
	LinkedList_1_t3066996466 * ___mWCTrackableFoundQueue_10;
	// System.IntPtr Vuforia.VuforiaManager::mImageHeaderData
	intptr_t ___mImageHeaderData_11;
	// System.Int32 Vuforia.VuforiaManager::mNumImageHeaders
	int32_t ___mNumImageHeaders_12;
	// System.Int32 Vuforia.VuforiaManager::mInjectedFrameIdx
	int32_t ___mInjectedFrameIdx_13;
	// System.IntPtr Vuforia.VuforiaManager::mLastProcessedFrameStatePtr
	intptr_t ___mLastProcessedFrameStatePtr_14;
	// System.Boolean Vuforia.VuforiaManager::mInitialized
	bool ___mInitialized_15;
	// System.Boolean Vuforia.VuforiaManager::mPaused
	bool ___mPaused_16;
	// Vuforia.TrackerData/FrameState Vuforia.VuforiaManager::mFrameState
	FrameState_t2717258284  ___mFrameState_17;
	// Vuforia.VuforiaManager/AutoRotationState Vuforia.VuforiaManager::mAutoRotationState
	AutoRotationState_t2150317116  ___mAutoRotationState_18;
	// System.Boolean Vuforia.VuforiaManager::mVideoBackgroundNeedsRedrawing
	bool ___mVideoBackgroundNeedsRedrawing_19;
	// System.Int32 Vuforia.VuforiaManager::mDiscardStatesForRendering
	int32_t ___mDiscardStatesForRendering_20;
	// System.Int32 Vuforia.VuforiaManager::mLastFrameIdx
	int32_t ___mLastFrameIdx_21;
	// System.Boolean Vuforia.VuforiaManager::mIsSeeThroughDevice
	bool ___mIsSeeThroughDevice_22;
	// Vuforia.LateLatchingManager Vuforia.VuforiaManager::mLateLatchingManager
	LateLatchingManager_t3198550161 * ___mLateLatchingManager_23;
	// Vuforia.CameraCalibrationComparer Vuforia.VuforiaManager::mCameraCalibrationComparer
	CameraCalibrationComparer_t2990055837 * ___mCameraCalibrationComparer_24;
	// UnityEngine.Vector3 Vuforia.VuforiaManager::mPosePositionalOffset
	Vector3_t3722313464  ___mPosePositionalOffset_25;
	// UnityEngine.Quaternion Vuforia.VuforiaManager::mPoseRotationalOffset
	Quaternion_t2301928331  ___mPoseRotationalOffset_26;

public:
	inline static int32_t get_offset_of_U3CVideoBackgroundTextureSetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___U3CVideoBackgroundTextureSetU3Ek__BackingField_0)); }
	inline bool get_U3CVideoBackgroundTextureSetU3Ek__BackingField_0() const { return ___U3CVideoBackgroundTextureSetU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CVideoBackgroundTextureSetU3Ek__BackingField_0() { return &___U3CVideoBackgroundTextureSetU3Ek__BackingField_0; }
	inline void set_U3CVideoBackgroundTextureSetU3Ek__BackingField_0(bool value)
	{
		___U3CVideoBackgroundTextureSetU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_mWorldCenterMode_2() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mWorldCenterMode_2)); }
	inline int32_t get_mWorldCenterMode_2() const { return ___mWorldCenterMode_2; }
	inline int32_t* get_address_of_mWorldCenterMode_2() { return &___mWorldCenterMode_2; }
	inline void set_mWorldCenterMode_2(int32_t value)
	{
		___mWorldCenterMode_2 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_3() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mWorldCenter_3)); }
	inline RuntimeObject* get_mWorldCenter_3() const { return ___mWorldCenter_3; }
	inline RuntimeObject** get_address_of_mWorldCenter_3() { return &___mWorldCenter_3; }
	inline void set_mWorldCenter_3(RuntimeObject* value)
	{
		___mWorldCenter_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_3), value);
	}

	inline static int32_t get_offset_of_mVuMarkWorldCenter_4() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVuMarkWorldCenter_4)); }
	inline VuMarkBehaviour_t1178230459 * get_mVuMarkWorldCenter_4() const { return ___mVuMarkWorldCenter_4; }
	inline VuMarkBehaviour_t1178230459 ** get_address_of_mVuMarkWorldCenter_4() { return &___mVuMarkWorldCenter_4; }
	inline void set_mVuMarkWorldCenter_4(VuMarkBehaviour_t1178230459 * value)
	{
		___mVuMarkWorldCenter_4 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkWorldCenter_4), value);
	}

	inline static int32_t get_offset_of_mARCameraTransform_5() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mARCameraTransform_5)); }
	inline Transform_t3600365921 * get_mARCameraTransform_5() const { return ___mARCameraTransform_5; }
	inline Transform_t3600365921 ** get_address_of_mARCameraTransform_5() { return &___mARCameraTransform_5; }
	inline void set_mARCameraTransform_5(Transform_t3600365921 * value)
	{
		___mARCameraTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___mARCameraTransform_5), value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_6() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mCentralAnchorPoint_6)); }
	inline Transform_t3600365921 * get_mCentralAnchorPoint_6() const { return ___mCentralAnchorPoint_6; }
	inline Transform_t3600365921 ** get_address_of_mCentralAnchorPoint_6() { return &___mCentralAnchorPoint_6; }
	inline void set_mCentralAnchorPoint_6(Transform_t3600365921 * value)
	{
		___mCentralAnchorPoint_6 = value;
		Il2CppCodeGenWriteBarrier((&___mCentralAnchorPoint_6), value);
	}

	inline static int32_t get_offset_of_mTrackableResultDataArray_7() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mTrackableResultDataArray_7)); }
	inline TrackableResultDataU5BU5D_t4273811049* get_mTrackableResultDataArray_7() const { return ___mTrackableResultDataArray_7; }
	inline TrackableResultDataU5BU5D_t4273811049** get_address_of_mTrackableResultDataArray_7() { return &___mTrackableResultDataArray_7; }
	inline void set_mTrackableResultDataArray_7(TrackableResultDataU5BU5D_t4273811049* value)
	{
		___mTrackableResultDataArray_7 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableResultDataArray_7), value);
	}

	inline static int32_t get_offset_of_mVuMarkDataArray_8() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVuMarkDataArray_8)); }
	inline VuMarkTargetDataU5BU5D_t4015091482* get_mVuMarkDataArray_8() const { return ___mVuMarkDataArray_8; }
	inline VuMarkTargetDataU5BU5D_t4015091482** get_address_of_mVuMarkDataArray_8() { return &___mVuMarkDataArray_8; }
	inline void set_mVuMarkDataArray_8(VuMarkTargetDataU5BU5D_t4015091482* value)
	{
		___mVuMarkDataArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkDataArray_8), value);
	}

	inline static int32_t get_offset_of_mVuMarkResultDataArray_9() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVuMarkResultDataArray_9)); }
	inline VuMarkTargetResultDataU5BU5D_t2157423781* get_mVuMarkResultDataArray_9() const { return ___mVuMarkResultDataArray_9; }
	inline VuMarkTargetResultDataU5BU5D_t2157423781** get_address_of_mVuMarkResultDataArray_9() { return &___mVuMarkResultDataArray_9; }
	inline void set_mVuMarkResultDataArray_9(VuMarkTargetResultDataU5BU5D_t2157423781* value)
	{
		___mVuMarkResultDataArray_9 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkResultDataArray_9), value);
	}

	inline static int32_t get_offset_of_mWCTrackableFoundQueue_10() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mWCTrackableFoundQueue_10)); }
	inline LinkedList_1_t3066996466 * get_mWCTrackableFoundQueue_10() const { return ___mWCTrackableFoundQueue_10; }
	inline LinkedList_1_t3066996466 ** get_address_of_mWCTrackableFoundQueue_10() { return &___mWCTrackableFoundQueue_10; }
	inline void set_mWCTrackableFoundQueue_10(LinkedList_1_t3066996466 * value)
	{
		___mWCTrackableFoundQueue_10 = value;
		Il2CppCodeGenWriteBarrier((&___mWCTrackableFoundQueue_10), value);
	}

	inline static int32_t get_offset_of_mImageHeaderData_11() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mImageHeaderData_11)); }
	inline intptr_t get_mImageHeaderData_11() const { return ___mImageHeaderData_11; }
	inline intptr_t* get_address_of_mImageHeaderData_11() { return &___mImageHeaderData_11; }
	inline void set_mImageHeaderData_11(intptr_t value)
	{
		___mImageHeaderData_11 = value;
	}

	inline static int32_t get_offset_of_mNumImageHeaders_12() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mNumImageHeaders_12)); }
	inline int32_t get_mNumImageHeaders_12() const { return ___mNumImageHeaders_12; }
	inline int32_t* get_address_of_mNumImageHeaders_12() { return &___mNumImageHeaders_12; }
	inline void set_mNumImageHeaders_12(int32_t value)
	{
		___mNumImageHeaders_12 = value;
	}

	inline static int32_t get_offset_of_mInjectedFrameIdx_13() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mInjectedFrameIdx_13)); }
	inline int32_t get_mInjectedFrameIdx_13() const { return ___mInjectedFrameIdx_13; }
	inline int32_t* get_address_of_mInjectedFrameIdx_13() { return &___mInjectedFrameIdx_13; }
	inline void set_mInjectedFrameIdx_13(int32_t value)
	{
		___mInjectedFrameIdx_13 = value;
	}

	inline static int32_t get_offset_of_mLastProcessedFrameStatePtr_14() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mLastProcessedFrameStatePtr_14)); }
	inline intptr_t get_mLastProcessedFrameStatePtr_14() const { return ___mLastProcessedFrameStatePtr_14; }
	inline intptr_t* get_address_of_mLastProcessedFrameStatePtr_14() { return &___mLastProcessedFrameStatePtr_14; }
	inline void set_mLastProcessedFrameStatePtr_14(intptr_t value)
	{
		___mLastProcessedFrameStatePtr_14 = value;
	}

	inline static int32_t get_offset_of_mInitialized_15() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mInitialized_15)); }
	inline bool get_mInitialized_15() const { return ___mInitialized_15; }
	inline bool* get_address_of_mInitialized_15() { return &___mInitialized_15; }
	inline void set_mInitialized_15(bool value)
	{
		___mInitialized_15 = value;
	}

	inline static int32_t get_offset_of_mPaused_16() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mPaused_16)); }
	inline bool get_mPaused_16() const { return ___mPaused_16; }
	inline bool* get_address_of_mPaused_16() { return &___mPaused_16; }
	inline void set_mPaused_16(bool value)
	{
		___mPaused_16 = value;
	}

	inline static int32_t get_offset_of_mFrameState_17() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mFrameState_17)); }
	inline FrameState_t2717258284  get_mFrameState_17() const { return ___mFrameState_17; }
	inline FrameState_t2717258284 * get_address_of_mFrameState_17() { return &___mFrameState_17; }
	inline void set_mFrameState_17(FrameState_t2717258284  value)
	{
		___mFrameState_17 = value;
	}

	inline static int32_t get_offset_of_mAutoRotationState_18() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mAutoRotationState_18)); }
	inline AutoRotationState_t2150317116  get_mAutoRotationState_18() const { return ___mAutoRotationState_18; }
	inline AutoRotationState_t2150317116 * get_address_of_mAutoRotationState_18() { return &___mAutoRotationState_18; }
	inline void set_mAutoRotationState_18(AutoRotationState_t2150317116  value)
	{
		___mAutoRotationState_18 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundNeedsRedrawing_19() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mVideoBackgroundNeedsRedrawing_19)); }
	inline bool get_mVideoBackgroundNeedsRedrawing_19() const { return ___mVideoBackgroundNeedsRedrawing_19; }
	inline bool* get_address_of_mVideoBackgroundNeedsRedrawing_19() { return &___mVideoBackgroundNeedsRedrawing_19; }
	inline void set_mVideoBackgroundNeedsRedrawing_19(bool value)
	{
		___mVideoBackgroundNeedsRedrawing_19 = value;
	}

	inline static int32_t get_offset_of_mDiscardStatesForRendering_20() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mDiscardStatesForRendering_20)); }
	inline int32_t get_mDiscardStatesForRendering_20() const { return ___mDiscardStatesForRendering_20; }
	inline int32_t* get_address_of_mDiscardStatesForRendering_20() { return &___mDiscardStatesForRendering_20; }
	inline void set_mDiscardStatesForRendering_20(int32_t value)
	{
		___mDiscardStatesForRendering_20 = value;
	}

	inline static int32_t get_offset_of_mLastFrameIdx_21() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mLastFrameIdx_21)); }
	inline int32_t get_mLastFrameIdx_21() const { return ___mLastFrameIdx_21; }
	inline int32_t* get_address_of_mLastFrameIdx_21() { return &___mLastFrameIdx_21; }
	inline void set_mLastFrameIdx_21(int32_t value)
	{
		___mLastFrameIdx_21 = value;
	}

	inline static int32_t get_offset_of_mIsSeeThroughDevice_22() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mIsSeeThroughDevice_22)); }
	inline bool get_mIsSeeThroughDevice_22() const { return ___mIsSeeThroughDevice_22; }
	inline bool* get_address_of_mIsSeeThroughDevice_22() { return &___mIsSeeThroughDevice_22; }
	inline void set_mIsSeeThroughDevice_22(bool value)
	{
		___mIsSeeThroughDevice_22 = value;
	}

	inline static int32_t get_offset_of_mLateLatchingManager_23() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mLateLatchingManager_23)); }
	inline LateLatchingManager_t3198550161 * get_mLateLatchingManager_23() const { return ___mLateLatchingManager_23; }
	inline LateLatchingManager_t3198550161 ** get_address_of_mLateLatchingManager_23() { return &___mLateLatchingManager_23; }
	inline void set_mLateLatchingManager_23(LateLatchingManager_t3198550161 * value)
	{
		___mLateLatchingManager_23 = value;
		Il2CppCodeGenWriteBarrier((&___mLateLatchingManager_23), value);
	}

	inline static int32_t get_offset_of_mCameraCalibrationComparer_24() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mCameraCalibrationComparer_24)); }
	inline CameraCalibrationComparer_t2990055837 * get_mCameraCalibrationComparer_24() const { return ___mCameraCalibrationComparer_24; }
	inline CameraCalibrationComparer_t2990055837 ** get_address_of_mCameraCalibrationComparer_24() { return &___mCameraCalibrationComparer_24; }
	inline void set_mCameraCalibrationComparer_24(CameraCalibrationComparer_t2990055837 * value)
	{
		___mCameraCalibrationComparer_24 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraCalibrationComparer_24), value);
	}

	inline static int32_t get_offset_of_mPosePositionalOffset_25() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mPosePositionalOffset_25)); }
	inline Vector3_t3722313464  get_mPosePositionalOffset_25() const { return ___mPosePositionalOffset_25; }
	inline Vector3_t3722313464 * get_address_of_mPosePositionalOffset_25() { return &___mPosePositionalOffset_25; }
	inline void set_mPosePositionalOffset_25(Vector3_t3722313464  value)
	{
		___mPosePositionalOffset_25 = value;
	}

	inline static int32_t get_offset_of_mPoseRotationalOffset_26() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889, ___mPoseRotationalOffset_26)); }
	inline Quaternion_t2301928331  get_mPoseRotationalOffset_26() const { return ___mPoseRotationalOffset_26; }
	inline Quaternion_t2301928331 * get_address_of_mPoseRotationalOffset_26() { return &___mPoseRotationalOffset_26; }
	inline void set_mPoseRotationalOffset_26(Quaternion_t2301928331  value)
	{
		___mPoseRotationalOffset_26 = value;
	}
};

struct VuforiaManager_t1653423889_StaticFields
{
public:
	// Vuforia.VuforiaManager Vuforia.VuforiaManager::sInstance
	VuforiaManager_t1653423889 * ___sInstance_1;

public:
	inline static int32_t get_offset_of_sInstance_1() { return static_cast<int32_t>(offsetof(VuforiaManager_t1653423889_StaticFields, ___sInstance_1)); }
	inline VuforiaManager_t1653423889 * get_sInstance_1() const { return ___sInstance_1; }
	inline VuforiaManager_t1653423889 ** get_address_of_sInstance_1() { return &___sInstance_1; }
	inline void set_sInstance_1(VuforiaManager_t1653423889 * value)
	{
		___sInstance_1 = value;
		Il2CppCodeGenWriteBarrier((&___sInstance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMANAGER_T1653423889_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef ACTION_1_T1350698054_H
#define ACTION_1_T1350698054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Vuforia.VuMarkBehaviour>
struct  Action_1_t1350698054  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1350698054_H
#ifndef ACTION_1_T1302041398_H
#define ACTION_1_T1302041398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Vuforia.VuMarkTarget>
struct  Action_1_t1302041398  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1302041398_H
#ifndef FUNC_1_T3822001908_H
#define FUNC_1_T3822001908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Boolean>
struct  Func_1_t3822001908  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T3822001908_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef CANVASGROUP_T4083511760_H
#define CANVASGROUP_T4083511760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasGroup
struct  CanvasGroup_t4083511760  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASGROUP_T4083511760_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ERROREVENTHANDLER_T3211687919_H
#define ERROREVENTHANDLER_T3211687919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct  ErrorEventHandler_t3211687919  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROREVENTHANDLER_T3211687919_H
#ifndef EVENTHANDLER_T3436254912_H
#define EVENTHANDLER_T3436254912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/EventHandler
struct  EventHandler_t3436254912  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T3436254912_H
#ifndef VUFORIACONFIGURATION_T1763229349_H
#define VUFORIACONFIGURATION_T1763229349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t1763229349  : public ScriptableObject_t2528358522
{
public:
	// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t3697830469 * ___vuforia_6;
	// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t546560202 * ___digitalEyewear_7;
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_t3392414655 * ___videoBackground_8;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_t721467671 * ___deviceTracker_9;
	// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration Vuforia.VuforiaConfiguration::smartTerrain
	SmartTerrainConfiguration_t1514074484 * ___smartTerrain_10;
	// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t1101614731 * ___webcam_11;

public:
	inline static int32_t get_offset_of_vuforia_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___vuforia_6)); }
	inline GenericVuforiaConfiguration_t3697830469 * get_vuforia_6() const { return ___vuforia_6; }
	inline GenericVuforiaConfiguration_t3697830469 ** get_address_of_vuforia_6() { return &___vuforia_6; }
	inline void set_vuforia_6(GenericVuforiaConfiguration_t3697830469 * value)
	{
		___vuforia_6 = value;
		Il2CppCodeGenWriteBarrier((&___vuforia_6), value);
	}

	inline static int32_t get_offset_of_digitalEyewear_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___digitalEyewear_7)); }
	inline DigitalEyewearConfiguration_t546560202 * get_digitalEyewear_7() const { return ___digitalEyewear_7; }
	inline DigitalEyewearConfiguration_t546560202 ** get_address_of_digitalEyewear_7() { return &___digitalEyewear_7; }
	inline void set_digitalEyewear_7(DigitalEyewearConfiguration_t546560202 * value)
	{
		___digitalEyewear_7 = value;
		Il2CppCodeGenWriteBarrier((&___digitalEyewear_7), value);
	}

	inline static int32_t get_offset_of_videoBackground_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___videoBackground_8)); }
	inline VideoBackgroundConfiguration_t3392414655 * get_videoBackground_8() const { return ___videoBackground_8; }
	inline VideoBackgroundConfiguration_t3392414655 ** get_address_of_videoBackground_8() { return &___videoBackground_8; }
	inline void set_videoBackground_8(VideoBackgroundConfiguration_t3392414655 * value)
	{
		___videoBackground_8 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackground_8), value);
	}

	inline static int32_t get_offset_of_deviceTracker_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___deviceTracker_9)); }
	inline DeviceTrackerConfiguration_t721467671 * get_deviceTracker_9() const { return ___deviceTracker_9; }
	inline DeviceTrackerConfiguration_t721467671 ** get_address_of_deviceTracker_9() { return &___deviceTracker_9; }
	inline void set_deviceTracker_9(DeviceTrackerConfiguration_t721467671 * value)
	{
		___deviceTracker_9 = value;
		Il2CppCodeGenWriteBarrier((&___deviceTracker_9), value);
	}

	inline static int32_t get_offset_of_smartTerrain_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___smartTerrain_10)); }
	inline SmartTerrainConfiguration_t1514074484 * get_smartTerrain_10() const { return ___smartTerrain_10; }
	inline SmartTerrainConfiguration_t1514074484 ** get_address_of_smartTerrain_10() { return &___smartTerrain_10; }
	inline void set_smartTerrain_10(SmartTerrainConfiguration_t1514074484 * value)
	{
		___smartTerrain_10 = value;
		Il2CppCodeGenWriteBarrier((&___smartTerrain_10), value);
	}

	inline static int32_t get_offset_of_webcam_11() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___webcam_11)); }
	inline WebCamConfiguration_t1101614731 * get_webcam_11() const { return ___webcam_11; }
	inline WebCamConfiguration_t1101614731 ** get_address_of_webcam_11() { return &___webcam_11; }
	inline void set_webcam_11(WebCamConfiguration_t1101614731 * value)
	{
		___webcam_11 = value;
		Il2CppCodeGenWriteBarrier((&___webcam_11), value);
	}
};

struct VuforiaConfiguration_t1763229349_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t1763229349 * ___mInstance_4;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_5;

public:
	inline static int32_t get_offset_of_mInstance_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mInstance_4)); }
	inline VuforiaConfiguration_t1763229349 * get_mInstance_4() const { return ___mInstance_4; }
	inline VuforiaConfiguration_t1763229349 ** get_address_of_mInstance_4() { return &___mInstance_4; }
	inline void set_mInstance_4(VuforiaConfiguration_t1763229349 * value)
	{
		___mInstance_4 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_4), value);
	}

	inline static int32_t get_offset_of_mPadlock_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mPadlock_5)); }
	inline RuntimeObject * get_mPadlock_5() const { return ___mPadlock_5; }
	inline RuntimeObject ** get_address_of_mPadlock_5() { return &___mPadlock_5; }
	inline void set_mPadlock_5(RuntimeObject * value)
	{
		___mPadlock_5 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIACONFIGURATION_T1763229349_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
#ifndef LINERENDERER_T3154350270_H
#define LINERENDERER_T3154350270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LineRenderer
struct  LineRenderer_t3154350270  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINERENDERER_T3154350270_H
#ifndef MESHRENDERER_T587009260_H
#define MESHRENDERER_T587009260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t587009260  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T587009260_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef VIDEOPLAYER_T1683042537_H
#define VIDEOPLAYER_T1683042537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer
struct  VideoPlayer_t1683042537  : public Behaviour_t1437897464
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t3436254912 * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t3436254912 * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t3436254912 * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t3436254912 * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t3211687919 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t3436254912 * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t445758600 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t3848515759 * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___prepareCompleted_4)); }
	inline EventHandler_t3436254912 * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t3436254912 ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t3436254912 * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((&___prepareCompleted_4), value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___loopPointReached_5)); }
	inline EventHandler_t3436254912 * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t3436254912 ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t3436254912 * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((&___loopPointReached_5), value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___started_6)); }
	inline EventHandler_t3436254912 * get_started_6() const { return ___started_6; }
	inline EventHandler_t3436254912 ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t3436254912 * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((&___started_6), value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___frameDropped_7)); }
	inline EventHandler_t3436254912 * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t3436254912 ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t3436254912 * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((&___frameDropped_7), value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___errorReceived_8)); }
	inline ErrorEventHandler_t3211687919 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_t3211687919 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_t3211687919 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((&___errorReceived_8), value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___seekCompleted_9)); }
	inline EventHandler_t3436254912 * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t3436254912 ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t3436254912 * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((&___seekCompleted_9), value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_t445758600 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_t445758600 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_t445758600 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((&___clockResyncOccurred_10), value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___frameReady_11)); }
	inline FrameReadyEventHandler_t3848515759 * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t3848515759 ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t3848515759 * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((&___frameReady_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOPLAYER_T1683042537_H
#ifndef CAMERASETTINGS_T3152619780_H
#define CAMERASETTINGS_T3152619780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraSettings
struct  CameraSettings_t3152619780  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean CameraSettings::mVuforiaStarted
	bool ___mVuforiaStarted_4;
	// System.Boolean CameraSettings::mAutofocusEnabled
	bool ___mAutofocusEnabled_5;
	// System.Boolean CameraSettings::mFlashTorchEnabled
	bool ___mFlashTorchEnabled_6;

public:
	inline static int32_t get_offset_of_mVuforiaStarted_4() { return static_cast<int32_t>(offsetof(CameraSettings_t3152619780, ___mVuforiaStarted_4)); }
	inline bool get_mVuforiaStarted_4() const { return ___mVuforiaStarted_4; }
	inline bool* get_address_of_mVuforiaStarted_4() { return &___mVuforiaStarted_4; }
	inline void set_mVuforiaStarted_4(bool value)
	{
		___mVuforiaStarted_4 = value;
	}

	inline static int32_t get_offset_of_mAutofocusEnabled_5() { return static_cast<int32_t>(offsetof(CameraSettings_t3152619780, ___mAutofocusEnabled_5)); }
	inline bool get_mAutofocusEnabled_5() const { return ___mAutofocusEnabled_5; }
	inline bool* get_address_of_mAutofocusEnabled_5() { return &___mAutofocusEnabled_5; }
	inline void set_mAutofocusEnabled_5(bool value)
	{
		___mAutofocusEnabled_5 = value;
	}

	inline static int32_t get_offset_of_mFlashTorchEnabled_6() { return static_cast<int32_t>(offsetof(CameraSettings_t3152619780, ___mFlashTorchEnabled_6)); }
	inline bool get_mFlashTorchEnabled_6() const { return ___mFlashTorchEnabled_6; }
	inline bool* get_address_of_mFlashTorchEnabled_6() { return &___mFlashTorchEnabled_6; }
	inline void set_mFlashTorchEnabled_6(bool value)
	{
		___mFlashTorchEnabled_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERASETTINGS_T3152619780_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#define DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1588957063  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_4;
	// Vuforia.TrackableBehaviour/Status DefaultTrackableEventHandler::m_PreviousStatus
	int32_t ___m_PreviousStatus_5;
	// Vuforia.TrackableBehaviour/Status DefaultTrackableEventHandler::m_NewStatus
	int32_t ___m_NewStatus_6;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_4() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___mTrackableBehaviour_4)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_4() const { return ___mTrackableBehaviour_4; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_4() { return &___mTrackableBehaviour_4; }
	inline void set_mTrackableBehaviour_4(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_4), value);
	}

	inline static int32_t get_offset_of_m_PreviousStatus_5() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___m_PreviousStatus_5)); }
	inline int32_t get_m_PreviousStatus_5() const { return ___m_PreviousStatus_5; }
	inline int32_t* get_address_of_m_PreviousStatus_5() { return &___m_PreviousStatus_5; }
	inline void set_m_PreviousStatus_5(int32_t value)
	{
		___m_PreviousStatus_5 = value;
	}

	inline static int32_t get_offset_of_m_NewStatus_6() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___m_NewStatus_6)); }
	inline int32_t get_m_NewStatus_6() const { return ___m_NewStatus_6; }
	inline int32_t* get_address_of_m_NewStatus_6() { return &___m_NewStatus_6; }
	inline void set_m_NewStatus_6(int32_t value)
	{
		___m_NewStatus_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifndef FRAMEQUALITYMETER_T3206426345_H
#define FRAMEQUALITYMETER_T3206426345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FrameQualityMeter
struct  FrameQualityMeter_t3206426345  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image[] FrameQualityMeter::LowMedHigh
	ImageU5BU5D_t2439009922* ___LowMedHigh_4;

public:
	inline static int32_t get_offset_of_LowMedHigh_4() { return static_cast<int32_t>(offsetof(FrameQualityMeter_t3206426345, ___LowMedHigh_4)); }
	inline ImageU5BU5D_t2439009922* get_LowMedHigh_4() const { return ___LowMedHigh_4; }
	inline ImageU5BU5D_t2439009922** get_address_of_LowMedHigh_4() { return &___LowMedHigh_4; }
	inline void set_LowMedHigh_4(ImageU5BU5D_t2439009922* value)
	{
		___LowMedHigh_4 = value;
		Il2CppCodeGenWriteBarrier((&___LowMedHigh_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEQUALITYMETER_T3206426345_H
#ifndef MENUOPTIONS_T1951716431_H
#define MENUOPTIONS_T1951716431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuOptions
struct  MenuOptions_t1951716431  : public MonoBehaviour_t3962482529
{
public:
	// CameraSettings MenuOptions::m_CameraSettings
	CameraSettings_t3152619780 * ___m_CameraSettings_4;
	// TrackableSettings MenuOptions::m_TrackableSettings
	TrackableSettings_t2862243993 * ___m_TrackableSettings_5;
	// UnityEngine.UI.Toggle MenuOptions::m_DeviceTrackerToggle
	Toggle_t2735377061 * ___m_DeviceTrackerToggle_6;
	// UnityEngine.UI.Toggle MenuOptions::m_AutofocusToggle
	Toggle_t2735377061 * ___m_AutofocusToggle_7;
	// UnityEngine.UI.Toggle MenuOptions::m_FlashToggle
	Toggle_t2735377061 * ___m_FlashToggle_8;
	// UnityEngine.Canvas MenuOptions::m_OptionsMenuCanvas
	Canvas_t3310196443 * ___m_OptionsMenuCanvas_9;
	// OptionsConfig MenuOptions::m_OptionsConfig
	OptionsConfig_t900326454 * ___m_OptionsConfig_10;
	// System.Boolean MenuOptions::<IsDisplayed>k__BackingField
	bool ___U3CIsDisplayedU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_m_CameraSettings_4() { return static_cast<int32_t>(offsetof(MenuOptions_t1951716431, ___m_CameraSettings_4)); }
	inline CameraSettings_t3152619780 * get_m_CameraSettings_4() const { return ___m_CameraSettings_4; }
	inline CameraSettings_t3152619780 ** get_address_of_m_CameraSettings_4() { return &___m_CameraSettings_4; }
	inline void set_m_CameraSettings_4(CameraSettings_t3152619780 * value)
	{
		___m_CameraSettings_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_CameraSettings_4), value);
	}

	inline static int32_t get_offset_of_m_TrackableSettings_5() { return static_cast<int32_t>(offsetof(MenuOptions_t1951716431, ___m_TrackableSettings_5)); }
	inline TrackableSettings_t2862243993 * get_m_TrackableSettings_5() const { return ___m_TrackableSettings_5; }
	inline TrackableSettings_t2862243993 ** get_address_of_m_TrackableSettings_5() { return &___m_TrackableSettings_5; }
	inline void set_m_TrackableSettings_5(TrackableSettings_t2862243993 * value)
	{
		___m_TrackableSettings_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackableSettings_5), value);
	}

	inline static int32_t get_offset_of_m_DeviceTrackerToggle_6() { return static_cast<int32_t>(offsetof(MenuOptions_t1951716431, ___m_DeviceTrackerToggle_6)); }
	inline Toggle_t2735377061 * get_m_DeviceTrackerToggle_6() const { return ___m_DeviceTrackerToggle_6; }
	inline Toggle_t2735377061 ** get_address_of_m_DeviceTrackerToggle_6() { return &___m_DeviceTrackerToggle_6; }
	inline void set_m_DeviceTrackerToggle_6(Toggle_t2735377061 * value)
	{
		___m_DeviceTrackerToggle_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_DeviceTrackerToggle_6), value);
	}

	inline static int32_t get_offset_of_m_AutofocusToggle_7() { return static_cast<int32_t>(offsetof(MenuOptions_t1951716431, ___m_AutofocusToggle_7)); }
	inline Toggle_t2735377061 * get_m_AutofocusToggle_7() const { return ___m_AutofocusToggle_7; }
	inline Toggle_t2735377061 ** get_address_of_m_AutofocusToggle_7() { return &___m_AutofocusToggle_7; }
	inline void set_m_AutofocusToggle_7(Toggle_t2735377061 * value)
	{
		___m_AutofocusToggle_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AutofocusToggle_7), value);
	}

	inline static int32_t get_offset_of_m_FlashToggle_8() { return static_cast<int32_t>(offsetof(MenuOptions_t1951716431, ___m_FlashToggle_8)); }
	inline Toggle_t2735377061 * get_m_FlashToggle_8() const { return ___m_FlashToggle_8; }
	inline Toggle_t2735377061 ** get_address_of_m_FlashToggle_8() { return &___m_FlashToggle_8; }
	inline void set_m_FlashToggle_8(Toggle_t2735377061 * value)
	{
		___m_FlashToggle_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_FlashToggle_8), value);
	}

	inline static int32_t get_offset_of_m_OptionsMenuCanvas_9() { return static_cast<int32_t>(offsetof(MenuOptions_t1951716431, ___m_OptionsMenuCanvas_9)); }
	inline Canvas_t3310196443 * get_m_OptionsMenuCanvas_9() const { return ___m_OptionsMenuCanvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_OptionsMenuCanvas_9() { return &___m_OptionsMenuCanvas_9; }
	inline void set_m_OptionsMenuCanvas_9(Canvas_t3310196443 * value)
	{
		___m_OptionsMenuCanvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_OptionsMenuCanvas_9), value);
	}

	inline static int32_t get_offset_of_m_OptionsConfig_10() { return static_cast<int32_t>(offsetof(MenuOptions_t1951716431, ___m_OptionsConfig_10)); }
	inline OptionsConfig_t900326454 * get_m_OptionsConfig_10() const { return ___m_OptionsConfig_10; }
	inline OptionsConfig_t900326454 ** get_address_of_m_OptionsConfig_10() { return &___m_OptionsConfig_10; }
	inline void set_m_OptionsConfig_10(OptionsConfig_t900326454 * value)
	{
		___m_OptionsConfig_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_OptionsConfig_10), value);
	}

	inline static int32_t get_offset_of_U3CIsDisplayedU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(MenuOptions_t1951716431, ___U3CIsDisplayedU3Ek__BackingField_11)); }
	inline bool get_U3CIsDisplayedU3Ek__BackingField_11() const { return ___U3CIsDisplayedU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CIsDisplayedU3Ek__BackingField_11() { return &___U3CIsDisplayedU3Ek__BackingField_11; }
	inline void set_U3CIsDisplayedU3Ek__BackingField_11(bool value)
	{
		___U3CIsDisplayedU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUOPTIONS_T1951716431_H
#ifndef PANELSHOWHIDE_T3128188850_H
#define PANELSHOWHIDE_T3128188850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelShowHide
struct  PanelShowHide_t3128188850  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animator PanelShowHide::m_Animator
	Animator_t434523843 * ___m_Animator_4;
	// UnityEngine.UI.Image PanelShowHide::m_Image
	Image_t2670269651 * ___m_Image_5;
	// UnityEngine.UI.Text PanelShowHide::m_Info
	Text_t1901882714 * ___m_Info_6;

public:
	inline static int32_t get_offset_of_m_Animator_4() { return static_cast<int32_t>(offsetof(PanelShowHide_t3128188850, ___m_Animator_4)); }
	inline Animator_t434523843 * get_m_Animator_4() const { return ___m_Animator_4; }
	inline Animator_t434523843 ** get_address_of_m_Animator_4() { return &___m_Animator_4; }
	inline void set_m_Animator_4(Animator_t434523843 * value)
	{
		___m_Animator_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Animator_4), value);
	}

	inline static int32_t get_offset_of_m_Image_5() { return static_cast<int32_t>(offsetof(PanelShowHide_t3128188850, ___m_Image_5)); }
	inline Image_t2670269651 * get_m_Image_5() const { return ___m_Image_5; }
	inline Image_t2670269651 ** get_address_of_m_Image_5() { return &___m_Image_5; }
	inline void set_m_Image_5(Image_t2670269651 * value)
	{
		___m_Image_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_5), value);
	}

	inline static int32_t get_offset_of_m_Info_6() { return static_cast<int32_t>(offsetof(PanelShowHide_t3128188850, ___m_Info_6)); }
	inline Text_t1901882714 * get_m_Info_6() const { return ___m_Info_6; }
	inline Text_t1901882714 ** get_address_of_m_Info_6() { return &___m_Info_6; }
	inline void set_m_Info_6(Text_t1901882714 * value)
	{
		___m_Info_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Info_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PANELSHOWHIDE_T3128188850_H
#ifndef QUALITYDIALOG_T529473262_H
#define QUALITYDIALOG_T529473262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QualityDialog
struct  QualityDialog_t529473262  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUALITYDIALOG_T529473262_H
#ifndef SAMPLESNAVIGATIONHANDLER_T3426315339_H
#define SAMPLESNAVIGATIONHANDLER_T3426315339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SamplesNavigationHandler
struct  SamplesNavigationHandler_t3426315339  : public MonoBehaviour_t3962482529
{
public:
	// System.String SamplesNavigationHandler::currentSceneName
	String_t* ___currentSceneName_4;

public:
	inline static int32_t get_offset_of_currentSceneName_4() { return static_cast<int32_t>(offsetof(SamplesNavigationHandler_t3426315339, ___currentSceneName_4)); }
	inline String_t* get_currentSceneName_4() const { return ___currentSceneName_4; }
	inline String_t** get_address_of_currentSceneName_4() { return &___currentSceneName_4; }
	inline void set_currentSceneName_4(String_t* value)
	{
		___currentSceneName_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentSceneName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLESNAVIGATIONHANDLER_T3426315339_H
#ifndef SCENEORIENTATION_T160940122_H
#define SCENEORIENTATION_T160940122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneOrientation
struct  SceneOrientation_t160940122  : public MonoBehaviour_t3962482529
{
public:
	// SceneOrientation/Orientation SceneOrientation::sceneOrientation
	int32_t ___sceneOrientation_4;

public:
	inline static int32_t get_offset_of_sceneOrientation_4() { return static_cast<int32_t>(offsetof(SceneOrientation_t160940122, ___sceneOrientation_4)); }
	inline int32_t get_sceneOrientation_4() const { return ___sceneOrientation_4; }
	inline int32_t* get_address_of_sceneOrientation_4() { return &___sceneOrientation_4; }
	inline void set_sceneOrientation_4(int32_t value)
	{
		___sceneOrientation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEORIENTATION_T160940122_H
#ifndef SCENESWITCHERS_T1869753645_H
#define SCENESWITCHERS_T1869753645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneSwitchers
struct  SceneSwitchers_t1869753645  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENESWITCHERS_T1869753645_H
#ifndef TAPHANDLER_T334234343_H
#define TAPHANDLER_T334234343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TapHandler
struct  TapHandler_t334234343  : public MonoBehaviour_t3962482529
{
public:
	// System.Single TapHandler::mTimeSinceLastTap
	float ___mTimeSinceLastTap_5;
	// MenuOptions TapHandler::m_MenuOptions
	MenuOptions_t1951716431 * ___m_MenuOptions_6;
	// CameraSettings TapHandler::m_CameraSettings
	CameraSettings_t3152619780 * ___m_CameraSettings_7;
	// System.Int32 TapHandler::mTapCount
	int32_t ___mTapCount_8;

public:
	inline static int32_t get_offset_of_mTimeSinceLastTap_5() { return static_cast<int32_t>(offsetof(TapHandler_t334234343, ___mTimeSinceLastTap_5)); }
	inline float get_mTimeSinceLastTap_5() const { return ___mTimeSinceLastTap_5; }
	inline float* get_address_of_mTimeSinceLastTap_5() { return &___mTimeSinceLastTap_5; }
	inline void set_mTimeSinceLastTap_5(float value)
	{
		___mTimeSinceLastTap_5 = value;
	}

	inline static int32_t get_offset_of_m_MenuOptions_6() { return static_cast<int32_t>(offsetof(TapHandler_t334234343, ___m_MenuOptions_6)); }
	inline MenuOptions_t1951716431 * get_m_MenuOptions_6() const { return ___m_MenuOptions_6; }
	inline MenuOptions_t1951716431 ** get_address_of_m_MenuOptions_6() { return &___m_MenuOptions_6; }
	inline void set_m_MenuOptions_6(MenuOptions_t1951716431 * value)
	{
		___m_MenuOptions_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_MenuOptions_6), value);
	}

	inline static int32_t get_offset_of_m_CameraSettings_7() { return static_cast<int32_t>(offsetof(TapHandler_t334234343, ___m_CameraSettings_7)); }
	inline CameraSettings_t3152619780 * get_m_CameraSettings_7() const { return ___m_CameraSettings_7; }
	inline CameraSettings_t3152619780 ** get_address_of_m_CameraSettings_7() { return &___m_CameraSettings_7; }
	inline void set_m_CameraSettings_7(CameraSettings_t3152619780 * value)
	{
		___m_CameraSettings_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_CameraSettings_7), value);
	}

	inline static int32_t get_offset_of_mTapCount_8() { return static_cast<int32_t>(offsetof(TapHandler_t334234343, ___mTapCount_8)); }
	inline int32_t get_mTapCount_8() const { return ___mTapCount_8; }
	inline int32_t* get_address_of_mTapCount_8() { return &___mTapCount_8; }
	inline void set_mTapCount_8(int32_t value)
	{
		___mTapCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAPHANDLER_T334234343_H
#ifndef TOUCHHANDLER_T3441426771_H
#define TOUCHHANDLER_T3441426771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchHandler
struct  TouchHandler_t3441426771  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform TouchHandler::m_AugmentationObject
	Transform_t3600365921 * ___m_AugmentationObject_4;
	// System.Boolean TouchHandler::enableRotation
	bool ___enableRotation_5;
	// System.Boolean TouchHandler::enablePinchScaling
	bool ___enablePinchScaling_6;
	// UnityEngine.Touch[] TouchHandler::touches
	TouchU5BU5D_t1849554061* ___touches_9;
	// System.Boolean TouchHandler::isFirstFrameWithTwoTouches
	bool ___isFirstFrameWithTwoTouches_11;
	// System.Single TouchHandler::cachedTouchAngle
	float ___cachedTouchAngle_12;
	// System.Single TouchHandler::cachedTouchDistance
	float ___cachedTouchDistance_13;
	// System.Single TouchHandler::cachedAugmentationScale
	float ___cachedAugmentationScale_14;
	// UnityEngine.Vector3 TouchHandler::cachedAugmentationRotation
	Vector3_t3722313464  ___cachedAugmentationRotation_15;

public:
	inline static int32_t get_offset_of_m_AugmentationObject_4() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___m_AugmentationObject_4)); }
	inline Transform_t3600365921 * get_m_AugmentationObject_4() const { return ___m_AugmentationObject_4; }
	inline Transform_t3600365921 ** get_address_of_m_AugmentationObject_4() { return &___m_AugmentationObject_4; }
	inline void set_m_AugmentationObject_4(Transform_t3600365921 * value)
	{
		___m_AugmentationObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_AugmentationObject_4), value);
	}

	inline static int32_t get_offset_of_enableRotation_5() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___enableRotation_5)); }
	inline bool get_enableRotation_5() const { return ___enableRotation_5; }
	inline bool* get_address_of_enableRotation_5() { return &___enableRotation_5; }
	inline void set_enableRotation_5(bool value)
	{
		___enableRotation_5 = value;
	}

	inline static int32_t get_offset_of_enablePinchScaling_6() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___enablePinchScaling_6)); }
	inline bool get_enablePinchScaling_6() const { return ___enablePinchScaling_6; }
	inline bool* get_address_of_enablePinchScaling_6() { return &___enablePinchScaling_6; }
	inline void set_enablePinchScaling_6(bool value)
	{
		___enablePinchScaling_6 = value;
	}

	inline static int32_t get_offset_of_touches_9() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___touches_9)); }
	inline TouchU5BU5D_t1849554061* get_touches_9() const { return ___touches_9; }
	inline TouchU5BU5D_t1849554061** get_address_of_touches_9() { return &___touches_9; }
	inline void set_touches_9(TouchU5BU5D_t1849554061* value)
	{
		___touches_9 = value;
		Il2CppCodeGenWriteBarrier((&___touches_9), value);
	}

	inline static int32_t get_offset_of_isFirstFrameWithTwoTouches_11() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___isFirstFrameWithTwoTouches_11)); }
	inline bool get_isFirstFrameWithTwoTouches_11() const { return ___isFirstFrameWithTwoTouches_11; }
	inline bool* get_address_of_isFirstFrameWithTwoTouches_11() { return &___isFirstFrameWithTwoTouches_11; }
	inline void set_isFirstFrameWithTwoTouches_11(bool value)
	{
		___isFirstFrameWithTwoTouches_11 = value;
	}

	inline static int32_t get_offset_of_cachedTouchAngle_12() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___cachedTouchAngle_12)); }
	inline float get_cachedTouchAngle_12() const { return ___cachedTouchAngle_12; }
	inline float* get_address_of_cachedTouchAngle_12() { return &___cachedTouchAngle_12; }
	inline void set_cachedTouchAngle_12(float value)
	{
		___cachedTouchAngle_12 = value;
	}

	inline static int32_t get_offset_of_cachedTouchDistance_13() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___cachedTouchDistance_13)); }
	inline float get_cachedTouchDistance_13() const { return ___cachedTouchDistance_13; }
	inline float* get_address_of_cachedTouchDistance_13() { return &___cachedTouchDistance_13; }
	inline void set_cachedTouchDistance_13(float value)
	{
		___cachedTouchDistance_13 = value;
	}

	inline static int32_t get_offset_of_cachedAugmentationScale_14() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___cachedAugmentationScale_14)); }
	inline float get_cachedAugmentationScale_14() const { return ___cachedAugmentationScale_14; }
	inline float* get_address_of_cachedAugmentationScale_14() { return &___cachedAugmentationScale_14; }
	inline void set_cachedAugmentationScale_14(float value)
	{
		___cachedAugmentationScale_14 = value;
	}

	inline static int32_t get_offset_of_cachedAugmentationRotation_15() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___cachedAugmentationRotation_15)); }
	inline Vector3_t3722313464  get_cachedAugmentationRotation_15() const { return ___cachedAugmentationRotation_15; }
	inline Vector3_t3722313464 * get_address_of_cachedAugmentationRotation_15() { return &___cachedAugmentationRotation_15; }
	inline void set_cachedAugmentationRotation_15(Vector3_t3722313464  value)
	{
		___cachedAugmentationRotation_15 = value;
	}
};

struct TouchHandler_t3441426771_StaticFields
{
public:
	// System.Int32 TouchHandler::lastTouchCount
	int32_t ___lastTouchCount_10;

public:
	inline static int32_t get_offset_of_lastTouchCount_10() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771_StaticFields, ___lastTouchCount_10)); }
	inline int32_t get_lastTouchCount_10() const { return ___lastTouchCount_10; }
	inline int32_t* get_address_of_lastTouchCount_10() { return &___lastTouchCount_10; }
	inline void set_lastTouchCount_10(int32_t value)
	{
		___lastTouchCount_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHHANDLER_T3441426771_H
#ifndef TRACKABLESETTINGS_T2862243993_H
#define TRACKABLESETTINGS_T2862243993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackableSettings
struct  TrackableSettings_t2862243993  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean TrackableSettings::m_DeviceTrackerEnabled
	bool ___m_DeviceTrackerEnabled_4;
	// Vuforia.FusionProviderType TrackableSettings::m_FusionProviderType
	int32_t ___m_FusionProviderType_5;
	// Vuforia.PositionalDeviceTracker TrackableSettings::m_PositionalDeviceTracker
	PositionalDeviceTracker_t656722001 * ___m_PositionalDeviceTracker_6;

public:
	inline static int32_t get_offset_of_m_DeviceTrackerEnabled_4() { return static_cast<int32_t>(offsetof(TrackableSettings_t2862243993, ___m_DeviceTrackerEnabled_4)); }
	inline bool get_m_DeviceTrackerEnabled_4() const { return ___m_DeviceTrackerEnabled_4; }
	inline bool* get_address_of_m_DeviceTrackerEnabled_4() { return &___m_DeviceTrackerEnabled_4; }
	inline void set_m_DeviceTrackerEnabled_4(bool value)
	{
		___m_DeviceTrackerEnabled_4 = value;
	}

	inline static int32_t get_offset_of_m_FusionProviderType_5() { return static_cast<int32_t>(offsetof(TrackableSettings_t2862243993, ___m_FusionProviderType_5)); }
	inline int32_t get_m_FusionProviderType_5() const { return ___m_FusionProviderType_5; }
	inline int32_t* get_address_of_m_FusionProviderType_5() { return &___m_FusionProviderType_5; }
	inline void set_m_FusionProviderType_5(int32_t value)
	{
		___m_FusionProviderType_5 = value;
	}

	inline static int32_t get_offset_of_m_PositionalDeviceTracker_6() { return static_cast<int32_t>(offsetof(TrackableSettings_t2862243993, ___m_PositionalDeviceTracker_6)); }
	inline PositionalDeviceTracker_t656722001 * get_m_PositionalDeviceTracker_6() const { return ___m_PositionalDeviceTracker_6; }
	inline PositionalDeviceTracker_t656722001 ** get_address_of_m_PositionalDeviceTracker_6() { return &___m_PositionalDeviceTracker_6; }
	inline void set_m_PositionalDeviceTracker_6(PositionalDeviceTracker_t656722001 * value)
	{
		___m_PositionalDeviceTracker_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_PositionalDeviceTracker_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLESETTINGS_T2862243993_H
#ifndef UDTEVENTHANDLER_T2349357857_H
#define UDTEVENTHANDLER_T2349357857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UDTEventHandler
struct  UDTEventHandler_t2349357857  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.ImageTargetBehaviour UDTEventHandler::ImageTargetTemplate
	ImageTargetBehaviour_t2200418350 * ___ImageTargetTemplate_4;
	// Vuforia.UserDefinedTargetBuildingBehaviour UDTEventHandler::m_TargetBuildingBehaviour
	UserDefinedTargetBuildingBehaviour_t4262637471 * ___m_TargetBuildingBehaviour_6;
	// QualityDialog UDTEventHandler::m_QualityDialog
	QualityDialog_t529473262 * ___m_QualityDialog_7;
	// Vuforia.ObjectTracker UDTEventHandler::m_ObjectTracker
	ObjectTracker_t4177997237 * ___m_ObjectTracker_8;
	// FrameQualityMeter UDTEventHandler::m_FrameQualityMeter
	FrameQualityMeter_t3206426345 * ___m_FrameQualityMeter_9;
	// Vuforia.DataSet UDTEventHandler::m_UDT_DataSet
	DataSet_t3286034874 * ___m_UDT_DataSet_10;
	// Vuforia.ImageTargetBuilder/FrameQuality UDTEventHandler::m_FrameQuality
	int32_t ___m_FrameQuality_11;
	// System.Int32 UDTEventHandler::m_TargetCounter
	int32_t ___m_TargetCounter_12;

public:
	inline static int32_t get_offset_of_ImageTargetTemplate_4() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___ImageTargetTemplate_4)); }
	inline ImageTargetBehaviour_t2200418350 * get_ImageTargetTemplate_4() const { return ___ImageTargetTemplate_4; }
	inline ImageTargetBehaviour_t2200418350 ** get_address_of_ImageTargetTemplate_4() { return &___ImageTargetTemplate_4; }
	inline void set_ImageTargetTemplate_4(ImageTargetBehaviour_t2200418350 * value)
	{
		___ImageTargetTemplate_4 = value;
		Il2CppCodeGenWriteBarrier((&___ImageTargetTemplate_4), value);
	}

	inline static int32_t get_offset_of_m_TargetBuildingBehaviour_6() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_TargetBuildingBehaviour_6)); }
	inline UserDefinedTargetBuildingBehaviour_t4262637471 * get_m_TargetBuildingBehaviour_6() const { return ___m_TargetBuildingBehaviour_6; }
	inline UserDefinedTargetBuildingBehaviour_t4262637471 ** get_address_of_m_TargetBuildingBehaviour_6() { return &___m_TargetBuildingBehaviour_6; }
	inline void set_m_TargetBuildingBehaviour_6(UserDefinedTargetBuildingBehaviour_t4262637471 * value)
	{
		___m_TargetBuildingBehaviour_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetBuildingBehaviour_6), value);
	}

	inline static int32_t get_offset_of_m_QualityDialog_7() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_QualityDialog_7)); }
	inline QualityDialog_t529473262 * get_m_QualityDialog_7() const { return ___m_QualityDialog_7; }
	inline QualityDialog_t529473262 ** get_address_of_m_QualityDialog_7() { return &___m_QualityDialog_7; }
	inline void set_m_QualityDialog_7(QualityDialog_t529473262 * value)
	{
		___m_QualityDialog_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_QualityDialog_7), value);
	}

	inline static int32_t get_offset_of_m_ObjectTracker_8() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_ObjectTracker_8)); }
	inline ObjectTracker_t4177997237 * get_m_ObjectTracker_8() const { return ___m_ObjectTracker_8; }
	inline ObjectTracker_t4177997237 ** get_address_of_m_ObjectTracker_8() { return &___m_ObjectTracker_8; }
	inline void set_m_ObjectTracker_8(ObjectTracker_t4177997237 * value)
	{
		___m_ObjectTracker_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectTracker_8), value);
	}

	inline static int32_t get_offset_of_m_FrameQualityMeter_9() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_FrameQualityMeter_9)); }
	inline FrameQualityMeter_t3206426345 * get_m_FrameQualityMeter_9() const { return ___m_FrameQualityMeter_9; }
	inline FrameQualityMeter_t3206426345 ** get_address_of_m_FrameQualityMeter_9() { return &___m_FrameQualityMeter_9; }
	inline void set_m_FrameQualityMeter_9(FrameQualityMeter_t3206426345 * value)
	{
		___m_FrameQualityMeter_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_FrameQualityMeter_9), value);
	}

	inline static int32_t get_offset_of_m_UDT_DataSet_10() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_UDT_DataSet_10)); }
	inline DataSet_t3286034874 * get_m_UDT_DataSet_10() const { return ___m_UDT_DataSet_10; }
	inline DataSet_t3286034874 ** get_address_of_m_UDT_DataSet_10() { return &___m_UDT_DataSet_10; }
	inline void set_m_UDT_DataSet_10(DataSet_t3286034874 * value)
	{
		___m_UDT_DataSet_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_UDT_DataSet_10), value);
	}

	inline static int32_t get_offset_of_m_FrameQuality_11() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_FrameQuality_11)); }
	inline int32_t get_m_FrameQuality_11() const { return ___m_FrameQuality_11; }
	inline int32_t* get_address_of_m_FrameQuality_11() { return &___m_FrameQuality_11; }
	inline void set_m_FrameQuality_11(int32_t value)
	{
		___m_FrameQuality_11 = value;
	}

	inline static int32_t get_offset_of_m_TargetCounter_12() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_TargetCounter_12)); }
	inline int32_t get_m_TargetCounter_12() const { return ___m_TargetCounter_12; }
	inline int32_t* get_address_of_m_TargetCounter_12() { return &___m_TargetCounter_12; }
	inline void set_m_TargetCounter_12(int32_t value)
	{
		___m_TargetCounter_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UDTEVENTHANDLER_T2349357857_H
#ifndef URL_T2492693491_H
#define URL_T2492693491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// URL
struct  URL_t2492693491  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URL_T2492693491_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_4;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_5;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_4)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_5() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_5)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_5() const { return ___ambisonicExtension_5; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_5() { return &___ambisonicExtension_5; }
	inline void set_ambisonicExtension_5(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_5 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef VIDEOCONTROLLER_T2238106033_H
#define VIDEOCONTROLLER_T2238106033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoController
struct  VideoController_t2238106033  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Video.VideoPlayer VideoController::videoPlayer
	VideoPlayer_t1683042537 * ___videoPlayer_4;
	// UnityEngine.UI.Button VideoController::m_PlayButton
	Button_t4055032469 * ___m_PlayButton_5;
	// UnityEngine.RectTransform VideoController::m_ProgressBar
	RectTransform_t3704657025 * ___m_ProgressBar_6;

public:
	inline static int32_t get_offset_of_videoPlayer_4() { return static_cast<int32_t>(offsetof(VideoController_t2238106033, ___videoPlayer_4)); }
	inline VideoPlayer_t1683042537 * get_videoPlayer_4() const { return ___videoPlayer_4; }
	inline VideoPlayer_t1683042537 ** get_address_of_videoPlayer_4() { return &___videoPlayer_4; }
	inline void set_videoPlayer_4(VideoPlayer_t1683042537 * value)
	{
		___videoPlayer_4 = value;
		Il2CppCodeGenWriteBarrier((&___videoPlayer_4), value);
	}

	inline static int32_t get_offset_of_m_PlayButton_5() { return static_cast<int32_t>(offsetof(VideoController_t2238106033, ___m_PlayButton_5)); }
	inline Button_t4055032469 * get_m_PlayButton_5() const { return ___m_PlayButton_5; }
	inline Button_t4055032469 ** get_address_of_m_PlayButton_5() { return &___m_PlayButton_5; }
	inline void set_m_PlayButton_5(Button_t4055032469 * value)
	{
		___m_PlayButton_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayButton_5), value);
	}

	inline static int32_t get_offset_of_m_ProgressBar_6() { return static_cast<int32_t>(offsetof(VideoController_t2238106033, ___m_ProgressBar_6)); }
	inline RectTransform_t3704657025 * get_m_ProgressBar_6() const { return ___m_ProgressBar_6; }
	inline RectTransform_t3704657025 ** get_address_of_m_ProgressBar_6() { return &___m_ProgressBar_6; }
	inline void set_m_ProgressBar_6(RectTransform_t3704657025 * value)
	{
		___m_ProgressBar_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProgressBar_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCONTROLLER_T2238106033_H
#ifndef VIRTUALBUTTONEVENTHANDLER_T1548763206_H
#define VIRTUALBUTTONEVENTHANDLER_T1548763206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirtualButtonEventHandler
struct  VirtualButtonEventHandler_t1548763206  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material VirtualButtonEventHandler::m_VirtualButtonDefault
	Material_t340375123 * ___m_VirtualButtonDefault_4;
	// UnityEngine.Material VirtualButtonEventHandler::m_VirtualButtonPressed
	Material_t340375123 * ___m_VirtualButtonPressed_5;
	// System.Single VirtualButtonEventHandler::m_ButtonReleaseTimeDelay
	float ___m_ButtonReleaseTimeDelay_6;
	// Vuforia.VirtualButtonBehaviour[] VirtualButtonEventHandler::virtualButtonBehaviours
	VirtualButtonBehaviourU5BU5D_t2153394082* ___virtualButtonBehaviours_7;

public:
	inline static int32_t get_offset_of_m_VirtualButtonDefault_4() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t1548763206, ___m_VirtualButtonDefault_4)); }
	inline Material_t340375123 * get_m_VirtualButtonDefault_4() const { return ___m_VirtualButtonDefault_4; }
	inline Material_t340375123 ** get_address_of_m_VirtualButtonDefault_4() { return &___m_VirtualButtonDefault_4; }
	inline void set_m_VirtualButtonDefault_4(Material_t340375123 * value)
	{
		___m_VirtualButtonDefault_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_VirtualButtonDefault_4), value);
	}

	inline static int32_t get_offset_of_m_VirtualButtonPressed_5() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t1548763206, ___m_VirtualButtonPressed_5)); }
	inline Material_t340375123 * get_m_VirtualButtonPressed_5() const { return ___m_VirtualButtonPressed_5; }
	inline Material_t340375123 ** get_address_of_m_VirtualButtonPressed_5() { return &___m_VirtualButtonPressed_5; }
	inline void set_m_VirtualButtonPressed_5(Material_t340375123 * value)
	{
		___m_VirtualButtonPressed_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_VirtualButtonPressed_5), value);
	}

	inline static int32_t get_offset_of_m_ButtonReleaseTimeDelay_6() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t1548763206, ___m_ButtonReleaseTimeDelay_6)); }
	inline float get_m_ButtonReleaseTimeDelay_6() const { return ___m_ButtonReleaseTimeDelay_6; }
	inline float* get_address_of_m_ButtonReleaseTimeDelay_6() { return &___m_ButtonReleaseTimeDelay_6; }
	inline void set_m_ButtonReleaseTimeDelay_6(float value)
	{
		___m_ButtonReleaseTimeDelay_6 = value;
	}

	inline static int32_t get_offset_of_virtualButtonBehaviours_7() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t1548763206, ___virtualButtonBehaviours_7)); }
	inline VirtualButtonBehaviourU5BU5D_t2153394082* get_virtualButtonBehaviours_7() const { return ___virtualButtonBehaviours_7; }
	inline VirtualButtonBehaviourU5BU5D_t2153394082** get_address_of_virtualButtonBehaviours_7() { return &___virtualButtonBehaviours_7; }
	inline void set_virtualButtonBehaviours_7(VirtualButtonBehaviourU5BU5D_t2153394082* value)
	{
		___virtualButtonBehaviours_7 = value;
		Il2CppCodeGenWriteBarrier((&___virtualButtonBehaviours_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTONEVENTHANDLER_T1548763206_H
#ifndef VUMARKHANDLER_T1415762101_H
#define VUMARKHANDLER_T1415762101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuMarkHandler
struct  VuMarkHandler_t1415762101  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.FusionProviderType VuMarkHandler::fusionProviderType
	int32_t ___fusionProviderType_5;
	// Vuforia.VuMarkManager VuMarkHandler::vumarkManager
	VuMarkManager_t2982459596 * ___vumarkManager_6;
	// UnityEngine.LineRenderer VuMarkHandler::lineRenderer
	LineRenderer_t3154350270 * ___lineRenderer_7;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D> VuMarkHandler::vumarkInstanceTextures
	Dictionary_2_t3625702484 * ___vumarkInstanceTextures_8;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> VuMarkHandler::vumarkAugmentationObjects
	Dictionary_2_t898892918 * ___vumarkAugmentationObjects_9;
	// PanelShowHide VuMarkHandler::nearestVuMarkScreenPanel
	PanelShowHide_t3128188850 * ___nearestVuMarkScreenPanel_10;
	// Vuforia.VuMarkTarget VuMarkHandler::closestVuMark
	RuntimeObject* ___closestVuMark_11;
	// Vuforia.VuMarkTarget VuMarkHandler::currentVuMark
	RuntimeObject* ___currentVuMark_12;
	// VuMarkHandler/AugmentationObject[] VuMarkHandler::augmentationObjects
	AugmentationObjectU5BU5D_t2045593289* ___augmentationObjects_13;

public:
	inline static int32_t get_offset_of_fusionProviderType_5() { return static_cast<int32_t>(offsetof(VuMarkHandler_t1415762101, ___fusionProviderType_5)); }
	inline int32_t get_fusionProviderType_5() const { return ___fusionProviderType_5; }
	inline int32_t* get_address_of_fusionProviderType_5() { return &___fusionProviderType_5; }
	inline void set_fusionProviderType_5(int32_t value)
	{
		___fusionProviderType_5 = value;
	}

	inline static int32_t get_offset_of_vumarkManager_6() { return static_cast<int32_t>(offsetof(VuMarkHandler_t1415762101, ___vumarkManager_6)); }
	inline VuMarkManager_t2982459596 * get_vumarkManager_6() const { return ___vumarkManager_6; }
	inline VuMarkManager_t2982459596 ** get_address_of_vumarkManager_6() { return &___vumarkManager_6; }
	inline void set_vumarkManager_6(VuMarkManager_t2982459596 * value)
	{
		___vumarkManager_6 = value;
		Il2CppCodeGenWriteBarrier((&___vumarkManager_6), value);
	}

	inline static int32_t get_offset_of_lineRenderer_7() { return static_cast<int32_t>(offsetof(VuMarkHandler_t1415762101, ___lineRenderer_7)); }
	inline LineRenderer_t3154350270 * get_lineRenderer_7() const { return ___lineRenderer_7; }
	inline LineRenderer_t3154350270 ** get_address_of_lineRenderer_7() { return &___lineRenderer_7; }
	inline void set_lineRenderer_7(LineRenderer_t3154350270 * value)
	{
		___lineRenderer_7 = value;
		Il2CppCodeGenWriteBarrier((&___lineRenderer_7), value);
	}

	inline static int32_t get_offset_of_vumarkInstanceTextures_8() { return static_cast<int32_t>(offsetof(VuMarkHandler_t1415762101, ___vumarkInstanceTextures_8)); }
	inline Dictionary_2_t3625702484 * get_vumarkInstanceTextures_8() const { return ___vumarkInstanceTextures_8; }
	inline Dictionary_2_t3625702484 ** get_address_of_vumarkInstanceTextures_8() { return &___vumarkInstanceTextures_8; }
	inline void set_vumarkInstanceTextures_8(Dictionary_2_t3625702484 * value)
	{
		___vumarkInstanceTextures_8 = value;
		Il2CppCodeGenWriteBarrier((&___vumarkInstanceTextures_8), value);
	}

	inline static int32_t get_offset_of_vumarkAugmentationObjects_9() { return static_cast<int32_t>(offsetof(VuMarkHandler_t1415762101, ___vumarkAugmentationObjects_9)); }
	inline Dictionary_2_t898892918 * get_vumarkAugmentationObjects_9() const { return ___vumarkAugmentationObjects_9; }
	inline Dictionary_2_t898892918 ** get_address_of_vumarkAugmentationObjects_9() { return &___vumarkAugmentationObjects_9; }
	inline void set_vumarkAugmentationObjects_9(Dictionary_2_t898892918 * value)
	{
		___vumarkAugmentationObjects_9 = value;
		Il2CppCodeGenWriteBarrier((&___vumarkAugmentationObjects_9), value);
	}

	inline static int32_t get_offset_of_nearestVuMarkScreenPanel_10() { return static_cast<int32_t>(offsetof(VuMarkHandler_t1415762101, ___nearestVuMarkScreenPanel_10)); }
	inline PanelShowHide_t3128188850 * get_nearestVuMarkScreenPanel_10() const { return ___nearestVuMarkScreenPanel_10; }
	inline PanelShowHide_t3128188850 ** get_address_of_nearestVuMarkScreenPanel_10() { return &___nearestVuMarkScreenPanel_10; }
	inline void set_nearestVuMarkScreenPanel_10(PanelShowHide_t3128188850 * value)
	{
		___nearestVuMarkScreenPanel_10 = value;
		Il2CppCodeGenWriteBarrier((&___nearestVuMarkScreenPanel_10), value);
	}

	inline static int32_t get_offset_of_closestVuMark_11() { return static_cast<int32_t>(offsetof(VuMarkHandler_t1415762101, ___closestVuMark_11)); }
	inline RuntimeObject* get_closestVuMark_11() const { return ___closestVuMark_11; }
	inline RuntimeObject** get_address_of_closestVuMark_11() { return &___closestVuMark_11; }
	inline void set_closestVuMark_11(RuntimeObject* value)
	{
		___closestVuMark_11 = value;
		Il2CppCodeGenWriteBarrier((&___closestVuMark_11), value);
	}

	inline static int32_t get_offset_of_currentVuMark_12() { return static_cast<int32_t>(offsetof(VuMarkHandler_t1415762101, ___currentVuMark_12)); }
	inline RuntimeObject* get_currentVuMark_12() const { return ___currentVuMark_12; }
	inline RuntimeObject** get_address_of_currentVuMark_12() { return &___currentVuMark_12; }
	inline void set_currentVuMark_12(RuntimeObject* value)
	{
		___currentVuMark_12 = value;
		Il2CppCodeGenWriteBarrier((&___currentVuMark_12), value);
	}

	inline static int32_t get_offset_of_augmentationObjects_13() { return static_cast<int32_t>(offsetof(VuMarkHandler_t1415762101, ___augmentationObjects_13)); }
	inline AugmentationObjectU5BU5D_t2045593289* get_augmentationObjects_13() const { return ___augmentationObjects_13; }
	inline AugmentationObjectU5BU5D_t2045593289** get_address_of_augmentationObjects_13() { return &___augmentationObjects_13; }
	inline void set_augmentationObjects_13(AugmentationObjectU5BU5D_t2045593289* value)
	{
		___augmentationObjects_13 = value;
		Il2CppCodeGenWriteBarrier((&___augmentationObjects_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKHANDLER_T1415762101_H
#ifndef VUFORIAMONOBEHAVIOUR_T1150221792_H
#define VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_t1150221792  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_5;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_6;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_7;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_8;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_9;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_10;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_11;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_12;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_17;

public:
	inline static int32_t get_offset_of_m_Navigation_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_5)); }
	inline Navigation_t3049316579  get_m_Navigation_5() const { return ___m_Navigation_5; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_5() { return &___m_Navigation_5; }
	inline void set_m_Navigation_5(Navigation_t3049316579  value)
	{
		___m_Navigation_5 = value;
	}

	inline static int32_t get_offset_of_m_Transition_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_6)); }
	inline int32_t get_m_Transition_6() const { return ___m_Transition_6; }
	inline int32_t* get_address_of_m_Transition_6() { return &___m_Transition_6; }
	inline void set_m_Transition_6(int32_t value)
	{
		___m_Transition_6 = value;
	}

	inline static int32_t get_offset_of_m_Colors_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_7)); }
	inline ColorBlock_t2139031574  get_m_Colors_7() const { return ___m_Colors_7; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_7() { return &___m_Colors_7; }
	inline void set_m_Colors_7(ColorBlock_t2139031574  value)
	{
		___m_Colors_7 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_8)); }
	inline SpriteState_t1362986479  get_m_SpriteState_8() const { return ___m_SpriteState_8; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_8() { return &___m_SpriteState_8; }
	inline void set_m_SpriteState_8(SpriteState_t1362986479  value)
	{
		___m_SpriteState_8 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_9)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_9() const { return ___m_AnimationTriggers_9; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_9() { return &___m_AnimationTriggers_9; }
	inline void set_m_AnimationTriggers_9(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_9), value);
	}

	inline static int32_t get_offset_of_m_Interactable_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_10)); }
	inline bool get_m_Interactable_10() const { return ___m_Interactable_10; }
	inline bool* get_address_of_m_Interactable_10() { return &___m_Interactable_10; }
	inline void set_m_Interactable_10(bool value)
	{
		___m_Interactable_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_11)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_11() const { return ___m_TargetGraphic_11; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_11() { return &___m_TargetGraphic_11; }
	inline void set_m_TargetGraphic_11(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_11), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_12)); }
	inline bool get_m_GroupsAllowInteraction_12() const { return ___m_GroupsAllowInteraction_12; }
	inline bool* get_address_of_m_GroupsAllowInteraction_12() { return &___m_GroupsAllowInteraction_12; }
	inline void set_m_GroupsAllowInteraction_12(bool value)
	{
		___m_GroupsAllowInteraction_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_13)); }
	inline int32_t get_m_CurrentSelectionState_13() const { return ___m_CurrentSelectionState_13; }
	inline int32_t* get_address_of_m_CurrentSelectionState_13() { return &___m_CurrentSelectionState_13; }
	inline void set_m_CurrentSelectionState_13(int32_t value)
	{
		___m_CurrentSelectionState_13 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_14)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_14() const { return ___U3CisPointerInsideU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_14() { return &___U3CisPointerInsideU3Ek__BackingField_14; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_14(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_15() const { return ___U3CisPointerDownU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_15() { return &___U3CisPointerDownU3Ek__BackingField_15; }
	inline void set_U3CisPointerDownU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_16)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_16() const { return ___U3ChasSelectionU3Ek__BackingField_16; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_16() { return &___U3ChasSelectionU3Ek__BackingField_16; }
	inline void set_U3ChasSelectionU3Ek__BackingField_16(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_17() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_17)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_17() const { return ___m_CanvasGroupCache_17; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_17() { return &___m_CanvasGroupCache_17; }
	inline void set_m_CanvasGroupCache_17(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_17), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_4;

public:
	inline static int32_t get_offset_of_s_List_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_4)); }
	inline List_1_t427135887 * get_s_List_4() const { return ___s_List_4; }
	inline List_1_t427135887 ** get_address_of_s_List_4() { return &___s_List_4; }
	inline void set_s_List_4(List_1_t427135887 * value)
	{
		___s_List_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef VIDEOTRACKABLEEVENTHANDLER_T944783369_H
#define VIDEOTRACKABLEEVENTHANDLER_T944783369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoTrackableEventHandler
struct  VideoTrackableEventHandler_t944783369  : public DefaultTrackableEventHandler_t1588957063
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOTRACKABLEEVENTHANDLER_T944783369_H
#ifndef VUMARKTRACKABLEEVENTHANDLER_T4082851918_H
#define VUMARKTRACKABLEEVENTHANDLER_T4082851918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuMarkTrackableEventHandler
struct  VuMarkTrackableEventHandler_t4082851918  : public DefaultTrackableEventHandler_t1588957063
{
public:
	// Vuforia.VuMarkBehaviour VuMarkTrackableEventHandler::vumarkBehaviour
	VuMarkBehaviour_t1178230459 * ___vumarkBehaviour_9;
	// UnityEngine.LineRenderer VuMarkTrackableEventHandler::lineRenderer
	LineRenderer_t3154350270 * ___lineRenderer_10;
	// UnityEngine.CanvasGroup VuMarkTrackableEventHandler::canvasGroup
	CanvasGroup_t4083511760 * ___canvasGroup_11;
	// UnityEngine.Vector2 VuMarkTrackableEventHandler::fadeRange
	Vector2_t2156229523  ___fadeRange_12;
	// UnityEngine.Transform VuMarkTrackableEventHandler::centralAnchorPoint
	Transform_t3600365921 * ___centralAnchorPoint_13;

public:
	inline static int32_t get_offset_of_vumarkBehaviour_9() { return static_cast<int32_t>(offsetof(VuMarkTrackableEventHandler_t4082851918, ___vumarkBehaviour_9)); }
	inline VuMarkBehaviour_t1178230459 * get_vumarkBehaviour_9() const { return ___vumarkBehaviour_9; }
	inline VuMarkBehaviour_t1178230459 ** get_address_of_vumarkBehaviour_9() { return &___vumarkBehaviour_9; }
	inline void set_vumarkBehaviour_9(VuMarkBehaviour_t1178230459 * value)
	{
		___vumarkBehaviour_9 = value;
		Il2CppCodeGenWriteBarrier((&___vumarkBehaviour_9), value);
	}

	inline static int32_t get_offset_of_lineRenderer_10() { return static_cast<int32_t>(offsetof(VuMarkTrackableEventHandler_t4082851918, ___lineRenderer_10)); }
	inline LineRenderer_t3154350270 * get_lineRenderer_10() const { return ___lineRenderer_10; }
	inline LineRenderer_t3154350270 ** get_address_of_lineRenderer_10() { return &___lineRenderer_10; }
	inline void set_lineRenderer_10(LineRenderer_t3154350270 * value)
	{
		___lineRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___lineRenderer_10), value);
	}

	inline static int32_t get_offset_of_canvasGroup_11() { return static_cast<int32_t>(offsetof(VuMarkTrackableEventHandler_t4082851918, ___canvasGroup_11)); }
	inline CanvasGroup_t4083511760 * get_canvasGroup_11() const { return ___canvasGroup_11; }
	inline CanvasGroup_t4083511760 ** get_address_of_canvasGroup_11() { return &___canvasGroup_11; }
	inline void set_canvasGroup_11(CanvasGroup_t4083511760 * value)
	{
		___canvasGroup_11 = value;
		Il2CppCodeGenWriteBarrier((&___canvasGroup_11), value);
	}

	inline static int32_t get_offset_of_fadeRange_12() { return static_cast<int32_t>(offsetof(VuMarkTrackableEventHandler_t4082851918, ___fadeRange_12)); }
	inline Vector2_t2156229523  get_fadeRange_12() const { return ___fadeRange_12; }
	inline Vector2_t2156229523 * get_address_of_fadeRange_12() { return &___fadeRange_12; }
	inline void set_fadeRange_12(Vector2_t2156229523  value)
	{
		___fadeRange_12 = value;
	}

	inline static int32_t get_offset_of_centralAnchorPoint_13() { return static_cast<int32_t>(offsetof(VuMarkTrackableEventHandler_t4082851918, ___centralAnchorPoint_13)); }
	inline Transform_t3600365921 * get_centralAnchorPoint_13() const { return ___centralAnchorPoint_13; }
	inline Transform_t3600365921 ** get_address_of_centralAnchorPoint_13() { return &___centralAnchorPoint_13; }
	inline void set_centralAnchorPoint_13(Transform_t3600365921 * value)
	{
		___centralAnchorPoint_13 = value;
		Il2CppCodeGenWriteBarrier((&___centralAnchorPoint_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTRACKABLEEVENTHANDLER_T4082851918_H
#ifndef TRACKABLEBEHAVIOUR_T1113559212_H
#define TRACKABLEBEHAVIOUR_T1113559212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t1113559212  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_4;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_5;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_6;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_7;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_t3722313464  ___mPreviousScale_8;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_9;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_10;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t2968050330 * ___mTrackableEventHandlers_11;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___U3CTimeStampU3Ek__BackingField_4)); }
	inline double get_U3CTimeStampU3Ek__BackingField_4() const { return ___U3CTimeStampU3Ek__BackingField_4; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_4() { return &___U3CTimeStampU3Ek__BackingField_4; }
	inline void set_U3CTimeStampU3Ek__BackingField_4(double value)
	{
		___U3CTimeStampU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableName_5)); }
	inline String_t* get_mTrackableName_5() const { return ___mTrackableName_5; }
	inline String_t** get_address_of_mTrackableName_5() { return &___mTrackableName_5; }
	inline void set_mTrackableName_5(String_t* value)
	{
		___mTrackableName_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_5), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreserveChildSize_6)); }
	inline bool get_mPreserveChildSize_6() const { return ___mPreserveChildSize_6; }
	inline bool* get_address_of_mPreserveChildSize_6() { return &___mPreserveChildSize_6; }
	inline void set_mPreserveChildSize_6(bool value)
	{
		___mPreserveChildSize_6 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mInitializedInEditor_7)); }
	inline bool get_mInitializedInEditor_7() const { return ___mInitializedInEditor_7; }
	inline bool* get_address_of_mInitializedInEditor_7() { return &___mInitializedInEditor_7; }
	inline void set_mInitializedInEditor_7(bool value)
	{
		___mInitializedInEditor_7 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreviousScale_8)); }
	inline Vector3_t3722313464  get_mPreviousScale_8() const { return ___mPreviousScale_8; }
	inline Vector3_t3722313464 * get_address_of_mPreviousScale_8() { return &___mPreviousScale_8; }
	inline void set_mPreviousScale_8(Vector3_t3722313464  value)
	{
		___mPreviousScale_8 = value;
	}

	inline static int32_t get_offset_of_mStatus_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mStatus_9)); }
	inline int32_t get_mStatus_9() const { return ___mStatus_9; }
	inline int32_t* get_address_of_mStatus_9() { return &___mStatus_9; }
	inline void set_mStatus_9(int32_t value)
	{
		___mStatus_9 = value;
	}

	inline static int32_t get_offset_of_mTrackable_10() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackable_10)); }
	inline RuntimeObject* get_mTrackable_10() const { return ___mTrackable_10; }
	inline RuntimeObject** get_address_of_mTrackable_10() { return &___mTrackable_10; }
	inline void set_mTrackable_10(RuntimeObject* value)
	{
		___mTrackable_10 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_10), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_11() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableEventHandlers_11)); }
	inline List_1_t2968050330 * get_mTrackableEventHandlers_11() const { return ___mTrackableEventHandlers_11; }
	inline List_1_t2968050330 ** get_address_of_mTrackableEventHandlers_11() { return &___mTrackableEventHandlers_11; }
	inline void set_mTrackableEventHandlers_11(List_1_t2968050330 * value)
	{
		___mTrackableEventHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T1113559212_H
#ifndef USERDEFINEDTARGETBUILDINGBEHAVIOUR_T4262637471_H
#define USERDEFINEDTARGETBUILDINGBEHAVIOUR_T4262637471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.UserDefinedTargetBuildingBehaviour
struct  UserDefinedTargetBuildingBehaviour_t4262637471  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// Vuforia.ObjectTracker Vuforia.UserDefinedTargetBuildingBehaviour::mObjectTracker
	ObjectTracker_t4177997237 * ___mObjectTracker_4;
	// Vuforia.ImageTargetBuilder/FrameQuality Vuforia.UserDefinedTargetBuildingBehaviour::mLastFrameQuality
	int32_t ___mLastFrameQuality_5;
	// System.Boolean Vuforia.UserDefinedTargetBuildingBehaviour::mCurrentlyScanning
	bool ___mCurrentlyScanning_6;
	// System.Boolean Vuforia.UserDefinedTargetBuildingBehaviour::mWasScanningBeforeDisable
	bool ___mWasScanningBeforeDisable_7;
	// System.Boolean Vuforia.UserDefinedTargetBuildingBehaviour::mCurrentlyBuilding
	bool ___mCurrentlyBuilding_8;
	// System.Boolean Vuforia.UserDefinedTargetBuildingBehaviour::mWasBuildingBeforeDisable
	bool ___mWasBuildingBeforeDisable_9;
	// System.Boolean Vuforia.UserDefinedTargetBuildingBehaviour::mOnInitializedCalled
	bool ___mOnInitializedCalled_10;
	// System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler> Vuforia.UserDefinedTargetBuildingBehaviour::mHandlers
	List_1_t2728888017 * ___mHandlers_11;
	// System.Boolean Vuforia.UserDefinedTargetBuildingBehaviour::StopTrackerWhileScanning
	bool ___StopTrackerWhileScanning_12;
	// System.Boolean Vuforia.UserDefinedTargetBuildingBehaviour::StartScanningAutomatically
	bool ___StartScanningAutomatically_13;
	// System.Boolean Vuforia.UserDefinedTargetBuildingBehaviour::StopScanningWhenFinshedBuilding
	bool ___StopScanningWhenFinshedBuilding_14;

public:
	inline static int32_t get_offset_of_mObjectTracker_4() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingBehaviour_t4262637471, ___mObjectTracker_4)); }
	inline ObjectTracker_t4177997237 * get_mObjectTracker_4() const { return ___mObjectTracker_4; }
	inline ObjectTracker_t4177997237 ** get_address_of_mObjectTracker_4() { return &___mObjectTracker_4; }
	inline void set_mObjectTracker_4(ObjectTracker_t4177997237 * value)
	{
		___mObjectTracker_4 = value;
		Il2CppCodeGenWriteBarrier((&___mObjectTracker_4), value);
	}

	inline static int32_t get_offset_of_mLastFrameQuality_5() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingBehaviour_t4262637471, ___mLastFrameQuality_5)); }
	inline int32_t get_mLastFrameQuality_5() const { return ___mLastFrameQuality_5; }
	inline int32_t* get_address_of_mLastFrameQuality_5() { return &___mLastFrameQuality_5; }
	inline void set_mLastFrameQuality_5(int32_t value)
	{
		___mLastFrameQuality_5 = value;
	}

	inline static int32_t get_offset_of_mCurrentlyScanning_6() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingBehaviour_t4262637471, ___mCurrentlyScanning_6)); }
	inline bool get_mCurrentlyScanning_6() const { return ___mCurrentlyScanning_6; }
	inline bool* get_address_of_mCurrentlyScanning_6() { return &___mCurrentlyScanning_6; }
	inline void set_mCurrentlyScanning_6(bool value)
	{
		___mCurrentlyScanning_6 = value;
	}

	inline static int32_t get_offset_of_mWasScanningBeforeDisable_7() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingBehaviour_t4262637471, ___mWasScanningBeforeDisable_7)); }
	inline bool get_mWasScanningBeforeDisable_7() const { return ___mWasScanningBeforeDisable_7; }
	inline bool* get_address_of_mWasScanningBeforeDisable_7() { return &___mWasScanningBeforeDisable_7; }
	inline void set_mWasScanningBeforeDisable_7(bool value)
	{
		___mWasScanningBeforeDisable_7 = value;
	}

	inline static int32_t get_offset_of_mCurrentlyBuilding_8() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingBehaviour_t4262637471, ___mCurrentlyBuilding_8)); }
	inline bool get_mCurrentlyBuilding_8() const { return ___mCurrentlyBuilding_8; }
	inline bool* get_address_of_mCurrentlyBuilding_8() { return &___mCurrentlyBuilding_8; }
	inline void set_mCurrentlyBuilding_8(bool value)
	{
		___mCurrentlyBuilding_8 = value;
	}

	inline static int32_t get_offset_of_mWasBuildingBeforeDisable_9() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingBehaviour_t4262637471, ___mWasBuildingBeforeDisable_9)); }
	inline bool get_mWasBuildingBeforeDisable_9() const { return ___mWasBuildingBeforeDisable_9; }
	inline bool* get_address_of_mWasBuildingBeforeDisable_9() { return &___mWasBuildingBeforeDisable_9; }
	inline void set_mWasBuildingBeforeDisable_9(bool value)
	{
		___mWasBuildingBeforeDisable_9 = value;
	}

	inline static int32_t get_offset_of_mOnInitializedCalled_10() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingBehaviour_t4262637471, ___mOnInitializedCalled_10)); }
	inline bool get_mOnInitializedCalled_10() const { return ___mOnInitializedCalled_10; }
	inline bool* get_address_of_mOnInitializedCalled_10() { return &___mOnInitializedCalled_10; }
	inline void set_mOnInitializedCalled_10(bool value)
	{
		___mOnInitializedCalled_10 = value;
	}

	inline static int32_t get_offset_of_mHandlers_11() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingBehaviour_t4262637471, ___mHandlers_11)); }
	inline List_1_t2728888017 * get_mHandlers_11() const { return ___mHandlers_11; }
	inline List_1_t2728888017 ** get_address_of_mHandlers_11() { return &___mHandlers_11; }
	inline void set_mHandlers_11(List_1_t2728888017 * value)
	{
		___mHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((&___mHandlers_11), value);
	}

	inline static int32_t get_offset_of_StopTrackerWhileScanning_12() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingBehaviour_t4262637471, ___StopTrackerWhileScanning_12)); }
	inline bool get_StopTrackerWhileScanning_12() const { return ___StopTrackerWhileScanning_12; }
	inline bool* get_address_of_StopTrackerWhileScanning_12() { return &___StopTrackerWhileScanning_12; }
	inline void set_StopTrackerWhileScanning_12(bool value)
	{
		___StopTrackerWhileScanning_12 = value;
	}

	inline static int32_t get_offset_of_StartScanningAutomatically_13() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingBehaviour_t4262637471, ___StartScanningAutomatically_13)); }
	inline bool get_StartScanningAutomatically_13() const { return ___StartScanningAutomatically_13; }
	inline bool* get_address_of_StartScanningAutomatically_13() { return &___StartScanningAutomatically_13; }
	inline void set_StartScanningAutomatically_13(bool value)
	{
		___StartScanningAutomatically_13 = value;
	}

	inline static int32_t get_offset_of_StopScanningWhenFinshedBuilding_14() { return static_cast<int32_t>(offsetof(UserDefinedTargetBuildingBehaviour_t4262637471, ___StopScanningWhenFinshedBuilding_14)); }
	inline bool get_StopScanningWhenFinshedBuilding_14() const { return ___StopScanningWhenFinshedBuilding_14; }
	inline bool* get_address_of_StopScanningWhenFinshedBuilding_14() { return &___StopScanningWhenFinshedBuilding_14; }
	inline void set_StopScanningWhenFinshedBuilding_14(bool value)
	{
		___StopScanningWhenFinshedBuilding_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERDEFINEDTARGETBUILDINGBEHAVIOUR_T4262637471_H
#ifndef VIRTUALBUTTONBEHAVIOUR_T1436326451_H
#define VIRTUALBUTTONBEHAVIOUR_T1436326451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VirtualButtonBehaviour
struct  VirtualButtonBehaviour_t1436326451  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// System.String Vuforia.VirtualButtonBehaviour::mName
	String_t* ___mName_5;
	// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonBehaviour::mSensitivity
	int32_t ___mSensitivity_6;
	// System.Boolean Vuforia.VirtualButtonBehaviour::mHasUpdatedPose
	bool ___mHasUpdatedPose_7;
	// UnityEngine.Matrix4x4 Vuforia.VirtualButtonBehaviour::mPrevTransform
	Matrix4x4_t1817901843  ___mPrevTransform_8;
	// UnityEngine.GameObject Vuforia.VirtualButtonBehaviour::mPrevParent
	GameObject_t1113636619 * ___mPrevParent_9;
	// System.Boolean Vuforia.VirtualButtonBehaviour::mSensitivityDirty
	bool ___mSensitivityDirty_10;
	// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonBehaviour::mPreviousSensitivity
	int32_t ___mPreviousSensitivity_11;
	// System.Boolean Vuforia.VirtualButtonBehaviour::mPreviouslyEnabled
	bool ___mPreviouslyEnabled_12;
	// System.Boolean Vuforia.VirtualButtonBehaviour::mPressed
	bool ___mPressed_13;
	// System.Collections.Generic.List`1<Vuforia.IVirtualButtonEventHandler> Vuforia.VirtualButtonBehaviour::mHandlers
	List_1_t365750880 * ___mHandlers_14;
	// UnityEngine.Vector2 Vuforia.VirtualButtonBehaviour::mLeftTop
	Vector2_t2156229523  ___mLeftTop_15;
	// UnityEngine.Vector2 Vuforia.VirtualButtonBehaviour::mRightBottom
	Vector2_t2156229523  ___mRightBottom_16;
	// System.Boolean Vuforia.VirtualButtonBehaviour::mUnregisterOnDestroy
	bool ___mUnregisterOnDestroy_17;
	// Vuforia.VirtualButton Vuforia.VirtualButtonBehaviour::mVirtualButton
	VirtualButton_t386166510 * ___mVirtualButton_18;

public:
	inline static int32_t get_offset_of_mName_5() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mName_5)); }
	inline String_t* get_mName_5() const { return ___mName_5; }
	inline String_t** get_address_of_mName_5() { return &___mName_5; }
	inline void set_mName_5(String_t* value)
	{
		___mName_5 = value;
		Il2CppCodeGenWriteBarrier((&___mName_5), value);
	}

	inline static int32_t get_offset_of_mSensitivity_6() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mSensitivity_6)); }
	inline int32_t get_mSensitivity_6() const { return ___mSensitivity_6; }
	inline int32_t* get_address_of_mSensitivity_6() { return &___mSensitivity_6; }
	inline void set_mSensitivity_6(int32_t value)
	{
		___mSensitivity_6 = value;
	}

	inline static int32_t get_offset_of_mHasUpdatedPose_7() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mHasUpdatedPose_7)); }
	inline bool get_mHasUpdatedPose_7() const { return ___mHasUpdatedPose_7; }
	inline bool* get_address_of_mHasUpdatedPose_7() { return &___mHasUpdatedPose_7; }
	inline void set_mHasUpdatedPose_7(bool value)
	{
		___mHasUpdatedPose_7 = value;
	}

	inline static int32_t get_offset_of_mPrevTransform_8() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mPrevTransform_8)); }
	inline Matrix4x4_t1817901843  get_mPrevTransform_8() const { return ___mPrevTransform_8; }
	inline Matrix4x4_t1817901843 * get_address_of_mPrevTransform_8() { return &___mPrevTransform_8; }
	inline void set_mPrevTransform_8(Matrix4x4_t1817901843  value)
	{
		___mPrevTransform_8 = value;
	}

	inline static int32_t get_offset_of_mPrevParent_9() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mPrevParent_9)); }
	inline GameObject_t1113636619 * get_mPrevParent_9() const { return ___mPrevParent_9; }
	inline GameObject_t1113636619 ** get_address_of_mPrevParent_9() { return &___mPrevParent_9; }
	inline void set_mPrevParent_9(GameObject_t1113636619 * value)
	{
		___mPrevParent_9 = value;
		Il2CppCodeGenWriteBarrier((&___mPrevParent_9), value);
	}

	inline static int32_t get_offset_of_mSensitivityDirty_10() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mSensitivityDirty_10)); }
	inline bool get_mSensitivityDirty_10() const { return ___mSensitivityDirty_10; }
	inline bool* get_address_of_mSensitivityDirty_10() { return &___mSensitivityDirty_10; }
	inline void set_mSensitivityDirty_10(bool value)
	{
		___mSensitivityDirty_10 = value;
	}

	inline static int32_t get_offset_of_mPreviousSensitivity_11() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mPreviousSensitivity_11)); }
	inline int32_t get_mPreviousSensitivity_11() const { return ___mPreviousSensitivity_11; }
	inline int32_t* get_address_of_mPreviousSensitivity_11() { return &___mPreviousSensitivity_11; }
	inline void set_mPreviousSensitivity_11(int32_t value)
	{
		___mPreviousSensitivity_11 = value;
	}

	inline static int32_t get_offset_of_mPreviouslyEnabled_12() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mPreviouslyEnabled_12)); }
	inline bool get_mPreviouslyEnabled_12() const { return ___mPreviouslyEnabled_12; }
	inline bool* get_address_of_mPreviouslyEnabled_12() { return &___mPreviouslyEnabled_12; }
	inline void set_mPreviouslyEnabled_12(bool value)
	{
		___mPreviouslyEnabled_12 = value;
	}

	inline static int32_t get_offset_of_mPressed_13() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mPressed_13)); }
	inline bool get_mPressed_13() const { return ___mPressed_13; }
	inline bool* get_address_of_mPressed_13() { return &___mPressed_13; }
	inline void set_mPressed_13(bool value)
	{
		___mPressed_13 = value;
	}

	inline static int32_t get_offset_of_mHandlers_14() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mHandlers_14)); }
	inline List_1_t365750880 * get_mHandlers_14() const { return ___mHandlers_14; }
	inline List_1_t365750880 ** get_address_of_mHandlers_14() { return &___mHandlers_14; }
	inline void set_mHandlers_14(List_1_t365750880 * value)
	{
		___mHandlers_14 = value;
		Il2CppCodeGenWriteBarrier((&___mHandlers_14), value);
	}

	inline static int32_t get_offset_of_mLeftTop_15() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mLeftTop_15)); }
	inline Vector2_t2156229523  get_mLeftTop_15() const { return ___mLeftTop_15; }
	inline Vector2_t2156229523 * get_address_of_mLeftTop_15() { return &___mLeftTop_15; }
	inline void set_mLeftTop_15(Vector2_t2156229523  value)
	{
		___mLeftTop_15 = value;
	}

	inline static int32_t get_offset_of_mRightBottom_16() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mRightBottom_16)); }
	inline Vector2_t2156229523  get_mRightBottom_16() const { return ___mRightBottom_16; }
	inline Vector2_t2156229523 * get_address_of_mRightBottom_16() { return &___mRightBottom_16; }
	inline void set_mRightBottom_16(Vector2_t2156229523  value)
	{
		___mRightBottom_16 = value;
	}

	inline static int32_t get_offset_of_mUnregisterOnDestroy_17() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mUnregisterOnDestroy_17)); }
	inline bool get_mUnregisterOnDestroy_17() const { return ___mUnregisterOnDestroy_17; }
	inline bool* get_address_of_mUnregisterOnDestroy_17() { return &___mUnregisterOnDestroy_17; }
	inline void set_mUnregisterOnDestroy_17(bool value)
	{
		___mUnregisterOnDestroy_17 = value;
	}

	inline static int32_t get_offset_of_mVirtualButton_18() { return static_cast<int32_t>(offsetof(VirtualButtonBehaviour_t1436326451, ___mVirtualButton_18)); }
	inline VirtualButton_t386166510 * get_mVirtualButton_18() const { return ___mVirtualButton_18; }
	inline VirtualButton_t386166510 ** get_address_of_mVirtualButton_18() { return &___mVirtualButton_18; }
	inline void set_mVirtualButton_18(VirtualButton_t386166510 * value)
	{
		___mVirtualButton_18 = value;
		Il2CppCodeGenWriteBarrier((&___mVirtualButton_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTONBEHAVIOUR_T1436326451_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_18;

public:
	inline static int32_t get_offset_of_m_OnClick_18() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_18)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_18() const { return ___m_OnClick_18; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_18() { return &___m_OnClick_18; }
	inline void set_m_OnClick_18(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#define DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetTrackableBehaviour
struct  DataSetTrackableBehaviour_t3430730379  : public TrackableBehaviour_t1113559212
{
public:
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_12;

public:
	inline static int32_t get_offset_of_mDataSetPath_12() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3430730379, ___mDataSetPath_12)); }
	inline String_t* get_mDataSetPath_12() const { return ___mDataSetPath_12; }
	inline String_t** get_address_of_mDataSetPath_12() { return &___mDataSetPath_12; }
	inline void set_mDataSetPath_12(String_t* value)
	{
		___mDataSetPath_12 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSetPath_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_31;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_32;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_33;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_34;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_35;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_36;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_37;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_38;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_39;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_40;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_41;

public:
	inline static int32_t get_offset_of_m_Sprite_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_31)); }
	inline Sprite_t280657092 * get_m_Sprite_31() const { return ___m_Sprite_31; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_31() { return &___m_Sprite_31; }
	inline void set_m_Sprite_31(Sprite_t280657092 * value)
	{
		___m_Sprite_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_31), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_32)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_32() const { return ___m_OverrideSprite_32; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_32() { return &___m_OverrideSprite_32; }
	inline void set_m_OverrideSprite_32(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_32), value);
	}

	inline static int32_t get_offset_of_m_Type_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_33)); }
	inline int32_t get_m_Type_33() const { return ___m_Type_33; }
	inline int32_t* get_address_of_m_Type_33() { return &___m_Type_33; }
	inline void set_m_Type_33(int32_t value)
	{
		___m_Type_33 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_34)); }
	inline bool get_m_PreserveAspect_34() const { return ___m_PreserveAspect_34; }
	inline bool* get_address_of_m_PreserveAspect_34() { return &___m_PreserveAspect_34; }
	inline void set_m_PreserveAspect_34(bool value)
	{
		___m_PreserveAspect_34 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_35)); }
	inline bool get_m_FillCenter_35() const { return ___m_FillCenter_35; }
	inline bool* get_address_of_m_FillCenter_35() { return &___m_FillCenter_35; }
	inline void set_m_FillCenter_35(bool value)
	{
		___m_FillCenter_35 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_36)); }
	inline int32_t get_m_FillMethod_36() const { return ___m_FillMethod_36; }
	inline int32_t* get_address_of_m_FillMethod_36() { return &___m_FillMethod_36; }
	inline void set_m_FillMethod_36(int32_t value)
	{
		___m_FillMethod_36 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_37)); }
	inline float get_m_FillAmount_37() const { return ___m_FillAmount_37; }
	inline float* get_address_of_m_FillAmount_37() { return &___m_FillAmount_37; }
	inline void set_m_FillAmount_37(float value)
	{
		___m_FillAmount_37 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_38)); }
	inline bool get_m_FillClockwise_38() const { return ___m_FillClockwise_38; }
	inline bool* get_address_of_m_FillClockwise_38() { return &___m_FillClockwise_38; }
	inline void set_m_FillClockwise_38(bool value)
	{
		___m_FillClockwise_38 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_39() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_39)); }
	inline int32_t get_m_FillOrigin_39() const { return ___m_FillOrigin_39; }
	inline int32_t* get_address_of_m_FillOrigin_39() { return &___m_FillOrigin_39; }
	inline void set_m_FillOrigin_39(int32_t value)
	{
		___m_FillOrigin_39 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_40() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_40)); }
	inline float get_m_AlphaHitTestMinimumThreshold_40() const { return ___m_AlphaHitTestMinimumThreshold_40; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_40() { return &___m_AlphaHitTestMinimumThreshold_40; }
	inline void set_m_AlphaHitTestMinimumThreshold_40(float value)
	{
		___m_AlphaHitTestMinimumThreshold_40 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_41() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Tracked_41)); }
	inline bool get_m_Tracked_41() const { return ___m_Tracked_41; }
	inline bool* get_address_of_m_Tracked_41() { return &___m_Tracked_41; }
	inline void set_m_Tracked_41(bool value)
	{
		___m_Tracked_41 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_30;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_42;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_43;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_44;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_45;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t4142344393 * ___m_TrackedTexturelessImages_46;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_47;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.UI.Image::<>f__mg$cache0
	Action_1_t819399007 * ___U3CU3Ef__mgU24cache0_48;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_30() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_30)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_30() const { return ___s_ETC1DefaultUI_30; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_30() { return &___s_ETC1DefaultUI_30; }
	inline void set_s_ETC1DefaultUI_30(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_30), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_42)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_42() const { return ___s_VertScratch_42; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_42() { return &___s_VertScratch_42; }
	inline void set_s_VertScratch_42(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_42), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_43() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_43)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_43() const { return ___s_UVScratch_43; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_43() { return &___s_UVScratch_43; }
	inline void set_s_UVScratch_43(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_43 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_43), value);
	}

	inline static int32_t get_offset_of_s_Xy_44() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_44)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_44() const { return ___s_Xy_44; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_44() { return &___s_Xy_44; }
	inline void set_s_Xy_44(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_44 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_44), value);
	}

	inline static int32_t get_offset_of_s_Uv_45() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_45)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_45() const { return ___s_Uv_45; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_45() { return &___s_Uv_45; }
	inline void set_s_Uv_45(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_45 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_45), value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_46() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___m_TrackedTexturelessImages_46)); }
	inline List_1_t4142344393 * get_m_TrackedTexturelessImages_46() const { return ___m_TrackedTexturelessImages_46; }
	inline List_1_t4142344393 ** get_address_of_m_TrackedTexturelessImages_46() { return &___m_TrackedTexturelessImages_46; }
	inline void set_m_TrackedTexturelessImages_46(List_1_t4142344393 * value)
	{
		___m_TrackedTexturelessImages_46 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackedTexturelessImages_46), value);
	}

	inline static int32_t get_offset_of_s_Initialized_47() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Initialized_47)); }
	inline bool get_s_Initialized_47() const { return ___s_Initialized_47; }
	inline bool* get_address_of_s_Initialized_47() { return &___s_Initialized_47; }
	inline void set_s_Initialized_47(bool value)
	{
		___s_Initialized_47 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_48() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___U3CU3Ef__mgU24cache0_48)); }
	inline Action_1_t819399007 * get_U3CU3Ef__mgU24cache0_48() const { return ___U3CU3Ef__mgU24cache0_48; }
	inline Action_1_t819399007 ** get_address_of_U3CU3Ef__mgU24cache0_48() { return &___U3CU3Ef__mgU24cache0_48; }
	inline void set_U3CU3Ef__mgU24cache0_48(Action_1_t819399007 * value)
	{
		___U3CU3Ef__mgU24cache0_48 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_48), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
#ifndef IMAGETARGETBEHAVIOUR_T2200418350_H
#define IMAGETARGETBEHAVIOUR_T2200418350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetBehaviour
struct  ImageTargetBehaviour_t2200418350  : public DataSetTrackableBehaviour_t3430730379
{
public:
	// System.Single Vuforia.ImageTargetBehaviour::mAspectRatio
	float ___mAspectRatio_13;
	// Vuforia.ImageTargetType Vuforia.ImageTargetBehaviour::mImageTargetType
	int32_t ___mImageTargetType_14;
	// System.Single Vuforia.ImageTargetBehaviour::mWidth
	float ___mWidth_15;
	// System.Single Vuforia.ImageTargetBehaviour::mHeight
	float ___mHeight_16;
	// Vuforia.ImageTarget Vuforia.ImageTargetBehaviour::mImageTarget
	RuntimeObject* ___mImageTarget_17;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonBehaviour> Vuforia.ImageTargetBehaviour::mVirtualButtonBehaviours
	Dictionary_2_t325039782 * ___mVirtualButtonBehaviours_18;
	// System.Single Vuforia.ImageTargetBehaviour::mLastTransformScale
	float ___mLastTransformScale_19;
	// UnityEngine.Vector2 Vuforia.ImageTargetBehaviour::mLastSize
	Vector2_t2156229523  ___mLastSize_20;

public:
	inline static int32_t get_offset_of_mAspectRatio_13() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mAspectRatio_13)); }
	inline float get_mAspectRatio_13() const { return ___mAspectRatio_13; }
	inline float* get_address_of_mAspectRatio_13() { return &___mAspectRatio_13; }
	inline void set_mAspectRatio_13(float value)
	{
		___mAspectRatio_13 = value;
	}

	inline static int32_t get_offset_of_mImageTargetType_14() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mImageTargetType_14)); }
	inline int32_t get_mImageTargetType_14() const { return ___mImageTargetType_14; }
	inline int32_t* get_address_of_mImageTargetType_14() { return &___mImageTargetType_14; }
	inline void set_mImageTargetType_14(int32_t value)
	{
		___mImageTargetType_14 = value;
	}

	inline static int32_t get_offset_of_mWidth_15() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mWidth_15)); }
	inline float get_mWidth_15() const { return ___mWidth_15; }
	inline float* get_address_of_mWidth_15() { return &___mWidth_15; }
	inline void set_mWidth_15(float value)
	{
		___mWidth_15 = value;
	}

	inline static int32_t get_offset_of_mHeight_16() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mHeight_16)); }
	inline float get_mHeight_16() const { return ___mHeight_16; }
	inline float* get_address_of_mHeight_16() { return &___mHeight_16; }
	inline void set_mHeight_16(float value)
	{
		___mHeight_16 = value;
	}

	inline static int32_t get_offset_of_mImageTarget_17() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mImageTarget_17)); }
	inline RuntimeObject* get_mImageTarget_17() const { return ___mImageTarget_17; }
	inline RuntimeObject** get_address_of_mImageTarget_17() { return &___mImageTarget_17; }
	inline void set_mImageTarget_17(RuntimeObject* value)
	{
		___mImageTarget_17 = value;
		Il2CppCodeGenWriteBarrier((&___mImageTarget_17), value);
	}

	inline static int32_t get_offset_of_mVirtualButtonBehaviours_18() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mVirtualButtonBehaviours_18)); }
	inline Dictionary_2_t325039782 * get_mVirtualButtonBehaviours_18() const { return ___mVirtualButtonBehaviours_18; }
	inline Dictionary_2_t325039782 ** get_address_of_mVirtualButtonBehaviours_18() { return &___mVirtualButtonBehaviours_18; }
	inline void set_mVirtualButtonBehaviours_18(Dictionary_2_t325039782 * value)
	{
		___mVirtualButtonBehaviours_18 = value;
		Il2CppCodeGenWriteBarrier((&___mVirtualButtonBehaviours_18), value);
	}

	inline static int32_t get_offset_of_mLastTransformScale_19() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mLastTransformScale_19)); }
	inline float get_mLastTransformScale_19() const { return ___mLastTransformScale_19; }
	inline float* get_address_of_mLastTransformScale_19() { return &___mLastTransformScale_19; }
	inline void set_mLastTransformScale_19(float value)
	{
		___mLastTransformScale_19 = value;
	}

	inline static int32_t get_offset_of_mLastSize_20() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_t2200418350, ___mLastSize_20)); }
	inline Vector2_t2156229523  get_mLastSize_20() const { return ___mLastSize_20; }
	inline Vector2_t2156229523 * get_address_of_mLastSize_20() { return &___mLastSize_20; }
	inline void set_mLastSize_20(Vector2_t2156229523  value)
	{
		___mLastSize_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGETARGETBEHAVIOUR_T2200418350_H
#ifndef VUMARKBEHAVIOUR_T1178230459_H
#define VUMARKBEHAVIOUR_T1178230459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkBehaviour
struct  VuMarkBehaviour_t1178230459  : public DataSetTrackableBehaviour_t3430730379
{
public:
	// System.Single Vuforia.VuMarkBehaviour::mAspectRatio
	float ___mAspectRatio_13;
	// System.Single Vuforia.VuMarkBehaviour::mWidth
	float ___mWidth_14;
	// System.Single Vuforia.VuMarkBehaviour::mHeight
	float ___mHeight_15;
	// System.String Vuforia.VuMarkBehaviour::mPreviewImage
	String_t* ___mPreviewImage_16;
	// Vuforia.InstanceIdType Vuforia.VuMarkBehaviour::mIdType
	int32_t ___mIdType_17;
	// System.Int32 Vuforia.VuMarkBehaviour::mIdLength
	int32_t ___mIdLength_18;
	// UnityEngine.Rect Vuforia.VuMarkBehaviour::mBoundingBox
	Rect_t2360479859  ___mBoundingBox_19;
	// UnityEngine.Vector2 Vuforia.VuMarkBehaviour::mOrigin
	Vector2_t2156229523  ___mOrigin_20;
	// System.Boolean Vuforia.VuMarkBehaviour::mTrackingFromRuntimeAppearance
	bool ___mTrackingFromRuntimeAppearance_21;
	// Vuforia.VuMarkTemplate Vuforia.VuMarkBehaviour::mVuMarkTemplate
	RuntimeObject* ___mVuMarkTemplate_22;
	// Vuforia.VuMarkTarget Vuforia.VuMarkBehaviour::mVuMarkTarget
	RuntimeObject* ___mVuMarkTarget_23;
	// System.Int32 Vuforia.VuMarkBehaviour::mVuMarkResultId
	int32_t ___mVuMarkResultId_24;
	// System.Action Vuforia.VuMarkBehaviour::mOnTargetAssigned
	Action_t1264377477 * ___mOnTargetAssigned_25;
	// System.Action Vuforia.VuMarkBehaviour::mOnTargetLost
	Action_t1264377477 * ___mOnTargetLost_26;
	// System.Single Vuforia.VuMarkBehaviour::mLastTransformScale
	float ___mLastTransformScale_27;
	// UnityEngine.Vector2 Vuforia.VuMarkBehaviour::mLastSize
	Vector2_t2156229523  ___mLastSize_28;

public:
	inline static int32_t get_offset_of_mAspectRatio_13() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mAspectRatio_13)); }
	inline float get_mAspectRatio_13() const { return ___mAspectRatio_13; }
	inline float* get_address_of_mAspectRatio_13() { return &___mAspectRatio_13; }
	inline void set_mAspectRatio_13(float value)
	{
		___mAspectRatio_13 = value;
	}

	inline static int32_t get_offset_of_mWidth_14() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mWidth_14)); }
	inline float get_mWidth_14() const { return ___mWidth_14; }
	inline float* get_address_of_mWidth_14() { return &___mWidth_14; }
	inline void set_mWidth_14(float value)
	{
		___mWidth_14 = value;
	}

	inline static int32_t get_offset_of_mHeight_15() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mHeight_15)); }
	inline float get_mHeight_15() const { return ___mHeight_15; }
	inline float* get_address_of_mHeight_15() { return &___mHeight_15; }
	inline void set_mHeight_15(float value)
	{
		___mHeight_15 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_16() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mPreviewImage_16)); }
	inline String_t* get_mPreviewImage_16() const { return ___mPreviewImage_16; }
	inline String_t** get_address_of_mPreviewImage_16() { return &___mPreviewImage_16; }
	inline void set_mPreviewImage_16(String_t* value)
	{
		___mPreviewImage_16 = value;
		Il2CppCodeGenWriteBarrier((&___mPreviewImage_16), value);
	}

	inline static int32_t get_offset_of_mIdType_17() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mIdType_17)); }
	inline int32_t get_mIdType_17() const { return ___mIdType_17; }
	inline int32_t* get_address_of_mIdType_17() { return &___mIdType_17; }
	inline void set_mIdType_17(int32_t value)
	{
		___mIdType_17 = value;
	}

	inline static int32_t get_offset_of_mIdLength_18() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mIdLength_18)); }
	inline int32_t get_mIdLength_18() const { return ___mIdLength_18; }
	inline int32_t* get_address_of_mIdLength_18() { return &___mIdLength_18; }
	inline void set_mIdLength_18(int32_t value)
	{
		___mIdLength_18 = value;
	}

	inline static int32_t get_offset_of_mBoundingBox_19() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mBoundingBox_19)); }
	inline Rect_t2360479859  get_mBoundingBox_19() const { return ___mBoundingBox_19; }
	inline Rect_t2360479859 * get_address_of_mBoundingBox_19() { return &___mBoundingBox_19; }
	inline void set_mBoundingBox_19(Rect_t2360479859  value)
	{
		___mBoundingBox_19 = value;
	}

	inline static int32_t get_offset_of_mOrigin_20() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mOrigin_20)); }
	inline Vector2_t2156229523  get_mOrigin_20() const { return ___mOrigin_20; }
	inline Vector2_t2156229523 * get_address_of_mOrigin_20() { return &___mOrigin_20; }
	inline void set_mOrigin_20(Vector2_t2156229523  value)
	{
		___mOrigin_20 = value;
	}

	inline static int32_t get_offset_of_mTrackingFromRuntimeAppearance_21() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mTrackingFromRuntimeAppearance_21)); }
	inline bool get_mTrackingFromRuntimeAppearance_21() const { return ___mTrackingFromRuntimeAppearance_21; }
	inline bool* get_address_of_mTrackingFromRuntimeAppearance_21() { return &___mTrackingFromRuntimeAppearance_21; }
	inline void set_mTrackingFromRuntimeAppearance_21(bool value)
	{
		___mTrackingFromRuntimeAppearance_21 = value;
	}

	inline static int32_t get_offset_of_mVuMarkTemplate_22() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mVuMarkTemplate_22)); }
	inline RuntimeObject* get_mVuMarkTemplate_22() const { return ___mVuMarkTemplate_22; }
	inline RuntimeObject** get_address_of_mVuMarkTemplate_22() { return &___mVuMarkTemplate_22; }
	inline void set_mVuMarkTemplate_22(RuntimeObject* value)
	{
		___mVuMarkTemplate_22 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkTemplate_22), value);
	}

	inline static int32_t get_offset_of_mVuMarkTarget_23() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mVuMarkTarget_23)); }
	inline RuntimeObject* get_mVuMarkTarget_23() const { return ___mVuMarkTarget_23; }
	inline RuntimeObject** get_address_of_mVuMarkTarget_23() { return &___mVuMarkTarget_23; }
	inline void set_mVuMarkTarget_23(RuntimeObject* value)
	{
		___mVuMarkTarget_23 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkTarget_23), value);
	}

	inline static int32_t get_offset_of_mVuMarkResultId_24() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mVuMarkResultId_24)); }
	inline int32_t get_mVuMarkResultId_24() const { return ___mVuMarkResultId_24; }
	inline int32_t* get_address_of_mVuMarkResultId_24() { return &___mVuMarkResultId_24; }
	inline void set_mVuMarkResultId_24(int32_t value)
	{
		___mVuMarkResultId_24 = value;
	}

	inline static int32_t get_offset_of_mOnTargetAssigned_25() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mOnTargetAssigned_25)); }
	inline Action_t1264377477 * get_mOnTargetAssigned_25() const { return ___mOnTargetAssigned_25; }
	inline Action_t1264377477 ** get_address_of_mOnTargetAssigned_25() { return &___mOnTargetAssigned_25; }
	inline void set_mOnTargetAssigned_25(Action_t1264377477 * value)
	{
		___mOnTargetAssigned_25 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTargetAssigned_25), value);
	}

	inline static int32_t get_offset_of_mOnTargetLost_26() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mOnTargetLost_26)); }
	inline Action_t1264377477 * get_mOnTargetLost_26() const { return ___mOnTargetLost_26; }
	inline Action_t1264377477 ** get_address_of_mOnTargetLost_26() { return &___mOnTargetLost_26; }
	inline void set_mOnTargetLost_26(Action_t1264377477 * value)
	{
		___mOnTargetLost_26 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTargetLost_26), value);
	}

	inline static int32_t get_offset_of_mLastTransformScale_27() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mLastTransformScale_27)); }
	inline float get_mLastTransformScale_27() const { return ___mLastTransformScale_27; }
	inline float* get_address_of_mLastTransformScale_27() { return &___mLastTransformScale_27; }
	inline void set_mLastTransformScale_27(float value)
	{
		___mLastTransformScale_27 = value;
	}

	inline static int32_t get_offset_of_mLastSize_28() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mLastSize_28)); }
	inline Vector2_t2156229523  get_mLastSize_28() const { return ___mLastSize_28; }
	inline Vector2_t2156229523 * get_address_of_mLastSize_28() { return &___mLastSize_28; }
	inline void set_mLastSize_28(Vector2_t2156229523  value)
	{
		___mLastSize_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKBEHAVIOUR_T1178230459_H
// UnityEngine.Touch[]
struct TouchU5BU5D_t1849554061  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_t1921856868  m_Items[1];

public:
	inline Touch_t1921856868  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t1921856868 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t1921856868  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t1921856868  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t1921856868 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t1921856868  value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t2627027031 * m_Items[1];

public:
	inline Renderer_t2627027031 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t2627027031 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t3310196443 * m_Items[1];

public:
	inline Canvas_t3310196443 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Canvas_t3310196443 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.VirtualButtonBehaviour[]
struct VirtualButtonBehaviourU5BU5D_t2153394082  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) VirtualButtonBehaviour_t1436326451 * m_Items[1];

public:
	inline VirtualButtonBehaviour_t1436326451 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VirtualButtonBehaviour_t1436326451 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VirtualButtonBehaviour_t1436326451 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline VirtualButtonBehaviour_t1436326451 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VirtualButtonBehaviour_t1436326451 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VirtualButtonBehaviour_t1436326451 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// VuMarkHandler/AugmentationObject[]
struct AugmentationObjectU5BU5D_t2045593289  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AugmentationObject_t2506029784 * m_Items[1];

public:
	inline AugmentationObject_t2506029784 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AugmentationObject_t2506029784 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AugmentationObject_t2506029784 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AugmentationObject_t2506029784 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AugmentationObject_t2506029784 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AugmentationObject_t2506029784 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2439009922  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t2670269651 * m_Items[1];

public:
	inline Image_t2670269651 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t2670269651 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t2670269651 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Image_t2670269651 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t2670269651 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t2670269651 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t2555686324  m_Items[1];

public:
	inline Color_t2555686324  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t2555686324  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m1551499789_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::ElementAt<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_ElementAt_TisRuntimeObject_m2579126540_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, int32_t p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_m119961155_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* GameObject_GetComponentsInChildren_TisRuntimeObject_m836045_gshared (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1664944732_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* GameObject_GetComponentsInChildren_TisRuntimeObject_m1461871634_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// T VuMarkHandler::GetValueFromDictionary<System.Object>(System.Collections.Generic.Dictionary`2<System.String,T>,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * VuMarkHandler_GetValueFromDictionary_TisRuntimeObject_m777203487_gshared (VuMarkHandler_t1415762101 * __this, Dictionary_2_t2865362463 * ___dictionary0, String_t* ___key1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_1__ctor_m1399073142_gshared (Func_1_t3822001908 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void SamplesMainMenu::LoadScene(System.String)
extern "C" IL2CPP_METHOD_ATTR void SamplesMainMenu_LoadScene_m3673144432 (RuntimeObject * __this /* static, unused */, String_t* ___scene0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C" IL2CPP_METHOD_ATTR Scene_t2348375561  SceneManager_GetActiveScene_m1825203488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Scene_get_name_m622963475 (Scene_t2348375561 * __this, const RuntimeMethod* method);
// System.Void SceneOrientation::SetSceneOrientation()
extern "C" IL2CPP_METHOD_ATTR void SceneOrientation_SetSceneOrientation_m1795771586 (SceneOrientation_t160940122 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_orientation(UnityEngine.ScreenOrientation)
extern "C" IL2CPP_METHOD_ATTR void Screen_set_orientation_m3561207030 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<MenuOptions>()
inline MenuOptions_t1951716431 * Object_FindObjectOfType_TisMenuOptions_t1951716431_m1050906446 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  MenuOptions_t1951716431 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<CameraSettings>()
inline CameraSettings_t3152619780 * Object_FindObjectOfType_TisCameraSettings_t3152619780_m4203198741 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  CameraSettings_t3152619780 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Boolean MenuOptions::get_IsDisplayed()
extern "C" IL2CPP_METHOD_ATTR bool MenuOptions_get_IsDisplayed_m700004988 (MenuOptions_t1951716431 * __this, const RuntimeMethod* method);
// System.Void TapHandler::HandleTap()
extern "C" IL2CPP_METHOD_ATTR void TapHandler_HandleTap_m1322678531 (TapHandler_t334234343 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2924350851 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void CameraSettings::TriggerAutofocusEvent()
extern "C" IL2CPP_METHOD_ATTR void CameraSettings_TriggerAutofocusEvent_m898525935 (CameraSettings_t3152619780 * __this, const RuntimeMethod* method);
// System.Void MenuOptions::ShowOptionsMenu(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MenuOptions_ShowOptionsMenu_m2175199945 (MenuOptions_t1951716431 * __this, bool ___show0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" IL2CPP_METHOD_ATTR bool Input_get_touchSupported_m1480684970 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
extern "C" IL2CPP_METHOD_ATTR TouchU5BU5D_t1849554061* Input_get_touches_m1702694043 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Touch::get_tapCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Touch_get_tapCount_m2125417096 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// System.Boolean TouchHandler::IsSingleFingerDown()
extern "C" IL2CPP_METHOD_ATTR bool TouchHandler_IsSingleFingerDown_m3398302991 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m214549210 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localEulerAngles_m2136926248 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m3403849067 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Touch_get_position_m3109777936 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR float Vector2_Distance_m3048868881 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m4202601546 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_m859576425 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// Vuforia.VuforiaARController Vuforia.VuforiaARController::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaARController_t1876945237 * VuforiaARController_get_Instance_m1100644214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaARController::RegisterBeforeVuforiaTrackersInitializedCallback(System.Action)
extern "C" IL2CPP_METHOD_ATTR void VuforiaARController_RegisterBeforeVuforiaTrackersInitializedCallback_m522809966 (VuforiaARController_t1876945237 * __this, Action_t1264377477 * p0, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaARController::RegisterVuforiaInitializedCallback(System.Action)
extern "C" IL2CPP_METHOD_ATTR void VuforiaARController_RegisterVuforiaInitializedCallback_m948457393 (VuforiaARController_t1876945237 * __this, Action_t1264377477 * p0, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaARController::RegisterVuforiaStartedCallback(System.Action)
extern "C" IL2CPP_METHOD_ATTR void VuforiaARController_RegisterVuforiaStartedCallback_m3258152770 (VuforiaARController_t1876945237 * __this, Action_t1264377477 * p0, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaARController::UnregisterBeforeVuforiaTrackersInitializedCallback(System.Action)
extern "C" IL2CPP_METHOD_ATTR void VuforiaARController_UnregisterBeforeVuforiaTrackersInitializedCallback_m4235253672 (VuforiaARController_t1876945237 * __this, Action_t1264377477 * p0, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaARController::UnregisterVuforiaStartedCallback(System.Action)
extern "C" IL2CPP_METHOD_ATTR void VuforiaARController_UnregisterVuforiaStartedCallback_m3486105406 (VuforiaARController_t1876945237 * __this, Action_t1264377477 * p0, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaARController::UnregisterVuforiaInitializedCallback(System.Action)
extern "C" IL2CPP_METHOD_ATTR void VuforiaARController_UnregisterVuforiaInitializedCallback_m1653245485 (VuforiaARController_t1876945237 * __this, Action_t1264377477 * p0, const RuntimeMethod* method);
// Vuforia.DeviceTrackerARController Vuforia.DeviceTrackerARController::get_Instance()
extern "C" IL2CPP_METHOD_ATTR DeviceTrackerARController_t1095592542 * DeviceTrackerARController_get_Instance_m1618232027 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.DeviceTrackerARController::set_FusionProvider(Vuforia.FusionProviderType)
extern "C" IL2CPP_METHOD_ATTR void DeviceTrackerARController_set_FusionProvider_m2890695734 (DeviceTrackerARController_t1095592542 * __this, int32_t p0, const RuntimeMethod* method);
// Vuforia.ITrackerManager Vuforia.TrackerManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TrackerManager_get_Instance_m777262631 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTracker::GetActiveDataSets()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ObjectTracker_GetActiveDataSets_m254019146 (ObjectTracker_t4177997237 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Vuforia.DataSet>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t463142320 * Enumerable_ToList_TisDataSet_t3286034874_m1984750843 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  List_1_t463142320 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m1551499789_gshared)(__this /* static, unused */, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSet>::get_Count()
inline int32_t List_1_get_Count_m3978133574 (List_1_t463142320 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t463142320 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !!0 System.Linq.Enumerable::ElementAt<Vuforia.DataSet>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline DataSet_t3286034874 * Enumerable_ElementAt_TisDataSet_t3286034874_m1304043092 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  DataSet_t3286034874 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisRuntimeObject_m2579126540_gshared)(__this /* static, unused */, p0, p1, method);
}
// System.String Vuforia.DataSet::get_Path()
extern "C" IL2CPP_METHOD_ATTR String_t* DataSet_get_Path_m176743276 (DataSet_t3286034874 * __this, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m2676535141 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::TrimEnd(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_TrimEnd_m3824727301 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTracker::GetDataSets()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ObjectTracker_GetDataSets_m1245718448 (ObjectTracker_t4177997237 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Vuforia.DataSet>::GetEnumerator()
inline Enumerator_t2352386197  List_1_GetEnumerator_m6144716 (List_1_t463142320 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2352386197  (*) (List_1_t463142320 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Vuforia.DataSet>::get_Current()
inline DataSet_t3286034874 * Enumerator_get_Current_m1064371760 (Enumerator_t2352386197 * __this, const RuntimeMethod* method)
{
	return ((  DataSet_t3286034874 * (*) (Enumerator_t2352386197 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Boolean Vuforia.ObjectTracker::DeactivateDataSet(Vuforia.DataSet)
extern "C" IL2CPP_METHOD_ATTR bool ObjectTracker_DeactivateDataSet_m2094146088 (ObjectTracker_t4177997237 * __this, DataSet_t3286034874 * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.DataSet>::MoveNext()
inline bool Enumerator_MoveNext_m1234730920 (Enumerator_t2352386197 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2352386197 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.DataSet>::Dispose()
inline void Enumerator_Dispose_m1247034833 (Enumerator_t2352386197 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2352386197 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Boolean System.String::Contains(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Contains_m1147431944 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean Vuforia.ObjectTracker::ActivateDataSet(Vuforia.DataSet)
extern "C" IL2CPP_METHOD_ATTR bool ObjectTracker_ActivateDataSet_m3009523340 (ObjectTracker_t4177997237 * __this, DataSet_t3286034874 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vuforia.UserDefinedTargetBuildingBehaviour>()
inline UserDefinedTargetBuildingBehaviour_t4262637471 * Component_GetComponent_TisUserDefinedTargetBuildingBehaviour_t4262637471_m1010333672 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  UserDefinedTargetBuildingBehaviour_t4262637471 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void Vuforia.UserDefinedTargetBuildingBehaviour::RegisterEventHandler(Vuforia.IUserDefinedTargetEventHandler)
extern "C" IL2CPP_METHOD_ATTR void UserDefinedTargetBuildingBehaviour_RegisterEventHandler_m1268286979 (UserDefinedTargetBuildingBehaviour_t4262637471 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<FrameQualityMeter>()
inline FrameQualityMeter_t3206426345 * Object_FindObjectOfType_TisFrameQualityMeter_t3206426345_m1820019217 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  FrameQualityMeter_t3206426345 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<QualityDialog>()
inline QualityDialog_t529473262 * Object_FindObjectOfType_TisQualityDialog_t529473262_m1126594414 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  QualityDialog_t529473262 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t4083511760 * Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t4083511760 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m4032573 (CanvasGroup_t4083511760 * __this, float p0, const RuntimeMethod* method);
// Vuforia.DataSet Vuforia.ObjectTracker::CreateDataSet()
extern "C" IL2CPP_METHOD_ATTR DataSet_t3286034874 * ObjectTracker_CreateDataSet_m2328157034 (ObjectTracker_t4177997237 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void FrameQualityMeter::SetQuality(Vuforia.ImageTargetBuilder/FrameQuality)
extern "C" IL2CPP_METHOD_ATTR void FrameQualityMeter_SetQuality_m4084872956 (FrameQualityMeter_t3206426345 * __this, int32_t ___quality0, const RuntimeMethod* method);
// System.Boolean Vuforia.DataSet::HasReachedTrackableLimit()
extern "C" IL2CPP_METHOD_ATTR bool DataSet_HasReachedTrackableLimit_m2460030212 (DataSet_t3286034874 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable> Vuforia.DataSet::GetTrackables()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DataSet_GetTrackables_m881987140 (DataSet_t3286034874 * __this, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<Vuforia.Trackable>(System.Collections.Generic.IEnumerable`1<!!0>)
inline int32_t Enumerable_Count_TisTrackable_t2451999991_m3490415887 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_m119961155_gshared)(__this /* static, unused */, p0, method);
}
// System.Boolean Vuforia.DataSet::Destroy(Vuforia.Trackable,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool DataSet_Destroy_m600486554 (DataSet_t3286034874 * __this, RuntimeObject* p0, bool p1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<Vuforia.ImageTargetBehaviour>(!!0)
inline ImageTargetBehaviour_t2200418350 * Object_Instantiate_TisImageTargetBehaviour_t2200418350_m3631208717 (RuntimeObject * __this /* static, unused */, ImageTargetBehaviour_t2200418350 * p0, const RuntimeMethod* method)
{
	return ((  ImageTargetBehaviour_t2200418350 * (*) (RuntimeObject * /* static, unused */, ImageTargetBehaviour_t2200418350 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method);
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSet::CreateTrackable(Vuforia.TrackableSource,UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR DataSetTrackableBehaviour_t3430730379 * DataSet_CreateTrackable_m4008898237 (DataSet_t3286034874 * __this, TrackableSource_t2567074243 * p0, GameObject_t1113636619 * p1, const RuntimeMethod* method);
// System.Void Vuforia.UserDefinedTargetBuildingBehaviour::StartScanning()
extern "C" IL2CPP_METHOD_ATTR void UserDefinedTargetBuildingBehaviour_StartScanning_m1809448542 (UserDefinedTargetBuildingBehaviour_t4262637471 * __this, const RuntimeMethod* method);
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C" IL2CPP_METHOD_ATTR String_t* TrackableBehaviour_get_TrackableName_m3644057705 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// UnityEngine.Vector2 Vuforia.ImageTargetBehaviour::GetSize()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  ImageTargetBehaviour_GetSize_m918629909 (ImageTargetBehaviour_t2200418350 * __this, const RuntimeMethod* method);
// System.Void Vuforia.UserDefinedTargetBuildingBehaviour::BuildNewTarget(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UserDefinedTargetBuildingBehaviour_BuildNewTarget_m3446238104 (UserDefinedTargetBuildingBehaviour_t4262637471 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m3328507247 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UDTEventHandler::FadeOutQualityDialog()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UDTEventHandler_FadeOutQualityDialog_m980690163 (UDTEventHandler_t2349357857 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeOutQualityDialogU3Ec__Iterator0__ctor_m3719441343 (U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// System.Double System.Math::Round(System.Double,System.Int32)
extern "C" IL2CPP_METHOD_ATTR double Math_Round_m3279303474 (RuntimeObject * __this /* static, unused */, double p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
extern "C" IL2CPP_METHOD_ATTR float Time_get_timeSinceLevelLoad_m2224611026 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
extern "C" IL2CPP_METHOD_ATTR void Application_OpenURL_m738341736 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String URL::MyEscapeURL(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* URL_MyEscapeURL_m3517090145 (URL_t2492693491 * __this, String_t* ___url0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method);
// System.String UnityEngine.WWW::EscapeURL(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WWW_EscapeURL_m4251687403 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// Vuforia.VuforiaManager Vuforia.VuforiaManager::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaManager_t1653423889 * VuforiaManager_get_Instance_m100367560 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Transform Vuforia.VuforiaManager::get_ARCameraTransform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * VuforiaManager_get_ARCameraTransform_m958890547 (VuforiaManager_t1653423889 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_LookRotation_m4040767668 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
inline RendererU5BU5D_t3210418286* GameObject_GetComponentsInChildren_TisRenderer_t2627027031_m551606854 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t3210418286* (*) (GameObject_t1113636619 *, bool, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m836045_gshared)(__this, p0, method);
}
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
inline ColliderU5BU5D_t4234922487* GameObject_GetComponentsInChildren_TisCollider_t1773347010_m248290622 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t4234922487* (*) (GameObject_t1113636619 *, bool, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m836045_gshared)(__this, p0, method);
}
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Canvas>(System.Boolean)
inline CanvasU5BU5D_t682926938* GameObject_GetComponentsInChildren_TisCanvas_t3310196443_m2470993954 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  CanvasU5BU5D_t682926938* (*) (GameObject_t1113636619 *, bool, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m836045_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_t1683042537 * Component_GetComponent_TisVideoPlayer_t1683042537_m3779405067 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t1683042537 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ErrorEventHandler__ctor_m1187192887 (ErrorEventHandler_t3211687919 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::add_errorReceived(UnityEngine.Video.VideoPlayer/ErrorEventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_add_errorReceived_m2181459651 (VideoPlayer_t1683042537 * __this, ErrorEventHandler_t3211687919 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventHandler__ctor_m838423014 (EventHandler_t3436254912 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::add_started(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_add_started_m2669566181 (VideoPlayer_t1683042537 * __this, EventHandler_t3436254912 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::add_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_add_prepareCompleted_m1550584085 (VideoPlayer_t1683042537 * __this, EventHandler_t3436254912 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::add_seekCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_add_seekCompleted_m3856154777 (VideoPlayer_t1683042537 * __this, EventHandler_t3436254912 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::add_loopPointReached(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_add_loopPointReached_m2286553779 (VideoPlayer_t1683042537 * __this, EventHandler_t3436254912 * p0, const RuntimeMethod* method);
// System.Void VideoController::LogClipInfo()
extern "C" IL2CPP_METHOD_ATTR void VideoController_LogClipInfo_m4268250143 (VideoController_t2238106033 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_m2729754655 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method);
// System.Void VideoController::ShowPlayButton(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoController_ShowPlayButton_m3344188228 (VideoController_t2238106033 * __this, bool ___enable0, const RuntimeMethod* method);
// System.UInt64 UnityEngine.Video.VideoPlayer::get_frameCount()
extern "C" IL2CPP_METHOD_ATTR uint64_t VideoPlayer_get_frameCount_m1587673510 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.Video.VideoPlayer::get_frame()
extern "C" IL2CPP_METHOD_ATTR int64_t VideoPlayer_get_frame_m2640481317 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RectTransform_get_sizeDelta_m2183112744 (RectTransform_t3704657025 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m3462269772 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void VideoController::Pause()
extern "C" IL2CPP_METHOD_ATTR void VideoController_Pause_m3562938676 (VideoController_t2238106033 * __this, const RuntimeMethod* method);
// System.Void VideoController::PauseAudio(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoController_PauseAudio_m48819413 (VideoController_t2238106033 * __this, bool ___pause0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Play()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Play_m1850501814 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Pause()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m3396579194 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method);
// UnityEngine.AudioSource UnityEngine.Video.VideoPlayer::GetTargetAudioSource(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR AudioSource_t3935305588 * VideoPlayer_GetTargetAudioSource_m1866987013 (VideoPlayer_t1683042537 * __this, uint16_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Pause()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Pause_m1501822765 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::UnPause()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_UnPause_m3033034686 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Video.VideoPlayer::get_audioTrackCount()
extern "C" IL2CPP_METHOD_ATTR uint16_t VideoPlayer_get_audioTrackCount_m920587642 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t2670269651 * Component_GetComponent_TisImage_t2670269651_m980647750 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Video.VideoClip UnityEngine.Video.VideoPlayer::get_clip()
extern "C" IL2CPP_METHOD_ATTR VideoClip_t1281919028 * VideoPlayer_get_clip_m4248196588 (VideoPlayer_t1683042537 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Video.VideoClip::get_audioTrackCount()
extern "C" IL2CPP_METHOD_ATTR uint16_t VideoClip_get_audioTrackCount_m2589462220 (VideoClip_t1281919028 * __this, const RuntimeMethod* method);
// System.UInt64 UnityEngine.Video.VideoClip::get_frameCount()
extern "C" IL2CPP_METHOD_ATTR uint64_t VideoClip_get_frameCount_m2780265243 (VideoClip_t1281919028 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Video.VideoClip::get_frameRate()
extern "C" IL2CPP_METHOD_ATTR double VideoClip_get_frameRate_m2596851112 (VideoClip_t1281919028 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Video.VideoClip::get_height()
extern "C" IL2CPP_METHOD_ATTR uint32_t VideoClip_get_height_m2730473917 (VideoClip_t1281919028 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Video.VideoClip::get_width()
extern "C" IL2CPP_METHOD_ATTR uint32_t VideoClip_get_width_m734887625 (VideoClip_t1281919028 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Video.VideoClip::get_length()
extern "C" IL2CPP_METHOD_ATTR double VideoClip_get_length_m3416669259 (VideoClip_t1281919028 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Video.VideoClip::get_originalPath()
extern "C" IL2CPP_METHOD_ATTR String_t* VideoClip_get_originalPath_m2321686979 (VideoClip_t1281919028 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Void DefaultTrackableEventHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler__ctor_m1782586389 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<VideoController>()
inline VideoController_t2238106033 * Component_GetComponentInChildren_TisVideoController_t2238106033_m1753125609 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  VideoController_t2238106033 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method);
}
// System.Void VideoController::Play()
extern "C" IL2CPP_METHOD_ATTR void VideoController_Play_m3654523600 (VideoController_t2238106033 * __this, const RuntimeMethod* method);
// System.Void DefaultTrackableEventHandler::OnTrackingFound()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackingFound_m2146197130 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method);
// System.Void DefaultTrackableEventHandler::OnTrackingLost()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackingLost_m2776455481 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<Vuforia.VirtualButtonBehaviour>()
inline VirtualButtonBehaviourU5BU5D_t2153394082* Component_GetComponentsInChildren_TisVirtualButtonBehaviour_t1436326451_m4196814779 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  VirtualButtonBehaviourU5BU5D_t2153394082* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1664944732_gshared)(__this, method);
}
// System.Void Vuforia.VirtualButtonBehaviour::RegisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C" IL2CPP_METHOD_ATTR void VirtualButtonBehaviour_RegisterEventHandler_m1227097985 (VirtualButtonBehaviour_t1436326451 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String Vuforia.VirtualButtonBehaviour::get_VirtualButtonName()
extern "C" IL2CPP_METHOD_ATTR String_t* VirtualButtonBehaviour_get_VirtualButtonName_m3664540626 (VirtualButtonBehaviour_t1436326451 * __this, const RuntimeMethod* method);
// System.Void VirtualButtonEventHandler::SetVirtualButtonMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void VirtualButtonEventHandler_SetVirtualButtonMaterial_m447769224 (VirtualButtonEventHandler_t1548763206 * __this, Material_t340375123 * ___material0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" IL2CPP_METHOD_ATTR void Component_BroadcastMessage_m2662892479 (Component_t1923634451 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Collections.IEnumerator VirtualButtonEventHandler::DelayOnButtonReleasedEvent(System.Single,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VirtualButtonEventHandler_DelayOnButtonReleasedEvent_m751776769 (VirtualButtonEventHandler_t1548763206 * __this, float ___waitTime0, String_t* ___buttonName1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t587009260 * Component_GetComponent_TisMeshRenderer_t587009260_m3511415476 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t587009260 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m2374163090 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// System.Void VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDelayOnButtonReleasedEventU3Ec__Iterator0__ctor_m323425389 (U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297 * __this, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaConfiguration_t1763229349 * VuforiaConfiguration_get_Instance_m3335903280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::get_Vuforia()
extern "C" IL2CPP_METHOD_ATTR GenericVuforiaConfiguration_t3697830469 * VuforiaConfiguration_get_Vuforia_m1588208597 (VuforiaConfiguration_t1763229349 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_MaxSimultaneousImageTargets(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_MaxSimultaneousImageTargets_m2987003833 (GenericVuforiaConfiguration_t3697830469 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>::.ctor()
inline void Dictionary_2__ctor_m2275355514 (Dictionary_2_t3625702484 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3625702484 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m19875156 (Dictionary_2_t898892918 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t898892918 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Add(!0,!1)
inline void Dictionary_2_Add_m1235394044 (Dictionary_2_t898892918 * __this, String_t* p0, GameObject_t1113636619 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t898892918 *, String_t*, GameObject_t1113636619 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<Vuforia.VuMarkBehaviour>()
inline VuMarkBehaviour_t1178230459 * Object_FindObjectOfType_TisVuMarkBehaviour_t1178230459_m2803750251 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  VuMarkBehaviour_t1178230459 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method);
}
// System.Void VuMarkHandler::ToggleRenderers(UnityEngine.GameObject,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_ToggleRenderers_m2154168747 (VuMarkHandler_t1415762101 * __this, GameObject_t1113636619 * ___obj0, bool ___enable1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<PanelShowHide>()
inline PanelShowHide_t3128188850 * Object_FindObjectOfType_TisPanelShowHide_t3128188850_m4107511304 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  PanelShowHide_t3128188850 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m1542987838_gshared)(__this /* static, unused */, method);
}
// System.Void VuMarkHandler::UpdateClosestTarget()
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_UpdateClosestTarget_m1555317948 (VuMarkHandler_t1415762101 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.VuMarkBehaviour>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2885317269 (Action_1_t1350698054 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1350698054 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Void Vuforia.VuMarkManager::UnregisterVuMarkBehaviourDetectedCallback(System.Action`1<Vuforia.VuMarkBehaviour>)
extern "C" IL2CPP_METHOD_ATTR void VuMarkManager_UnregisterVuMarkBehaviourDetectedCallback_m3907295535 (VuMarkManager_t2982459596 * __this, Action_1_t1350698054 * p0, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.VuMarkTarget>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4047871495 (Action_1_t1302041398 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1302041398 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Void Vuforia.VuMarkManager::UnregisterVuMarkDetectedCallback(System.Action`1<Vuforia.VuMarkTarget>)
extern "C" IL2CPP_METHOD_ATTR void VuMarkManager_UnregisterVuMarkDetectedCallback_m2762130345 (VuMarkManager_t2982459596 * __this, Action_1_t1302041398 * p0, const RuntimeMethod* method);
// System.Void Vuforia.VuMarkManager::UnregisterVuMarkLostCallback(System.Action`1<Vuforia.VuMarkTarget>)
extern "C" IL2CPP_METHOD_ATTR void VuMarkManager_UnregisterVuMarkLostCallback_m2291705850 (VuMarkManager_t2982459596 * __this, Action_1_t1302041398 * p0, const RuntimeMethod* method);
// Vuforia.VuMarkManager Vuforia.StateManager::GetVuMarkManager()
extern "C" IL2CPP_METHOD_ATTR VuMarkManager_t2982459596 * StateManager_GetVuMarkManager_m2413626463 (StateManager_t1982749557 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VuMarkManager::RegisterVuMarkBehaviourDetectedCallback(System.Action`1<Vuforia.VuMarkBehaviour>)
extern "C" IL2CPP_METHOD_ATTR void VuMarkManager_RegisterVuMarkBehaviourDetectedCallback_m3839577247 (VuMarkManager_t2982459596 * __this, Action_1_t1350698054 * p0, const RuntimeMethod* method);
// System.Void Vuforia.VuMarkManager::RegisterVuMarkDetectedCallback(System.Action`1<Vuforia.VuMarkTarget>)
extern "C" IL2CPP_METHOD_ATTR void VuMarkManager_RegisterVuMarkDetectedCallback_m716813355 (VuMarkManager_t2982459596 * __this, Action_1_t1302041398 * p0, const RuntimeMethod* method);
// System.Void Vuforia.VuMarkManager::RegisterVuMarkLostCallback(System.Action`1<Vuforia.VuMarkTarget>)
extern "C" IL2CPP_METHOD_ATTR void VuMarkManager_RegisterVuMarkLostCallback_m902340585 (VuMarkManager_t2982459596 * __this, Action_1_t1302041398 * p0, const RuntimeMethod* method);
// System.Void VuMarkHandler::GenerateVuMarkBorderOutline(Vuforia.VuMarkBehaviour)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_GenerateVuMarkBorderOutline_m2061814309 (VuMarkHandler_t1415762101 * __this, VuMarkBehaviour_t1178230459 * ___vumarkBehaviour0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void VuMarkHandler::DestroyChildAugmentationsOfTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_DestroyChildAugmentationsOfTransform_m3294511784 (VuMarkHandler_t1415762101 * __this, Transform_t3600365921 * ___parent0, const RuntimeMethod* method);
// System.Collections.IEnumerator VuMarkHandler::OnVuMarkTargetAvailable(Vuforia.VuMarkBehaviour)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuMarkHandler_OnVuMarkTargetAvailable_m27070708 (VuMarkHandler_t1415762101 * __this, VuMarkBehaviour_t1178230459 * ___vumarkBehaviour0, const RuntimeMethod* method);
// System.Void VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3COnVuMarkTargetAvailableU3Ec__Iterator0__ctor_m2268601434 (U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * __this, const RuntimeMethod* method);
// System.String VuMarkHandler::GetVuMarkId(Vuforia.VuMarkTarget)
extern "C" IL2CPP_METHOD_ATTR String_t* VuMarkHandler_GetVuMarkId_m2242633984 (VuMarkHandler_t1415762101 * __this, RuntimeObject* ___vumarkTarget0, const RuntimeMethod* method);
// UnityEngine.Texture2D VuMarkHandler::RetrieveStoredTextureForVuMarkTarget(Vuforia.VuMarkTarget)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * VuMarkHandler_RetrieveStoredTextureForVuMarkTarget_m3023601945 (VuMarkHandler_t1415762101 * __this, RuntimeObject* ___vumarkTarget0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.Texture2D VuMarkHandler::GenerateTextureFromVuMarkInstanceImage(Vuforia.VuMarkTarget)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * VuMarkHandler_GenerateTextureFromVuMarkInstanceImage_m2453209064 (VuMarkHandler_t1415762101 * __this, RuntimeObject* ___vumarkTarget0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>::Add(!0,!1)
inline void Dictionary_2_Add_m1828178762 (Dictionary_2_t3625702484 * __this, String_t* p0, Texture2D_t3840446185 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3625702484 *, String_t*, Texture2D_t3840446185 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method);
}
// System.Void PanelShowHide::ResetShowTrigger()
extern "C" IL2CPP_METHOD_ATTR void PanelShowHide_ResetShowTrigger_m404940343 (PanelShowHide_t3128188850 * __this, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m1529093114 (uint64_t* __this, const RuntimeMethod* method);
// System.Int32 Vuforia.Image::get_Width()
extern "C" IL2CPP_METHOD_ATTR int32_t Image_get_Width_m3459292501 (Image_t745056343 * __this, const RuntimeMethod* method);
// System.Int32 Vuforia.Image::get_Height()
extern "C" IL2CPP_METHOD_ATTR int32_t Image_get_Height_m1593747350 (Image_t745056343 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m587872754 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Vuforia.Image::CopyToTexture(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void Image_CopyToTexture_m524838193 (Image_t745056343 * __this, Texture2D_t3840446185 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Sprite_t280657092 * Sprite_Create_m803022218 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * p0, Rect_t2360479859  p1, Vector2_t2156229523  p2, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Int32_TryParse_m2404707562 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t* p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t1901882714 * GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Text_t1901882714 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared)(__this, method);
}
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.UI.Image>()
inline ImageU5BU5D_t2439009922* GameObject_GetComponentsInChildren_TisImage_t2670269651_m3275015851 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  ImageU5BU5D_t2439009922* (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m1461871634_gshared)(__this, method);
}
// Vuforia.VuMarkTarget Vuforia.VuMarkBehaviour::get_VuMarkTarget()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuMarkBehaviour_get_VuMarkTarget_m1232437050 (VuMarkBehaviour_t1178230459 * __this, const RuntimeMethod* method);
// System.String VuMarkHandler::GetVuMarkDataType(Vuforia.VuMarkTarget)
extern "C" IL2CPP_METHOD_ATTR String_t* VuMarkHandler_GetVuMarkDataType_m4036864623 (VuMarkHandler_t1415762101 * __this, RuntimeObject* ___vumarkTarget0, const RuntimeMethod* method);
// System.String VuMarkHandler::GetNumericVuMarkDescription(Vuforia.VuMarkTarget)
extern "C" IL2CPP_METHOD_ATTR String_t* VuMarkHandler_GetNumericVuMarkDescription_m384725732 (VuMarkHandler_t1415762101 * __this, RuntimeObject* ___vumarkTarget0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR void Image_set_sprite_m2369174689 (Image_t2670269651 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method);
// T VuMarkHandler::GetValueFromDictionary<UnityEngine.GameObject>(System.Collections.Generic.Dictionary`2<System.String,T>,System.String)
inline GameObject_t1113636619 * VuMarkHandler_GetValueFromDictionary_TisGameObject_t1113636619_m3240415858 (VuMarkHandler_t1415762101 * __this, Dictionary_2_t898892918 * ___dictionary0, String_t* ___key1, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (VuMarkHandler_t1415762101 *, Dictionary_2_t898892918 *, String_t*, const RuntimeMethod*))VuMarkHandler_GetValueFromDictionary_TisRuntimeObject_m777203487_gshared)(__this, ___dictionary0, ___key1, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m4070250708 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m381167889 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::get_DigitalEyewear()
extern "C" IL2CPP_METHOD_ATTR DigitalEyewearConfiguration_t546560202 * VuforiaConfiguration_get_DigitalEyewear_m2721108911 (VuforiaConfiguration_t1763229349 * __this, const RuntimeMethod* method);
// Vuforia.DigitalEyewearARController/SeeThroughConfiguration Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::get_SeeThroughConfiguration()
extern "C" IL2CPP_METHOD_ATTR int32_t DigitalEyewearConfiguration_get_SeeThroughConfiguration_m4233842437 (DigitalEyewearConfiguration_t546560202 * __this, const RuntimeMethod* method);
// Vuforia.VuMarkTemplate Vuforia.VuMarkBehaviour::get_VuMarkTemplate()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuMarkBehaviour_get_VuMarkTemplate_m3771121130 (VuMarkBehaviour_t1178230459 * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void Material_set_mainTexture_m544811714 (Material_t340375123 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method);
// T VuMarkHandler::GetValueFromDictionary<UnityEngine.Texture2D>(System.Collections.Generic.Dictionary`2<System.String,T>,System.String)
inline Texture2D_t3840446185 * VuMarkHandler_GetValueFromDictionary_TisTexture2D_t3840446185_m224541793 (VuMarkHandler_t1415762101 * __this, Dictionary_2_t3625702484 * ___dictionary0, String_t* ___key1, const RuntimeMethod* method)
{
	return ((  Texture2D_t3840446185 * (*) (VuMarkHandler_t1415762101 *, Dictionary_2_t3625702484 *, String_t*, const RuntimeMethod*))VuMarkHandler_GetValueFromDictionary_TisRuntimeObject_m777203487_gshared)(__this, ___dictionary0, ___key1, method);
}
// UnityEngine.Texture2D VuMarkHandler::FlipTextureY(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * VuMarkHandler_FlipTextureY_m40679181 (VuMarkHandler_t1415762101 * __this, Texture2D_t3840446185 * ___sourceTexture0, const RuntimeMethod* method);
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_m2371899271 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern "C" IL2CPP_METHOD_ATTR ColorU5BU5D_t941916413* Texture2D_GetPixels_m2081641574 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m3008871897 (Texture2D_t3840446185 * __this, ColorU5BU5D_t941916413* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.LineRenderer>()
inline LineRenderer_t3154350270 * Component_GetComponentInChildren_TisLineRenderer_t3154350270_m2269411787 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t3154350270 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t3154350270 * GameObject_AddComponent_TisLineRenderer_t3154350270_m2920077551 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t3154350270 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_m987547713 (Renderer_t2627027031 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_m108599289 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * Shader_Find_m2092206247 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
extern "C" IL2CPP_METHOD_ATTR void Material_set_shader_m1402562841 (Material_t340375123 * __this, Shader_t4151988712 * p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_clear_m1016382534 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_set_color_m1794818007 (Material_t340375123 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2226639690 (LineRenderer_t3154350270 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_loop(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_set_loop_m763714369 (LineRenderer_t3154350270 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_useWorldSpace(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_set_useWorldSpace_m2472758901 (LineRenderer_t3154350270 * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.Vector2 Vuforia.VuMarkBehaviour::GetSize()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  VuMarkBehaviour_GetSize_m676031065 (VuMarkBehaviour_t1178230459 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m3000526466 (AnimationCurve_t3046754366 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::AddKey(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationCurve_AddKey_m468722315 (AnimationCurve_t3046754366 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_widthCurve(UnityEngine.AnimationCurve)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_set_widthCurve_m3548866059 (LineRenderer_t3154350270 * __this, AnimationCurve_t3046754366 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_widthMultiplier(System.Single)
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_set_widthMultiplier_m1516990663 (LineRenderer_t3154350270 * __this, float p0, const RuntimeMethod* method);
// System.Single UnityEngine.LineRenderer::get_widthMultiplier()
extern "C" IL2CPP_METHOD_ATTR float LineRenderer_get_widthMultiplier_m3961509070 (LineRenderer_t3154350270 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m1969530996 (LineRenderer_t3154350270 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsVuforiaEnabled()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaARController::get_HasStarted()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaARController_get_HasStarted_m4199565299 (VuforiaARController_t1876945237 * __this, const RuntimeMethod* method);
// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::get_Instance()
extern "C" IL2CPP_METHOD_ATTR DigitalEyewearARController_t1054226036 * DigitalEyewearARController_get_Instance_m3573866503 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Camera Vuforia.DigitalEyewearARController::get_PrimaryCamera()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * DigitalEyewearARController_get_PrimaryCamera_m3122713263 (DigitalEyewearARController_t1054226036 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkBehaviour> Vuforia.VuMarkManager::GetActiveBehaviours()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuMarkManager_GetActiveBehaviours_m542308065 (VuMarkManager_t2982459596 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_InverseTransformPoint_m1343916000 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Sprite VuMarkHandler::GetVuMarkImage(Vuforia.VuMarkTarget)
extern "C" IL2CPP_METHOD_ATTR Sprite_t280657092 * VuMarkHandler_GetVuMarkImage_m1022510546 (VuMarkHandler_t1415762101 * __this, RuntimeObject* ___vumarkTarget0, const RuntimeMethod* method);
// System.Collections.IEnumerator VuMarkHandler::ShowPanelAfter(System.Single,System.String,System.String,System.String,UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuMarkHandler_ShowPanelAfter_m629699576 (VuMarkHandler_t1415762101 * __this, float ___seconds0, String_t* ___vuMarkId1, String_t* ___vuMarkDataType2, String_t* ___vuMarkDesc3, Sprite_t280657092 * ___vuMarkImage4, const RuntimeMethod* method);
// System.Void VuMarkHandler/<ShowPanelAfter>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CShowPanelAfterU3Ec__Iterator1__ctor_m1273935106 (U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * __this, const RuntimeMethod* method);
// System.Void VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0/<OnVuMarkTargetAvailable>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3COnVuMarkTargetAvailableU3Ec__AnonStorey2__ctor_m859336308 (U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m1399073142 (Func_1_t3822001908 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t3822001908 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m1399073142_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4227046299 (WaitUntil_t3373419216 * __this, Func_1_t3822001908 * p0, const RuntimeMethod* method);
// System.Void VuMarkHandler::SetVuMarkInfoForCanvas(Vuforia.VuMarkBehaviour)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_SetVuMarkInfoForCanvas_m2305932128 (VuMarkHandler_t1415762101 * __this, VuMarkBehaviour_t1178230459 * ___vumarkBehaviour0, const RuntimeMethod* method);
// System.Void VuMarkHandler::SetVuMarkAugmentation(Vuforia.VuMarkBehaviour)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_SetVuMarkAugmentation_m3922064865 (VuMarkHandler_t1415762101 * __this, VuMarkBehaviour_t1178230459 * ___vumarkBehaviour0, const RuntimeMethod* method);
// System.Void VuMarkHandler::SetVuMarkOpticalSeeThroughConfig(Vuforia.VuMarkBehaviour)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_SetVuMarkOpticalSeeThroughConfig_m1191219436 (VuMarkHandler_t1415762101 * __this, VuMarkBehaviour_t1178230459 * ___vumarkBehaviour0, const RuntimeMethod* method);
// System.Void PanelShowHide::Show(System.String,System.String,System.String,UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR void PanelShowHide_Show_m23709963 (PanelShowHide_t3128188850 * __this, String_t* ___vuMarkId0, String_t* ___vuMarkDataType1, String_t* ___vuMarkDesc2, Sprite_t280657092 * ___vuMarkImage3, const RuntimeMethod* method);
// System.Void DefaultTrackableEventHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_Start_m3259365141 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.CanvasGroup>()
inline CanvasGroup_t4083511760 * Component_GetComponentInChildren_TisCanvasGroup_t4083511760_m2486821986 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t4083511760 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method);
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
extern "C" IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsPlayMode_m4165764373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Vuforia.VuMarkBehaviour::RegisterVuMarkTargetAssignedCallback(System.Action)
extern "C" IL2CPP_METHOD_ATTR void VuMarkBehaviour_RegisterVuMarkTargetAssignedCallback_m1826723177 (VuMarkBehaviour_t1178230459 * __this, Action_t1264377477 * p0, const RuntimeMethod* method);
// System.Void Vuforia.VuMarkBehaviour::RegisterVuMarkTargetLostCallback(System.Action)
extern "C" IL2CPP_METHOD_ATTR void VuMarkBehaviour_RegisterVuMarkTargetLostCallback_m850959739 (VuMarkBehaviour_t1178230459 * __this, Action_t1264377477 * p0, const RuntimeMethod* method);
// UnityEngine.Transform Vuforia.VuforiaManager::get_CentralAnchorPoint()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * VuforiaManager_get_CentralAnchorPoint_m3160918874 (VuforiaManager_t1653423889 * __this, const RuntimeMethod* method);
// System.Void VuMarkTrackableEventHandler::DestroyChildAugmentationsOfTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler_DestroyChildAugmentationsOfTransform_m3112459060 (VuMarkTrackableEventHandler_t4082851918 * __this, Transform_t3600365921 * ___parent0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m1220035214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void VuMarkTrackableEventHandler::UpdateVuMarkBorderOutline()
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler_UpdateVuMarkBorderOutline_m3636685738 (VuMarkTrackableEventHandler_t4082851918 * __this, const RuntimeMethod* method);
// System.Void VuMarkTrackableEventHandler::UpdateCanvasFadeAmount()
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler_UpdateCanvasFadeAmount_m1272505830 (VuMarkTrackableEventHandler_t4082851918 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Renderer::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Renderer_get_enabled_m3482452518 (Renderer_t2627027031 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_cyan_m765383084 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m4155825980 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SamplesNavigationHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SamplesNavigationHandler__ctor_m1741225309 (SamplesNavigationHandler_t3426315339 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SamplesNavigationHandler::OnStartAR()
extern "C" IL2CPP_METHOD_ATTR void SamplesNavigationHandler_OnStartAR_m2510147401 (SamplesNavigationHandler_t3426315339 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SamplesNavigationHandler_OnStartAR_m2510147401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SamplesMainMenu_t83803002_il2cpp_TypeInfo_var);
		SamplesMainMenu_LoadScene_m3673144432(NULL /*static, unused*/, _stringLiteral1518049465, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SamplesNavigationHandler::LoadMenuScene()
extern "C" IL2CPP_METHOD_ATTR void SamplesNavigationHandler_LoadMenuScene_m1027968060 (SamplesNavigationHandler_t3426315339 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SamplesNavigationHandler_LoadMenuScene_m1027968060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SamplesMainMenu_t83803002_il2cpp_TypeInfo_var);
		SamplesMainMenu_LoadScene_m3673144432(NULL /*static, unused*/, _stringLiteral1604074356, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SamplesNavigationHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void SamplesNavigationHandler_Start_m377166931 (SamplesNavigationHandler_t3426315339 * __this, const RuntimeMethod* method)
{
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Scene_t2348375561  L_0 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Scene_get_name_m622963475((Scene_t2348375561 *)(&V_0), /*hidden argument*/NULL);
		__this->set_currentSceneName_4(L_1);
		return;
	}
}
// System.Void SamplesNavigationHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void SamplesNavigationHandler_Update_m3351681299 (SamplesNavigationHandler_t3426315339 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneOrientation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SceneOrientation__ctor_m757546840 (SceneOrientation_t160940122 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneOrientation::Awake()
extern "C" IL2CPP_METHOD_ATTR void SceneOrientation_Awake_m312532647 (SceneOrientation_t160940122 * __this, const RuntimeMethod* method)
{
	{
		SceneOrientation_SetSceneOrientation_m1795771586(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneOrientation::SetSceneOrientation()
extern "C" IL2CPP_METHOD_ATTR void SceneOrientation_SetSceneOrientation_m1795771586 (SceneOrientation_t160940122 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_sceneOrientation_4();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0041;
	}

IL_0020:
	{
		Screen_set_orientation_m3561207030(NULL /*static, unused*/, 5, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_002b:
	{
		Screen_set_orientation_m3561207030(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0036:
	{
		Screen_set_orientation_m3561207030(NULL /*static, unused*/, 3, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0041:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneSwitchers::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SceneSwitchers__ctor_m187380698 (SceneSwitchers_t1869753645 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneSwitchers::SwitchtoAlice()
extern "C" IL2CPP_METHOD_ATTR void SceneSwitchers_SwitchtoAlice_m772076356 (SceneSwitchers_t1869753645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneSwitchers_SwitchtoAlice_m772076356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral3587629840, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneSwitchers::SwitchtoHillel()
extern "C" IL2CPP_METHOD_ATTR void SceneSwitchers_SwitchtoHillel_m838625315 (SceneSwitchers_t1869753645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneSwitchers_SwitchtoHillel_m838625315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral27616695, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneSwitchers::SwitchtoSaltofHeaven()
extern "C" IL2CPP_METHOD_ATTR void SceneSwitchers_SwitchtoSaltofHeaven_m2622232066 (SceneSwitchers_t1869753645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneSwitchers_SwitchtoSaltofHeaven_m2622232066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral2320172621, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneSwitchers::SwitchtoPaving()
extern "C" IL2CPP_METHOD_ATTR void SceneSwitchers_SwitchtoPaving_m1391191236 (SceneSwitchers_t1869753645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneSwitchers_SwitchtoPaving_m1391191236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral366052538, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneSwitchers::SwitchtoMontessori()
extern "C" IL2CPP_METHOD_ATTR void SceneSwitchers_SwitchtoMontessori_m3652170433 (SceneSwitchers_t1869753645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneSwitchers_SwitchtoMontessori_m3652170433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1565518172, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneSwitchers::SwitchtoUCF()
extern "C" IL2CPP_METHOD_ATTR void SceneSwitchers_SwitchtoUCF_m3182087219 (SceneSwitchers_t1869753645 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneSwitchers_SwitchtoUCF_m3182087219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral3005784759, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TapHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TapHandler__ctor_m1076312137 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TapHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void TapHandler_Start_m554074027 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_Start_m554074027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mTapCount_8(0);
		__this->set_mTimeSinceLastTap_5((0.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		MenuOptions_t1951716431 * L_0 = Object_FindObjectOfType_TisMenuOptions_t1951716431_m1050906446(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisMenuOptions_t1951716431_m1050906446_RuntimeMethod_var);
		__this->set_m_MenuOptions_6(L_0);
		CameraSettings_t3152619780 * L_1 = Object_FindObjectOfType_TisCameraSettings_t3152619780_m4203198741(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisCameraSettings_t3152619780_m4203198741_RuntimeMethod_var);
		__this->set_m_CameraSettings_7(L_1);
		return;
	}
}
// System.Void TapHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void TapHandler_Update_m2328515667 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_Update_m2328515667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MenuOptions_t1951716431 * L_0 = __this->get_m_MenuOptions_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		MenuOptions_t1951716431 * L_2 = __this->get_m_MenuOptions_6();
		NullCheck(L_2);
		bool L_3 = MenuOptions_get_IsDisplayed_m700004988(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		__this->set_mTapCount_8(0);
		__this->set_mTimeSinceLastTap_5((0.0f));
		goto IL_003d;
	}

IL_0037:
	{
		TapHandler_HandleTap_m1322678531(__this, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void TapHandler::HandleTap()
extern "C" IL2CPP_METHOD_ATTR void TapHandler_HandleTap_m1322678531 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_HandleTap_m1322678531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_mTapCount_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		float L_1 = __this->get_mTimeSinceLastTap_5();
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_mTimeSinceLastTap_5(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		float L_3 = __this->get_mTimeSinceLastTap_5();
		if ((!(((float)L_3) > ((float)(0.5f)))))
		{
			goto IL_0046;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void TapHandler::OnSingleTapConfirmed() */, __this);
		__this->set_mTapCount_8(0);
		__this->set_mTimeSinceLastTap_5((0.0f));
	}

IL_0046:
	{
		goto IL_006f;
	}

IL_004b:
	{
		int32_t L_4 = __this->get_mTapCount_8();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_006f;
		}
	}
	{
		VirtActionInvoker0::Invoke(6 /* System.Void TapHandler::OnDoubleTap() */, __this);
		__this->set_mTimeSinceLastTap_5((0.0f));
		__this->set_mTapCount_8(0);
	}

IL_006f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetMouseButtonUp_m2924350851(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_6 = __this->get_mTapCount_8();
		__this->set_mTapCount_8(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		int32_t L_7 = __this->get_mTapCount_8();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_009a;
		}
	}
	{
		VirtActionInvoker0::Invoke(4 /* System.Void TapHandler::OnSingleTap() */, __this);
	}

IL_009a:
	{
		return;
	}
}
// System.Void TapHandler::OnSingleTap()
extern "C" IL2CPP_METHOD_ATTR void TapHandler_OnSingleTap_m3625150319 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TapHandler::OnSingleTapConfirmed()
extern "C" IL2CPP_METHOD_ATTR void TapHandler_OnSingleTapConfirmed_m3372274260 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_OnSingleTapConfirmed_m3372274260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CameraSettings_t3152619780 * L_0 = __this->get_m_CameraSettings_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		CameraSettings_t3152619780 * L_2 = __this->get_m_CameraSettings_7();
		NullCheck(L_2);
		CameraSettings_TriggerAutofocusEvent_m898525935(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void TapHandler::OnDoubleTap()
extern "C" IL2CPP_METHOD_ATTR void TapHandler_OnDoubleTap_m2928608177 (TapHandler_t334234343 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapHandler_OnDoubleTap_m2928608177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MenuOptions_t1951716431 * L_0 = __this->get_m_MenuOptions_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		MenuOptions_t1951716431 * L_2 = __this->get_m_MenuOptions_6();
		NullCheck(L_2);
		bool L_3 = MenuOptions_get_IsDisplayed_m700004988(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		MenuOptions_t1951716431 * L_4 = __this->get_m_MenuOptions_6();
		NullCheck(L_4);
		MenuOptions_ShowOptionsMenu_m2175199945(L_4, (bool)1, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TouchHandler__ctor_m1316703423 (TouchHandler_t3441426771 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TouchHandler::get_DoubleTap()
extern "C" IL2CPP_METHOD_ATTR bool TouchHandler_get_DoubleTap_m2526479256 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchHandler_get_DoubleTap_m2526479256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_get_touchSupported_m1480684970(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_1 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Touch_get_tapCount_m2125417096((Touch_t1921856868 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean TouchHandler::get_IsSingleFingerStationary()
extern "C" IL2CPP_METHOD_ATTR bool TouchHandler_get_IsSingleFingerStationary_m3242675026 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchHandler_get_IsSingleFingerStationary_m3242675026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		bool L_0 = TouchHandler_IsSingleFingerDown_m3398302991(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_1 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Touch_get_phase_m214549210((Touch_t1921856868 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean TouchHandler::get_IsSingleFingerDragging()
extern "C" IL2CPP_METHOD_ATTR bool TouchHandler_get_IsSingleFingerDragging_m622244804 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchHandler_get_IsSingleFingerDragging_m622244804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		bool L_0 = TouchHandler_IsSingleFingerDown_m3398302991(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_1 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Touch_get_phase_m214549210((Touch_t1921856868 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		return (bool)G_B3_0;
	}
}
// System.Void TouchHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void TouchHandler_Start_m404564603 (TouchHandler_t3441426771 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = __this->get_m_AugmentationObject_4();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_localScale_m129152068(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_2();
		__this->set_cachedAugmentationScale_14(L_2);
		Transform_t3600365921 * L_3 = __this->get_m_AugmentationObject_4();
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_localEulerAngles_m2136926248(L_3, /*hidden argument*/NULL);
		__this->set_cachedAugmentationRotation_15(L_4);
		return;
	}
}
// System.Void TouchHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void TouchHandler_Update_m979527913 (TouchHandler_t3441426771 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchHandler_Update_m979527913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector2_t2156229523  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector2_t2156229523  V_6;
	memset(&V_6, 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t3722313464  V_12;
	memset(&V_12, 0, sizeof(V_12));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_0 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_touches_9(L_0);
		int32_t L_1 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0176;
		}
	}
	{
		TouchU5BU5D_t1849554061* L_2 = __this->get_touches_9();
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = Touch_get_position_m3109777936((Touch_t1921856868 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		TouchU5BU5D_t1849554061* L_4 = __this->get_touches_9();
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = Touch_get_position_m3109777936((Touch_t1921856868 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		float L_6 = Vector2_Distance_m3048868881(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		TouchU5BU5D_t1849554061* L_7 = __this->get_touches_9();
		NullCheck(L_7);
		Vector2_t2156229523  L_8 = Touch_get_position_m3109777936((Touch_t1921856868 *)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = (&V_2)->get_y_1();
		TouchU5BU5D_t1849554061* L_10 = __this->get_touches_9();
		NullCheck(L_10);
		Vector2_t2156229523  L_11 = Touch_get_position_m3109777936((Touch_t1921856868 *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		V_3 = L_11;
		float L_12 = (&V_3)->get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_9, (float)L_12));
		TouchU5BU5D_t1849554061* L_13 = __this->get_touches_9();
		NullCheck(L_13);
		Vector2_t2156229523  L_14 = Touch_get_position_m3109777936((Touch_t1921856868 *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		V_5 = L_14;
		float L_15 = (&V_5)->get_x_0();
		TouchU5BU5D_t1849554061* L_16 = __this->get_touches_9();
		NullCheck(L_16);
		Vector2_t2156229523  L_17 = Touch_get_position_m3109777936((Touch_t1921856868 *)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		V_6 = L_17;
		float L_18 = (&V_6)->get_x_0();
		V_4 = ((float)il2cpp_codegen_subtract((float)L_15, (float)L_18));
		float L_19 = V_1;
		float L_20 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_21 = atan2f(L_19, L_20);
		V_7 = ((float)il2cpp_codegen_multiply((float)L_21, (float)(57.29578f)));
		bool L_22 = __this->get_isFirstFrameWithTwoTouches_11();
		if (!L_22)
		{
			goto IL_00da;
		}
	}
	{
		float L_23 = V_0;
		__this->set_cachedTouchDistance_13(L_23);
		float L_24 = V_7;
		__this->set_cachedTouchAngle_12(L_24);
		__this->set_isFirstFrameWithTwoTouches_11((bool)0);
	}

IL_00da:
	{
		float L_25 = V_7;
		float L_26 = __this->get_cachedTouchAngle_12();
		V_8 = ((float)il2cpp_codegen_subtract((float)L_25, (float)L_26));
		float L_27 = V_0;
		float L_28 = __this->get_cachedTouchDistance_13();
		V_9 = ((float)((float)L_27/(float)L_28));
		float L_29 = __this->get_cachedAugmentationScale_14();
		float L_30 = V_9;
		V_10 = ((float)il2cpp_codegen_multiply((float)L_29, (float)L_30));
		float L_31 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_32 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_31, (0.1f), (2.0f), /*hidden argument*/NULL);
		V_11 = L_32;
		bool L_33 = __this->get_enableRotation_5();
		if (!L_33)
		{
			goto IL_0145;
		}
	}
	{
		Transform_t3600365921 * L_34 = __this->get_m_AugmentationObject_4();
		Vector3_t3722313464  L_35 = __this->get_cachedAugmentationRotation_15();
		float L_36 = V_8;
		Vector3_t3722313464  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Vector3__ctor_m3353183577((&L_37), (0.0f), ((float)il2cpp_codegen_multiply((float)L_36, (float)(3.0f))), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_38 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_35, L_37, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_localEulerAngles_m4202601546(L_34, L_38, /*hidden argument*/NULL);
	}

IL_0145:
	{
		bool L_39 = __this->get_enableRotation_5();
		if (!L_39)
		{
			goto IL_0171;
		}
	}
	{
		bool L_40 = __this->get_enablePinchScaling_6();
		if (!L_40)
		{
			goto IL_0171;
		}
	}
	{
		Transform_t3600365921 * L_41 = __this->get_m_AugmentationObject_4();
		float L_42 = V_11;
		float L_43 = V_11;
		float L_44 = V_11;
		Vector3_t3722313464  L_45;
		memset(&L_45, 0, sizeof(L_45));
		Vector3__ctor_m3353183577((&L_45), L_42, L_43, L_44, /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_set_localScale_m3053443106(L_41, L_45, /*hidden argument*/NULL);
	}

IL_0171:
	{
		goto IL_01e1;
	}

IL_0176:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_46 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_46) >= ((int32_t)2)))
		{
			goto IL_01b8;
		}
	}
	{
		Transform_t3600365921 * L_47 = __this->get_m_AugmentationObject_4();
		NullCheck(L_47);
		Vector3_t3722313464  L_48 = Transform_get_localScale_m129152068(L_47, /*hidden argument*/NULL);
		V_12 = L_48;
		float L_49 = (&V_12)->get_x_2();
		__this->set_cachedAugmentationScale_14(L_49);
		Transform_t3600365921 * L_50 = __this->get_m_AugmentationObject_4();
		NullCheck(L_50);
		Vector3_t3722313464  L_51 = Transform_get_localEulerAngles_m2136926248(L_50, /*hidden argument*/NULL);
		__this->set_cachedAugmentationRotation_15(L_51);
		__this->set_isFirstFrameWithTwoTouches_11((bool)1);
		goto IL_01e1;
	}

IL_01b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_52 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_52) == ((uint32_t)6))))
		{
			goto IL_01cf;
		}
	}
	{
		__this->set_enablePinchScaling_6((bool)1);
		goto IL_01e1;
	}

IL_01cf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_53 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_53) == ((uint32_t)5))))
		{
			goto IL_01e1;
		}
	}
	{
		__this->set_enablePinchScaling_6((bool)0);
	}

IL_01e1:
	{
		return;
	}
}
// System.Boolean TouchHandler::IsSingleFingerDown()
extern "C" IL2CPP_METHOD_ATTR bool TouchHandler_IsSingleFingerDown_m3398302991 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchHandler_IsSingleFingerDown_m3398302991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B7_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_1 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_001f;
		}
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_2 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		((TouchHandler_t3441426771_StaticFields*)il2cpp_codegen_static_fields_for(TouchHandler_t3441426771_il2cpp_TypeInfo_var))->set_lastTouchCount_10(L_2);
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_3 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		TouchU5BU5D_t1849554061* L_4 = Input_get_touches_m1702694043(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Touch_get_fingerId_m859576425((Touch_t1921856868 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_6 = ((TouchHandler_t3441426771_StaticFields*)il2cpp_codegen_static_fields_for(TouchHandler_t3441426771_il2cpp_TypeInfo_var))->get_lastTouchCount_10();
		G_B7_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_004a;
	}

IL_0049:
	{
		G_B7_0 = 0;
	}

IL_004a:
	{
		return (bool)G_B7_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrackableSettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackableSettings__ctor_m1376286375 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_FusionProviderType_5(7);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackableSettings::Awake()
extern "C" IL2CPP_METHOD_ATTR void TrackableSettings_Awake_m3736947311 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableSettings_Awake_m3736947311_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_0 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)TrackableSettings_OnBeforeVuforiaTrackerInitialized_m3565618179_RuntimeMethod_var;
		Action_t1264377477 * L_2 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_2, __this, (intptr_t)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VuforiaARController_RegisterBeforeVuforiaTrackersInitializedCallback_m522809966(L_0, L_2, /*hidden argument*/NULL);
		VuforiaARController_t1876945237 * L_3 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)TrackableSettings_OnVuforiaInitialized_m491189749_RuntimeMethod_var;
		Action_t1264377477 * L_5 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_5, __this, (intptr_t)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VuforiaARController_RegisterVuforiaInitializedCallback_m948457393(L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackableSettings::Start()
extern "C" IL2CPP_METHOD_ATTR void TrackableSettings_Start_m2630206653 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableSettings_Start_m2630206653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_0 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)TrackableSettings_OnVuforiaStarted_m1428112215_RuntimeMethod_var;
		Action_t1264377477 * L_2 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_2, __this, (intptr_t)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VuforiaARController_RegisterVuforiaStartedCallback_m3258152770(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackableSettings::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void TrackableSettings_OnDestroy_m3924781701 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableSettings_OnDestroy_m3924781701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_0 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)TrackableSettings_OnBeforeVuforiaTrackerInitialized_m3565618179_RuntimeMethod_var;
		Action_t1264377477 * L_2 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_2, __this, (intptr_t)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VuforiaARController_UnregisterBeforeVuforiaTrackersInitializedCallback_m4235253672(L_0, L_2, /*hidden argument*/NULL);
		VuforiaARController_t1876945237 * L_3 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)TrackableSettings_OnVuforiaStarted_m1428112215_RuntimeMethod_var;
		Action_t1264377477 * L_5 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_5, __this, (intptr_t)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VuforiaARController_UnregisterVuforiaStartedCallback_m3486105406(L_3, L_5, /*hidden argument*/NULL);
		VuforiaARController_t1876945237 * L_6 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_7 = (intptr_t)TrackableSettings_OnVuforiaInitialized_m491189749_RuntimeMethod_var;
		Action_t1264377477 * L_8 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_8, __this, (intptr_t)L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VuforiaARController_UnregisterVuforiaInitializedCallback_m1653245485(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackableSettings::OnBeforeVuforiaTrackerInitialized()
extern "C" IL2CPP_METHOD_ATTR void TrackableSettings_OnBeforeVuforiaTrackerInitialized_m3565618179 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableSettings_OnBeforeVuforiaTrackerInitialized_m3565618179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeviceTrackerARController_t1095592542_il2cpp_TypeInfo_var);
		DeviceTrackerARController_t1095592542 * L_0 = DeviceTrackerARController_get_Instance_m1618232027(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_m_FusionProviderType_5();
		NullCheck(L_0);
		DeviceTrackerARController_set_FusionProvider_m2890695734(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrackableSettings::OnVuforiaInitialized()
extern "C" IL2CPP_METHOD_ATTR void TrackableSettings_OnVuforiaInitialized_m491189749 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableSettings_OnVuforiaInitialized_m491189749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		PositionalDeviceTracker_t656722001 * L_1 = GenericInterfaceFuncInvoker0< PositionalDeviceTracker_t656722001 * >::Invoke(ITrackerManager_GetTracker_TisPositionalDeviceTracker_t656722001_m1362359953_RuntimeMethod_var, L_0);
		__this->set_m_PositionalDeviceTracker_6(L_1);
		PositionalDeviceTracker_t656722001 * L_2 = __this->get_m_PositionalDeviceTracker_6();
		if (L_2)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_3 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		PositionalDeviceTracker_t656722001 * L_4 = GenericInterfaceFuncInvoker0< PositionalDeviceTracker_t656722001 * >::Invoke(ITrackerManager_InitTracker_TisPositionalDeviceTracker_t656722001_m428557869_RuntimeMethod_var, L_3);
		__this->set_m_PositionalDeviceTracker_6(L_4);
		PositionalDeviceTracker_t656722001 * L_5 = __this->get_m_PositionalDeviceTracker_6();
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2158056861, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_0045:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1301807608, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void TrackableSettings::OnVuforiaStarted()
extern "C" IL2CPP_METHOD_ATTR void TrackableSettings_OnVuforiaStarted_m1428112215 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_DeviceTrackerEnabled_4();
		VirtActionInvoker1< bool >::Invoke(4 /* System.Void TrackableSettings::ToggleDeviceTracking(System.Boolean) */, __this, L_0);
		return;
	}
}
// System.Boolean TrackableSettings::IsDeviceTrackingEnabled()
extern "C" IL2CPP_METHOD_ATTR bool TrackableSettings_IsDeviceTrackingEnabled_m3224523543 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_DeviceTrackerEnabled_4();
		return L_0;
	}
}
// System.Void TrackableSettings::ToggleDeviceTracking(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TrackableSettings_ToggleDeviceTracking_m2293540750 (TrackableSettings_t2862243993 * __this, bool ___enableDeviceTracking0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableSettings_ToggleDeviceTracking_m2293540750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PositionalDeviceTracker_t656722001 * L_0 = __this->get_m_PositionalDeviceTracker_6();
		if (!L_0)
		{
			goto IL_0079;
		}
	}
	{
		bool L_1 = ___enableDeviceTracking0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		PositionalDeviceTracker_t656722001 * L_2 = __this->get_m_PositionalDeviceTracker_6();
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Vuforia.Tracker::get_IsActive() */, L_2);
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		PositionalDeviceTracker_t656722001 * L_4 = __this->get_m_PositionalDeviceTracker_6();
		NullCheck(L_4);
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.Tracker::Start() */, L_4);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2583292761, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral153966953, /*hidden argument*/NULL);
	}

IL_004a:
	{
		goto IL_0074;
	}

IL_004f:
	{
		PositionalDeviceTracker_t656722001 * L_6 = __this->get_m_PositionalDeviceTracker_6();
		NullCheck(L_6);
		bool L_7 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Vuforia.Tracker::get_IsActive() */, L_6);
		if (!L_7)
		{
			goto IL_0074;
		}
	}
	{
		PositionalDeviceTracker_t656722001 * L_8 = __this->get_m_PositionalDeviceTracker_6();
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(5 /* System.Void Vuforia.Tracker::Stop() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3061987517, /*hidden argument*/NULL);
	}

IL_0074:
	{
		goto IL_0083;
	}

IL_0079:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3307481495, /*hidden argument*/NULL);
	}

IL_0083:
	{
		PositionalDeviceTracker_t656722001 * L_9 = __this->get_m_PositionalDeviceTracker_6();
		NullCheck(L_9);
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Vuforia.Tracker::get_IsActive() */, L_9);
		__this->set_m_DeviceTrackerEnabled_4(L_10);
		return;
	}
}
// System.String TrackableSettings::GetActiveDatasetName()
extern "C" IL2CPP_METHOD_ATTR String_t* TrackableSettings_GetActiveDatasetName_m1771968640 (TrackableSettings_t2862243993 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableSettings_GetActiveDatasetName_m1771968640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTracker_t4177997237 * V_0 = NULL;
	List_1_t463142320 * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectTracker_t4177997237 * L_1 = GenericInterfaceFuncInvoker0< ObjectTracker_t4177997237 * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ObjectTracker_t4177997237 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = ObjectTracker_GetActiveDataSets_m254019146(L_2, /*hidden argument*/NULL);
		List_1_t463142320 * L_4 = Enumerable_ToList_TisDataSet_t3286034874_m1984750843(NULL /*static, unused*/, L_3, /*hidden argument*/Enumerable_ToList_TisDataSet_t3286034874_m1984750843_RuntimeMethod_var);
		V_1 = L_4;
		List_1_t463142320 * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m3978133574(L_5, /*hidden argument*/List_1_get_Count_m3978133574_RuntimeMethod_var);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		List_1_t463142320 * L_7 = V_1;
		DataSet_t3286034874 * L_8 = Enumerable_ElementAt_TisDataSet_t3286034874_m1304043092(NULL /*static, unused*/, L_7, 0, /*hidden argument*/Enumerable_ElementAt_TisDataSet_t3286034874_m1304043092_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9 = DataSet_get_Path_m176743276(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10 = V_2;
		String_t* L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12 = String_LastIndexOf_m2676535141(L_11, _stringLiteral3452614529, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_13 = String_Substring_m2848979100(L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_13;
		String_t* L_14 = V_3;
		NullCheck(_stringLiteral3932363835);
		CharU5BU5D_t3528271667* L_15 = String_ToCharArray_m1492846834(_stringLiteral3932363835, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_16 = String_TrimEnd_m3824727301(L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_17;
	}
}
// System.Void TrackableSettings::ActivateDataSet(System.String)
extern "C" IL2CPP_METHOD_ATTR void TrackableSettings_ActivateDataSet_m4118878993 (TrackableSettings_t2862243993 * __this, String_t* ___datasetName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableSettings_ActivateDataSet_m4118878993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTracker_t4177997237 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	List_1_t463142320 * V_3 = NULL;
	DataSet_t3286034874 * V_4 = NULL;
	Enumerator_t2352386197  V_5;
	memset(&V_5, 0, sizeof(V_5));
	DataSet_t3286034874 * V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectTracker_t4177997237 * L_1 = GenericInterfaceFuncInvoker0< ObjectTracker_t4177997237 * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ObjectTracker_t4177997237 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = ObjectTracker_GetDataSets_m1245718448(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		ObjectTracker_t4177997237 * L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = ObjectTracker_GetActiveDataSets_m254019146(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		RuntimeObject* L_6 = V_2;
		List_1_t463142320 * L_7 = Enumerable_ToList_TisDataSet_t3286034874_m1984750843(NULL /*static, unused*/, L_6, /*hidden argument*/Enumerable_ToList_TisDataSet_t3286034874_m1984750843_RuntimeMethod_var);
		V_3 = L_7;
		List_1_t463142320 * L_8 = V_3;
		NullCheck(L_8);
		Enumerator_t2352386197  L_9 = List_1_GetEnumerator_m6144716(L_8, /*hidden argument*/List_1_GetEnumerator_m6144716_RuntimeMethod_var);
		V_5 = L_9;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003f;
		}

IL_002d:
		{
			DataSet_t3286034874 * L_10 = Enumerator_get_Current_m1064371760((Enumerator_t2352386197 *)(&V_5), /*hidden argument*/Enumerator_get_Current_m1064371760_RuntimeMethod_var);
			V_4 = L_10;
			ObjectTracker_t4177997237 * L_11 = V_0;
			DataSet_t3286034874 * L_12 = V_4;
			NullCheck(L_11);
			ObjectTracker_DeactivateDataSet_m2094146088(L_11, L_12, /*hidden argument*/NULL);
		}

IL_003f:
		{
			bool L_13 = Enumerator_MoveNext_m1234730920((Enumerator_t2352386197 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m1234730920_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_002d;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5E, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1247034833((Enumerator_t2352386197 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m1247034833_RuntimeMethod_var);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005e:
	{
		ObjectTracker_t4177997237 * L_14 = V_0;
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(5 /* System.Void Vuforia.Tracker::Stop() */, L_14);
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		RuntimeObject* L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>::GetEnumerator() */, IEnumerable_1_t2265887763_il2cpp_TypeInfo_var, L_15);
		V_7 = L_16;
	}

IL_006c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0095;
		}

IL_0071:
		{
			RuntimeObject* L_17 = V_7;
			NullCheck(L_17);
			DataSet_t3286034874 * L_18 = InterfaceFuncInvoker0< DataSet_t3286034874 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.DataSet>::get_Current() */, IEnumerator_1_t3718605342_il2cpp_TypeInfo_var, L_17);
			V_6 = L_18;
			DataSet_t3286034874 * L_19 = V_6;
			NullCheck(L_19);
			String_t* L_20 = DataSet_get_Path_m176743276(L_19, /*hidden argument*/NULL);
			String_t* L_21 = ___datasetName0;
			NullCheck(L_20);
			bool L_22 = String_Contains_m1147431944(L_20, L_21, /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_0095;
			}
		}

IL_008c:
		{
			ObjectTracker_t4177997237 * L_23 = V_0;
			DataSet_t3286034874 * L_24 = V_6;
			NullCheck(L_23);
			ObjectTracker_ActivateDataSet_m3009523340(L_23, L_24, /*hidden argument*/NULL);
		}

IL_0095:
		{
			RuntimeObject* L_25 = V_7;
			NullCheck(L_25);
			bool L_26 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0071;
			}
		}

IL_00a1:
		{
			IL2CPP_LEAVE(0xB5, FINALLY_00a6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a6;
	}

FINALLY_00a6:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_27 = V_7;
			if (!L_27)
			{
				goto IL_00b4;
			}
		}

IL_00ad:
		{
			RuntimeObject* L_28 = V_7;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_28);
		}

IL_00b4:
		{
			IL2CPP_END_FINALLY(166)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(166)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b5:
	{
		ObjectTracker_t4177997237 * L_29 = V_0;
		NullCheck(L_29);
		VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.Tracker::Start() */, L_29);
		PositionalDeviceTracker_t656722001 * L_30 = __this->get_m_PositionalDeviceTracker_6();
		if (!L_30)
		{
			goto IL_00d8;
		}
	}
	{
		PositionalDeviceTracker_t656722001 * L_31 = __this->get_m_PositionalDeviceTracker_6();
		NullCheck(L_31);
		VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean Vuforia.PositionalDeviceTracker::Reset() */, L_31);
		goto IL_00e2;
	}

IL_00d8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral2746114121, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UDTEventHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UDTEventHandler__ctor_m4229419377 (UDTEventHandler_t2349357857 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_FrameQuality_11((-1));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UDTEventHandler::get_LastTargetIndex()
extern "C" IL2CPP_METHOD_ATTR int32_t UDTEventHandler_get_LastTargetIndex_m3911825841 (UDTEventHandler_t2349357857 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_TargetCounter_12();
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))%(int32_t)5));
	}
}
// System.Void UDTEventHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void UDTEventHandler_Start_m3476692967 (UDTEventHandler_t2349357857 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDTEventHandler_Start_m3476692967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UserDefinedTargetBuildingBehaviour_t4262637471 * L_0 = Component_GetComponent_TisUserDefinedTargetBuildingBehaviour_t4262637471_m1010333672(__this, /*hidden argument*/Component_GetComponent_TisUserDefinedTargetBuildingBehaviour_t4262637471_m1010333672_RuntimeMethod_var);
		__this->set_m_TargetBuildingBehaviour_6(L_0);
		UserDefinedTargetBuildingBehaviour_t4262637471 * L_1 = __this->get_m_TargetBuildingBehaviour_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		UserDefinedTargetBuildingBehaviour_t4262637471 * L_3 = __this->get_m_TargetBuildingBehaviour_6();
		NullCheck(L_3);
		UserDefinedTargetBuildingBehaviour_RegisterEventHandler_m1268286979(L_3, __this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3374546222, /*hidden argument*/NULL);
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		FrameQualityMeter_t3206426345 * L_4 = Object_FindObjectOfType_TisFrameQualityMeter_t3206426345_m1820019217(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisFrameQualityMeter_t3206426345_m1820019217_RuntimeMethod_var);
		__this->set_m_FrameQualityMeter_9(L_4);
		QualityDialog_t529473262 * L_5 = Object_FindObjectOfType_TisQualityDialog_t529473262_m1126594414(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisQualityDialog_t529473262_m1126594414_RuntimeMethod_var);
		__this->set_m_QualityDialog_7(L_5);
		QualityDialog_t529473262 * L_6 = __this->get_m_QualityDialog_7();
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		QualityDialog_t529473262 * L_8 = __this->get_m_QualityDialog_7();
		NullCheck(L_8);
		CanvasGroup_t4083511760 * L_9 = Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026(L_8, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026_RuntimeMethod_var);
		NullCheck(L_9);
		CanvasGroup_set_alpha_m4032573(L_9, (0.0f), /*hidden argument*/NULL);
	}

IL_006d:
	{
		return;
	}
}
// System.Void UDTEventHandler::OnInitialized()
extern "C" IL2CPP_METHOD_ATTR void UDTEventHandler_OnInitialized_m3816131351 (UDTEventHandler_t2349357857 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDTEventHandler_OnInitialized_m3816131351_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectTracker_t4177997237 * L_1 = GenericInterfaceFuncInvoker0< ObjectTracker_t4177997237 * >::Invoke(ITrackerManager_GetTracker_TisObjectTracker_t4177997237_m1548597255_RuntimeMethod_var, L_0);
		__this->set_m_ObjectTracker_8(L_1);
		ObjectTracker_t4177997237 * L_2 = __this->get_m_ObjectTracker_8();
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		ObjectTracker_t4177997237 * L_3 = __this->get_m_ObjectTracker_8();
		NullCheck(L_3);
		DataSet_t3286034874 * L_4 = ObjectTracker_CreateDataSet_m2328157034(L_3, /*hidden argument*/NULL);
		__this->set_m_UDT_DataSet_10(L_4);
		ObjectTracker_t4177997237 * L_5 = __this->get_m_ObjectTracker_8();
		DataSet_t3286034874 * L_6 = __this->get_m_UDT_DataSet_10();
		NullCheck(L_5);
		ObjectTracker_ActivateDataSet_m3009523340(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void UDTEventHandler::OnFrameQualityChanged(Vuforia.ImageTargetBuilder/FrameQuality)
extern "C" IL2CPP_METHOD_ATTR void UDTEventHandler_OnFrameQualityChanged_m719761063 (UDTEventHandler_t2349357857 * __this, int32_t ___frameQuality0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDTEventHandler_OnFrameQualityChanged_m719761063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(FrameQuality_t46289180_il2cpp_TypeInfo_var, (&___frameQuality0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___frameQuality0 = *(int32_t*)UnBox(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral793465148, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___frameQuality0;
		__this->set_m_FrameQuality_11(L_3);
		int32_t L_4 = __this->get_m_FrameQuality_11();
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2902409615, /*hidden argument*/NULL);
	}

IL_0038:
	{
		FrameQualityMeter_t3206426345 * L_5 = __this->get_m_FrameQualityMeter_9();
		int32_t L_6 = ___frameQuality0;
		NullCheck(L_5);
		FrameQualityMeter_SetQuality_m4084872956(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UDTEventHandler::OnNewTrackableSource(Vuforia.TrackableSource)
extern "C" IL2CPP_METHOD_ATTR void UDTEventHandler_OnNewTrackableSource_m1601646674 (UDTEventHandler_t2349357857 * __this, TrackableSource_t2567074243 * ___trackableSource0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDTEventHandler_OnNewTrackableSource_m1601646674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ImageTargetBehaviour_t2200418350 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_m_TargetCounter_12();
		__this->set_m_TargetCounter_12(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		ObjectTracker_t4177997237 * L_1 = __this->get_m_ObjectTracker_8();
		DataSet_t3286034874 * L_2 = __this->get_m_UDT_DataSet_10();
		NullCheck(L_1);
		ObjectTracker_DeactivateDataSet_m2094146088(L_1, L_2, /*hidden argument*/NULL);
		DataSet_t3286034874 * L_3 = __this->get_m_UDT_DataSet_10();
		NullCheck(L_3);
		bool L_4 = DataSet_HasReachedTrackableLimit_m2460030212(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		DataSet_t3286034874 * L_5 = __this->get_m_UDT_DataSet_10();
		NullCheck(L_5);
		RuntimeObject* L_6 = DataSet_GetTrackables_m881987140(L_5, /*hidden argument*/NULL);
		int32_t L_7 = Enumerable_Count_TisTrackable_t2451999991_m3490415887(NULL /*static, unused*/, L_6, /*hidden argument*/Enumerable_Count_TisTrackable_t2451999991_m3490415887_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)5)))
		{
			goto IL_00c6;
		}
	}

IL_0046:
	{
		DataSet_t3286034874 * L_8 = __this->get_m_UDT_DataSet_10();
		NullCheck(L_8);
		RuntimeObject* L_9 = DataSet_GetTrackables_m881987140(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		V_1 = (RuntimeObject*)NULL;
		RuntimeObject* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.Trackable>::GetEnumerator() */, IEnumerable_1_t1431852880_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}

IL_005b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0080;
		}

IL_0060:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			RuntimeObject* L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.Trackable>::get_Current() */, IEnumerator_1_t2884570459_il2cpp_TypeInfo_var, L_12);
			V_2 = L_13;
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_007e;
			}
		}

IL_006d:
		{
			RuntimeObject* L_15 = V_2;
			NullCheck(L_15);
			int32_t L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_15);
			RuntimeObject* L_17 = V_1;
			NullCheck(L_17);
			int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Vuforia.Trackable::get_ID() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_17);
			if ((((int32_t)L_16) >= ((int32_t)L_18)))
			{
				goto IL_0080;
			}
		}

IL_007e:
		{
			RuntimeObject* L_19 = V_2;
			V_1 = L_19;
		}

IL_0080:
		{
			RuntimeObject* L_20 = V_3;
			NullCheck(L_20);
			bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0060;
			}
		}

IL_008b:
		{
			IL2CPP_LEAVE(0x9D, FINALLY_0090);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0090;
	}

FINALLY_0090:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_22 = V_3;
			if (!L_22)
			{
				goto IL_009c;
			}
		}

IL_0096:
		{
			RuntimeObject* L_23 = V_3;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
		}

IL_009c:
		{
			IL2CPP_END_FINALLY(144)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(144)
	{
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009d:
	{
		RuntimeObject* L_24 = V_1;
		if (!L_24)
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeObject* L_25 = V_1;
		NullCheck(L_25);
		String_t* L_26 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Vuforia.Trackable::get_Name() */, Trackable_t2451999991_il2cpp_TypeInfo_var, L_25);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1671087354, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		DataSet_t3286034874 * L_28 = __this->get_m_UDT_DataSet_10();
		RuntimeObject* L_29 = V_1;
		NullCheck(L_28);
		DataSet_Destroy_m600486554(L_28, L_29, (bool)1, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		ImageTargetBehaviour_t2200418350 * L_30 = __this->get_ImageTargetTemplate_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		ImageTargetBehaviour_t2200418350 * L_31 = Object_Instantiate_TisImageTargetBehaviour_t2200418350_m3631208717(NULL /*static, unused*/, L_30, /*hidden argument*/Object_Instantiate_TisImageTargetBehaviour_t2200418350_m3631208717_RuntimeMethod_var);
		V_4 = L_31;
		ImageTargetBehaviour_t2200418350 * L_32 = V_4;
		NullCheck(L_32);
		GameObject_t1113636619 * L_33 = Component_get_gameObject_m442555142(L_32, /*hidden argument*/NULL);
		int32_t L_34 = __this->get_m_TargetCounter_12();
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_35);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2744019522, L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		Object_set_name_m291480324(L_33, L_37, /*hidden argument*/NULL);
		DataSet_t3286034874 * L_38 = __this->get_m_UDT_DataSet_10();
		TrackableSource_t2567074243 * L_39 = ___trackableSource0;
		ImageTargetBehaviour_t2200418350 * L_40 = V_4;
		NullCheck(L_40);
		GameObject_t1113636619 * L_41 = Component_get_gameObject_m442555142(L_40, /*hidden argument*/NULL);
		NullCheck(L_38);
		DataSet_CreateTrackable_m4008898237(L_38, L_39, L_41, /*hidden argument*/NULL);
		ObjectTracker_t4177997237 * L_42 = __this->get_m_ObjectTracker_8();
		DataSet_t3286034874 * L_43 = __this->get_m_UDT_DataSet_10();
		NullCheck(L_42);
		ObjectTracker_ActivateDataSet_m3009523340(L_42, L_43, /*hidden argument*/NULL);
		UserDefinedTargetBuildingBehaviour_t4262637471 * L_44 = __this->get_m_TargetBuildingBehaviour_6();
		NullCheck(L_44);
		UserDefinedTargetBuildingBehaviour_StartScanning_m1809448542(L_44, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UDTEventHandler::BuildNewTarget()
extern "C" IL2CPP_METHOD_ATTR void UDTEventHandler_BuildNewTarget_m1528029411 (UDTEventHandler_t2349357857 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDTEventHandler_BuildNewTarget_m1528029411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_m_FrameQuality_11();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_m_FrameQuality_11();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_005d;
		}
	}

IL_0018:
	{
		ImageTargetBehaviour_t2200418350 * L_2 = __this->get_ImageTargetTemplate_4();
		NullCheck(L_2);
		String_t* L_3 = TrackableBehaviour_get_TrackableName_m3644057705(L_2, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_m_TargetCounter_12();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral4273954858, L_3, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		UserDefinedTargetBuildingBehaviour_t4262637471 * L_8 = __this->get_m_TargetBuildingBehaviour_6();
		String_t* L_9 = V_0;
		ImageTargetBehaviour_t2200418350 * L_10 = __this->get_ImageTargetTemplate_4();
		NullCheck(L_10);
		Vector2_t2156229523  L_11 = ImageTargetBehaviour_GetSize_m918629909(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		float L_12 = (&V_1)->get_x_0();
		NullCheck(L_8);
		UserDefinedTargetBuildingBehaviour_BuildNewTarget_m3446238104(L_8, L_9, L_12, /*hidden argument*/NULL);
		goto IL_009f;
	}

IL_005d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3659986591, /*hidden argument*/NULL);
		QualityDialog_t529473262 * L_13 = __this->get_m_QualityDialog_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_009f;
		}
	}
	{
		MonoBehaviour_StopAllCoroutines_m3328507247(__this, /*hidden argument*/NULL);
		QualityDialog_t529473262 * L_15 = __this->get_m_QualityDialog_7();
		NullCheck(L_15);
		CanvasGroup_t4083511760 * L_16 = Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026(L_15, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026_RuntimeMethod_var);
		NullCheck(L_16);
		CanvasGroup_set_alpha_m4032573(L_16, (1.0f), /*hidden argument*/NULL);
		RuntimeObject* L_17 = UDTEventHandler_FadeOutQualityDialog_m980690163(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_17, /*hidden argument*/NULL);
	}

IL_009f:
	{
		return;
	}
}
// System.Collections.IEnumerator UDTEventHandler::FadeOutQualityDialog()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UDTEventHandler_FadeOutQualityDialog_m980690163 (UDTEventHandler_t2349357857 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UDTEventHandler_FadeOutQualityDialog_m980690163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494 * V_0 = NULL;
	{
		U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494 * L_0 = (U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494 *)il2cpp_codegen_object_new(U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494_il2cpp_TypeInfo_var);
		U3CFadeOutQualityDialogU3Ec__Iterator0__ctor_m3719441343(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_2(__this);
		U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494 * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeOutQualityDialogU3Ec__Iterator0__ctor_m3719441343 (U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CFadeOutQualityDialogU3Ec__Iterator0_MoveNext_m2636230838 (U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeOutQualityDialogU3Ec__Iterator0_MoveNext_m2636230838_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_00d1;
			}
		}
	}
	{
		goto IL_00fa;
	}

IL_0025:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_3(L_2);
		bool L_3 = __this->get_U24disposing_4();
		if (L_3)
		{
			goto IL_0044;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0044:
	{
		goto IL_00fc;
	}

IL_0049:
	{
		UDTEventHandler_t2349357857 * L_4 = __this->get_U24this_2();
		NullCheck(L_4);
		QualityDialog_t529473262 * L_5 = L_4->get_m_QualityDialog_7();
		NullCheck(L_5);
		CanvasGroup_t4083511760 * L_6 = Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026(L_5, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t4083511760_m1030459026_RuntimeMethod_var);
		__this->set_U3CcanvasGroupU3E__0_0(L_6);
		__this->set_U3CfU3E__1_1((1.0f));
		goto IL_00e3;
	}

IL_006f:
	{
		float L_7 = __this->get_U3CfU3E__1_1();
		double L_8 = Math_Round_m3279303474(NULL /*static, unused*/, (((double)((double)L_7))), 1, /*hidden argument*/NULL);
		__this->set_U3CfU3E__1_1((((float)((float)L_8))));
		float L_9 = __this->get_U3CfU3E__1_1();
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2338220262, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		CanvasGroup_t4083511760 * L_13 = __this->get_U3CcanvasGroupU3E__0_0();
		float L_14 = __this->get_U3CfU3E__1_1();
		double L_15 = Math_Round_m3279303474(NULL /*static, unused*/, (((double)((double)L_14))), 1, /*hidden argument*/NULL);
		NullCheck(L_13);
		CanvasGroup_set_alpha_m4032573(L_13, (((float)((float)L_15))), /*hidden argument*/NULL);
		__this->set_U24current_3(NULL);
		bool L_16 = __this->get_U24disposing_4();
		if (L_16)
		{
			goto IL_00cc;
		}
	}
	{
		__this->set_U24PC_5(2);
	}

IL_00cc:
	{
		goto IL_00fc;
	}

IL_00d1:
	{
		float L_17 = __this->get_U3CfU3E__1_1();
		__this->set_U3CfU3E__1_1(((float)il2cpp_codegen_subtract((float)L_17, (float)(0.1f))));
	}

IL_00e3:
	{
		float L_18 = __this->get_U3CfU3E__1_1();
		if ((((float)L_18) >= ((float)(0.0f))))
		{
			goto IL_006f;
		}
	}
	{
		__this->set_U24PC_5((-1));
	}

IL_00fa:
	{
		return (bool)0;
	}

IL_00fc:
	{
		return (bool)1;
	}
}
// System.Object UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeOutQualityDialogU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m106792831 (U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeOutQualityDialogU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m127241737 (U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeOutQualityDialogU3Ec__Iterator0_Dispose_m2407345584 (U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CFadeOutQualityDialogU3Ec__Iterator0_Reset_m492261578 (U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeOutQualityDialogU3Ec__Iterator0_Reset_m492261578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CFadeOutQualityDialogU3Ec__Iterator0_Reset_m492261578_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void URL::.ctor()
extern "C" IL2CPP_METHOD_ATTR void URL__ctor_m365591970 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL::openLWAFacebookPage()
extern "C" IL2CPP_METHOD_ATTR void URL_openLWAFacebookPage_m4054613283 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_openLWAFacebookPage_m4054613283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_timeSinceLevelLoad_m2224611026(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral2092875817, /*hidden argument*/NULL);
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral4181278833, /*hidden argument*/NULL);
		float L_1 = Time_get_timeSinceLevelLoad_m2224611026(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = V_0;
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2))) <= ((float)(1.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral2711244180, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void URL::openLeapWithAliceSite()
extern "C" IL2CPP_METHOD_ATTR void URL_openLeapWithAliceSite_m1152243986 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_openLeapWithAliceSite_m1152243986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_timeSinceLevelLoad_m2224611026(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral1420135443, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL::openLWATelegram()
extern "C" IL2CPP_METHOD_ATTR void URL_openLWATelegram_m2467091938 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_openLWATelegram_m2467091938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral3170052601, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL::openOkojiPage()
extern "C" IL2CPP_METHOD_ATTR void URL_openOkojiPage_m1322536793 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_openOkojiPage_m1322536793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral3156944788, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL::openSchoolSite1()
extern "C" IL2CPP_METHOD_ATTR void URL_openSchoolSite1_m4139449927 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_openSchoolSite1_m4139449927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral2990266777, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL::openSchoolSite2()
extern "C" IL2CPP_METHOD_ATTR void URL_openSchoolSite2_m2183134791 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_openSchoolSite2_m2183134791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral3036646208, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL::SendEmail()
extern "C" IL2CPP_METHOD_ATTR void URL_SendEmail_m4229652824 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_SendEmail_m4229652824_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		V_0 = _stringLiteral133775182;
		String_t* L_0 = URL_MyEscapeURL_m3517090145(__this, _stringLiteral3427509042, /*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1 = URL_MyEscapeURL_m3517090145(__this, _stringLiteral3452614528, /*hidden argument*/NULL);
		V_2 = L_1;
		StringU5BU5D_t1281789340* L_2 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t1281789340* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3592728426);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3592728426);
		StringU5BU5D_t1281789340* L_4 = L_3;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
		StringU5BU5D_t1281789340* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4093769862);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4093769862);
		StringU5BU5D_t1281789340* L_7 = L_6;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t1281789340* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral2364257750);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2364257750);
		StringU5BU5D_t1281789340* L_10 = L_9;
		String_t* L_11 = V_2;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m1809518182(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Application_OpenURL_m738341736(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.String URL::MyEscapeURL(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* URL_MyEscapeURL_m3517090145 (URL_t2492693491 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_MyEscapeURL_m3517090145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___url0;
		String_t* L_1 = WWW_EscapeURL_m4251687403(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = String_Replace_m1273907647(L_1, _stringLiteral3452614533, _stringLiteral3074512661, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void URL::HillelSite()
extern "C" IL2CPP_METHOD_ATTR void URL_HillelSite_m3664511886 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_HillelSite_m3664511886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral3111837516, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL::UCFSite()
extern "C" IL2CPP_METHOD_ATTR void URL_UCFSite_m170137463 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_UCFSite_m170137463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral198528444, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL::PavingtheWaySite()
extern "C" IL2CPP_METHOD_ATTR void URL_PavingtheWaySite_m4006525426 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_PavingtheWaySite_m4006525426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral2204736425, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL::MontessoriSite()
extern "C" IL2CPP_METHOD_ATTR void URL_MontessoriSite_m3652069198 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_MontessoriSite_m3652069198_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral3628737245, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL::SlatofHeavenSite()
extern "C" IL2CPP_METHOD_ATTR void URL_SlatofHeavenSite_m913799348 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_SlatofHeavenSite_m913799348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral3225169242, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL::neptuneVideo()
extern "C" IL2CPP_METHOD_ATTR void URL_neptuneVideo_m3338928179 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_neptuneVideo_m3338928179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral992034722, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL::neptuneWebsite()
extern "C" IL2CPP_METHOD_ATTR void URL_neptuneWebsite_m774126154 (URL_t2492693491 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_neptuneWebsite_m774126154_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral2990266777, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UtilityHelper::RotateTowardCamera(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void UtilityHelper_RotateTowardCamera_m3301900625 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___augmentation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UtilityHelper_RotateTowardCamera_m3301900625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaManager_t1653423889_il2cpp_TypeInfo_var);
		VuforiaManager_t1653423889 * L_0 = VuforiaManager_get_Instance_m100367560(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = VuforiaManager_get_ARCameraTransform_m958890547(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaManager_t1653423889_il2cpp_TypeInfo_var);
		VuforiaManager_t1653423889 * L_3 = VuforiaManager_get_Instance_m100367560(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = VuforiaManager_get_ARCameraTransform_m958890547(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = ___augmentation0;
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		(&V_0)->set_y_3((0.0f));
		Vector3_t3722313464  L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		GameObject_t1113636619 * L_12 = ___augmentation0;
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_14 = V_1;
		NullCheck(L_13);
		Transform_set_rotation_m3524318132(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0054:
	{
		return;
	}
}
// System.Void UtilityHelper::EnableRendererColliderCanvas(UnityEngine.GameObject,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UtilityHelper_EnableRendererColliderCanvas_m3340540226 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___gameObject0, bool ___enable1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UtilityHelper_EnableRendererColliderCanvas_m3340540226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		GameObject_t1113636619 * L_0 = ___gameObject0;
		NullCheck(L_0);
		RendererU5BU5D_t3210418286* L_1 = GameObject_GetComponentsInChildren_TisRenderer_t2627027031_m551606854(L_0, (bool)1, /*hidden argument*/GameObject_GetComponentsInChildren_TisRenderer_t2627027031_m551606854_RuntimeMethod_var);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = ___gameObject0;
		NullCheck(L_2);
		ColliderU5BU5D_t4234922487* L_3 = GameObject_GetComponentsInChildren_TisCollider_t1773347010_m248290622(L_2, (bool)1, /*hidden argument*/GameObject_GetComponentsInChildren_TisCollider_t1773347010_m248290622_RuntimeMethod_var);
		V_1 = L_3;
		GameObject_t1113636619 * L_4 = ___gameObject0;
		NullCheck(L_4);
		CanvasU5BU5D_t682926938* L_5 = GameObject_GetComponentsInChildren_TisCanvas_t3310196443_m2470993954(L_4, (bool)1, /*hidden argument*/GameObject_GetComponentsInChildren_TisCanvas_t3310196443_m2470993954_RuntimeMethod_var);
		V_2 = L_5;
		RendererU5BU5D_t3210418286* L_6 = V_0;
		V_4 = L_6;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_7 = V_4;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Renderer_t2627027031 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		Renderer_t2627027031 * L_11 = V_3;
		bool L_12 = ___enable1;
		NullCheck(L_11);
		Renderer_set_enabled_m1727253150(L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_14 = V_5;
		RendererU5BU5D_t3210418286* L_15 = V_4;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_16 = V_1;
		V_7 = L_16;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_17 = V_7;
		int32_t L_18 = V_8;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Collider_t1773347010 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		Collider_t1773347010 * L_21 = V_6;
		bool L_22 = ___enable1;
		NullCheck(L_21);
		Collider_set_enabled_m1517463283(L_21, L_22, /*hidden argument*/NULL);
		int32_t L_23 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_24 = V_8;
		ColliderU5BU5D_t4234922487* L_25 = V_7;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_26 = V_2;
		V_10 = L_26;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_27 = V_10;
		int32_t L_28 = V_11;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Canvas_t3310196443 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_9 = L_30;
		Canvas_t3310196443 * L_31 = V_9;
		bool L_32 = ___enable1;
		NullCheck(L_31);
		Behaviour_set_enabled_m20417929(L_31, L_32, /*hidden argument*/NULL);
		int32_t L_33 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_34 = V_11;
		CanvasU5BU5D_t682926938* L_35 = V_10;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VideoController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VideoController__ctor_m3564646726 (VideoController_t2238106033 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoController::Start()
extern "C" IL2CPP_METHOD_ATTR void VideoController_Start_m2118955092 (VideoController_t2238106033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoController_Start_m2118955092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayer_t1683042537 * L_0 = Component_GetComponent_TisVideoPlayer_t1683042537_m3779405067(__this, /*hidden argument*/Component_GetComponent_TisVideoPlayer_t1683042537_m3779405067_RuntimeMethod_var);
		__this->set_videoPlayer_4(L_0);
		VideoPlayer_t1683042537 * L_1 = __this->get_videoPlayer_4();
		intptr_t L_2 = (intptr_t)VideoController_HandleVideoError_m1843996965_RuntimeMethod_var;
		ErrorEventHandler_t3211687919 * L_3 = (ErrorEventHandler_t3211687919 *)il2cpp_codegen_object_new(ErrorEventHandler_t3211687919_il2cpp_TypeInfo_var);
		ErrorEventHandler__ctor_m1187192887(L_3, __this, (intptr_t)L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VideoPlayer_add_errorReceived_m2181459651(L_1, L_3, /*hidden argument*/NULL);
		VideoPlayer_t1683042537 * L_4 = __this->get_videoPlayer_4();
		intptr_t L_5 = (intptr_t)VideoController_HandleStartedEvent_m252637058_RuntimeMethod_var;
		EventHandler_t3436254912 * L_6 = (EventHandler_t3436254912 *)il2cpp_codegen_object_new(EventHandler_t3436254912_il2cpp_TypeInfo_var);
		EventHandler__ctor_m838423014(L_6, __this, (intptr_t)L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VideoPlayer_add_started_m2669566181(L_4, L_6, /*hidden argument*/NULL);
		VideoPlayer_t1683042537 * L_7 = __this->get_videoPlayer_4();
		intptr_t L_8 = (intptr_t)VideoController_HandlePrepareCompleted_m2365717223_RuntimeMethod_var;
		EventHandler_t3436254912 * L_9 = (EventHandler_t3436254912 *)il2cpp_codegen_object_new(EventHandler_t3436254912_il2cpp_TypeInfo_var);
		EventHandler__ctor_m838423014(L_9, __this, (intptr_t)L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		VideoPlayer_add_prepareCompleted_m1550584085(L_7, L_9, /*hidden argument*/NULL);
		VideoPlayer_t1683042537 * L_10 = __this->get_videoPlayer_4();
		intptr_t L_11 = (intptr_t)VideoController_HandleSeekCompleted_m3173537108_RuntimeMethod_var;
		EventHandler_t3436254912 * L_12 = (EventHandler_t3436254912 *)il2cpp_codegen_object_new(EventHandler_t3436254912_il2cpp_TypeInfo_var);
		EventHandler__ctor_m838423014(L_12, __this, (intptr_t)L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		VideoPlayer_add_seekCompleted_m3856154777(L_10, L_12, /*hidden argument*/NULL);
		VideoPlayer_t1683042537 * L_13 = __this->get_videoPlayer_4();
		intptr_t L_14 = (intptr_t)VideoController_HandleLoopPointReached_m1821354098_RuntimeMethod_var;
		EventHandler_t3436254912 * L_15 = (EventHandler_t3436254912 *)il2cpp_codegen_object_new(EventHandler_t3436254912_il2cpp_TypeInfo_var);
		EventHandler__ctor_m838423014(L_15, __this, (intptr_t)L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		VideoPlayer_add_loopPointReached_m2286553779(L_13, L_15, /*hidden argument*/NULL);
		VideoController_LogClipInfo_m4268250143(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoController::Update()
extern "C" IL2CPP_METHOD_ATTR void VideoController_Update_m3618326226 (VideoController_t2238106033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoController_Update_m3618326226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		VideoPlayer_t1683042537 * L_0 = __this->get_videoPlayer_4();
		NullCheck(L_0);
		bool L_1 = VideoPlayer_get_isPlaying_m2729754655(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_009f;
		}
	}
	{
		VideoController_ShowPlayButton_m3344188228(__this, (bool)0, /*hidden argument*/NULL);
		VideoPlayer_t1683042537 * L_2 = __this->get_videoPlayer_4();
		NullCheck(L_2);
		uint64_t L_3 = VideoPlayer_get_frameCount_m1587673510(L_2, /*hidden argument*/NULL);
		if ((!(((float)(((float)((float)(((double)((uint64_t)L_3))))))) < ((float)(std::numeric_limits<float>::max())))))
		{
			goto IL_009a;
		}
	}
	{
		VideoPlayer_t1683042537 * L_4 = __this->get_videoPlayer_4();
		NullCheck(L_4);
		int64_t L_5 = VideoPlayer_get_frame_m2640481317(L_4, /*hidden argument*/NULL);
		V_0 = (((float)((float)L_5)));
		VideoPlayer_t1683042537 * L_6 = __this->get_videoPlayer_4();
		NullCheck(L_6);
		uint64_t L_7 = VideoPlayer_get_frameCount_m1587673510(L_6, /*hidden argument*/NULL);
		V_1 = (((float)((float)(((double)((uint64_t)L_7))))));
		V_2 = (0.0f);
		float L_8 = V_1;
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_9/(float)L_10)), (float)(100.0f)));
	}

IL_0064:
	{
		RectTransform_t3704657025 * L_11 = __this->get_m_ProgressBar_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009a;
		}
	}
	{
		RectTransform_t3704657025 * L_13 = __this->get_m_ProgressBar_6();
		float L_14 = V_2;
		RectTransform_t3704657025 * L_15 = __this->get_m_ProgressBar_6();
		NullCheck(L_15);
		Vector2_t2156229523  L_16 = RectTransform_get_sizeDelta_m2183112744(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		float L_17 = (&V_3)->get_y_1();
		Vector2_t2156229523  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector2__ctor_m3970636864((&L_18), (((float)((float)L_14))), L_17, /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_sizeDelta_m3462269772(L_13, L_18, /*hidden argument*/NULL);
	}

IL_009a:
	{
		goto IL_00a6;
	}

IL_009f:
	{
		VideoController_ShowPlayButton_m3344188228(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		return;
	}
}
// System.Void VideoController::OnApplicationPause(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoController_OnApplicationPause_m54962351 (VideoController_t2238106033 * __this, bool ___pause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoController_OnApplicationPause_m54962351_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___pause0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral2126657399, L_2, _stringLiteral3546115221, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		bool L_4 = ___pause0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		VideoController_Pause_m3562938676(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void VideoController::Play()
extern "C" IL2CPP_METHOD_ATTR void VideoController_Play_m3654523600 (VideoController_t2238106033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoController_Play_m3654523600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1751771208, /*hidden argument*/NULL);
		VideoController_PauseAudio_m48819413(__this, (bool)0, /*hidden argument*/NULL);
		VideoPlayer_t1683042537 * L_0 = __this->get_videoPlayer_4();
		NullCheck(L_0);
		VideoPlayer_Play_m1850501814(L_0, /*hidden argument*/NULL);
		VideoController_ShowPlayButton_m3344188228(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoController::Pause()
extern "C" IL2CPP_METHOD_ATTR void VideoController_Pause_m3562938676 (VideoController_t2238106033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoController_Pause_m3562938676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayer_t1683042537 * L_0 = __this->get_videoPlayer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1464496448, /*hidden argument*/NULL);
		VideoController_PauseAudio_m48819413(__this, (bool)1, /*hidden argument*/NULL);
		VideoPlayer_t1683042537 * L_2 = __this->get_videoPlayer_4();
		NullCheck(L_2);
		VideoPlayer_Pause_m3396579194(L_2, /*hidden argument*/NULL);
		VideoController_ShowPlayButton_m3344188228(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void VideoController::PauseAudio(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoController_PauseAudio_m48819413 (VideoController_t2238106033 * __this, bool ___pause0, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		goto IL_0039;
	}

IL_0007:
	{
		bool L_0 = ___pause0;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		VideoPlayer_t1683042537 * L_1 = __this->get_videoPlayer_4();
		uint16_t L_2 = V_0;
		NullCheck(L_1);
		AudioSource_t3935305588 * L_3 = VideoPlayer_GetTargetAudioSource_m1866987013(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		AudioSource_Pause_m1501822765(L_3, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_0023:
	{
		VideoPlayer_t1683042537 * L_4 = __this->get_videoPlayer_4();
		uint16_t L_5 = V_0;
		NullCheck(L_4);
		AudioSource_t3935305588 * L_6 = VideoPlayer_GetTargetAudioSource_m1866987013(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		AudioSource_UnPause_m3033034686(L_6, /*hidden argument*/NULL);
	}

IL_0034:
	{
		uint16_t L_7 = V_0;
		V_0 = (uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)))));
	}

IL_0039:
	{
		uint16_t L_8 = V_0;
		VideoPlayer_t1683042537 * L_9 = __this->get_videoPlayer_4();
		NullCheck(L_9);
		uint16_t L_10 = VideoPlayer_get_audioTrackCount_m920587642(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void VideoController::ShowPlayButton(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoController_ShowPlayButton_m3344188228 (VideoController_t2238106033 * __this, bool ___enable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoController_ShowPlayButton_m3344188228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Button_t4055032469 * L_0 = __this->get_m_PlayButton_5();
		bool L_1 = ___enable0;
		NullCheck(L_0);
		Behaviour_set_enabled_m20417929(L_0, L_1, /*hidden argument*/NULL);
		Button_t4055032469 * L_2 = __this->get_m_PlayButton_5();
		NullCheck(L_2);
		Image_t2670269651 * L_3 = Component_GetComponent_TisImage_t2670269651_m980647750(L_2, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		bool L_4 = ___enable0;
		NullCheck(L_3);
		Behaviour_set_enabled_m20417929(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoController::LogClipInfo()
extern "C" IL2CPP_METHOD_ATTR void VideoController_LogClipInfo_m4268250143 (VideoController_t2238106033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoController_LogClipInfo_m4268250143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		VideoPlayer_t1683042537 * L_0 = __this->get_videoPlayer_4();
		NullCheck(L_0);
		VideoClip_t1281919028 * L_1 = VideoPlayer_get_clip_m4248196588(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0126;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral3453413746);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3453413746);
		ObjectU5BU5D_t2843939325* L_5 = L_4;
		VideoPlayer_t1683042537 * L_6 = __this->get_videoPlayer_4();
		NullCheck(L_6);
		VideoClip_t1281919028 * L_7 = VideoPlayer_get_clip_m4248196588(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = Object_get_name_m4211327027(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral1203774290);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1203774290);
		ObjectU5BU5D_t2843939325* L_10 = L_9;
		VideoPlayer_t1683042537 * L_11 = __this->get_videoPlayer_4();
		NullCheck(L_11);
		VideoClip_t1281919028 * L_12 = VideoPlayer_get_clip_m4248196588(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		uint16_t L_13 = VideoClip_get_audioTrackCount_m2589462220(L_12, /*hidden argument*/NULL);
		uint16_t L_14 = L_13;
		RuntimeObject * L_15 = Box(UInt16_t2177724958_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_15);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_10;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral2488734292);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2488734292);
		ObjectU5BU5D_t2843939325* L_17 = L_16;
		VideoPlayer_t1683042537 * L_18 = __this->get_videoPlayer_4();
		NullCheck(L_18);
		VideoClip_t1281919028 * L_19 = VideoPlayer_get_clip_m4248196588(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		uint64_t L_20 = VideoClip_get_frameCount_m2780265243(L_19, /*hidden argument*/NULL);
		uint64_t L_21 = L_20;
		RuntimeObject * L_22 = Box(UInt64_t4134040092_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_22);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_22);
		ObjectU5BU5D_t2843939325* L_23 = L_17;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral1652118252);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral1652118252);
		ObjectU5BU5D_t2843939325* L_24 = L_23;
		VideoPlayer_t1683042537 * L_25 = __this->get_videoPlayer_4();
		NullCheck(L_25);
		VideoClip_t1281919028 * L_26 = VideoPlayer_get_clip_m4248196588(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		double L_27 = VideoClip_get_frameRate_m2596851112(L_26, /*hidden argument*/NULL);
		double L_28 = L_27;
		RuntimeObject * L_29 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_29);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_29);
		ObjectU5BU5D_t2843939325* L_30 = L_24;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral64818126);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral64818126);
		ObjectU5BU5D_t2843939325* L_31 = L_30;
		VideoPlayer_t1683042537 * L_32 = __this->get_videoPlayer_4();
		NullCheck(L_32);
		VideoClip_t1281919028 * L_33 = VideoPlayer_get_clip_m4248196588(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		uint32_t L_34 = VideoClip_get_height_m2730473917(L_33, /*hidden argument*/NULL);
		uint32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_36);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_36);
		ObjectU5BU5D_t2843939325* L_37 = L_31;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral2933500717);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)_stringLiteral2933500717);
		ObjectU5BU5D_t2843939325* L_38 = L_37;
		VideoPlayer_t1683042537 * L_39 = __this->get_videoPlayer_4();
		NullCheck(L_39);
		VideoClip_t1281919028 * L_40 = VideoPlayer_get_clip_m4248196588(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		uint32_t L_41 = VideoClip_get_width_m734887625(L_40, /*hidden argument*/NULL);
		uint32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_43);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_43);
		ObjectU5BU5D_t2843939325* L_44 = L_38;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteral1793997154);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject *)_stringLiteral1793997154);
		ObjectU5BU5D_t2843939325* L_45 = L_44;
		VideoPlayer_t1683042537 * L_46 = __this->get_videoPlayer_4();
		NullCheck(L_46);
		VideoClip_t1281919028 * L_47 = VideoPlayer_get_clip_m4248196588(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		double L_48 = VideoClip_get_length_m3416669259(L_47, /*hidden argument*/NULL);
		double L_49 = L_48;
		RuntimeObject * L_50 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_49);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_50);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject *)L_50);
		ObjectU5BU5D_t2843939325* L_51 = L_45;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, _stringLiteral2277370231);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject *)_stringLiteral2277370231);
		ObjectU5BU5D_t2843939325* L_52 = L_51;
		VideoPlayer_t1683042537 * L_53 = __this->get_videoPlayer_4();
		NullCheck(L_53);
		VideoClip_t1281919028 * L_54 = VideoPlayer_get_clip_m4248196588(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		String_t* L_55 = VideoClip_get_originalPath_m2321686979(L_54, /*hidden argument*/NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_55);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject *)L_55);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_56 = String_Concat_m2971454694(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		V_0 = L_56;
		String_t* L_57 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
	}

IL_0126:
	{
		return;
	}
}
// System.Void VideoController::HandleVideoError(UnityEngine.Video.VideoPlayer,System.String)
extern "C" IL2CPP_METHOD_ATTR void VideoController_HandleVideoError_m1843996965 (VideoController_t2238106033 * __this, VideoPlayer_t1683042537 * ___video0, String_t* ___errorMsg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoController_HandleVideoError_m1843996965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayer_t1683042537 * L_0 = ___video0;
		NullCheck(L_0);
		VideoClip_t1281919028 * L_1 = VideoPlayer_get_clip_m4248196588(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m4211327027(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___errorMsg1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral1503557889, L_2, _stringLiteral4162797046, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoController::HandleStartedEvent(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoController_HandleStartedEvent_m252637058 (VideoController_t2238106033 * __this, VideoPlayer_t1683042537 * ___video0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoController_HandleStartedEvent_m252637058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayer_t1683042537 * L_0 = ___video0;
		NullCheck(L_0);
		VideoClip_t1281919028 * L_1 = VideoPlayer_get_clip_m4248196588(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m4211327027(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2350804804, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoController::HandlePrepareCompleted(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoController_HandlePrepareCompleted_m2365717223 (VideoController_t2238106033 * __this, VideoPlayer_t1683042537 * ___video0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoController_HandlePrepareCompleted_m2365717223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayer_t1683042537 * L_0 = ___video0;
		NullCheck(L_0);
		VideoClip_t1281919028 * L_1 = VideoPlayer_get_clip_m4248196588(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m4211327027(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3931593679, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoController::HandleSeekCompleted(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoController_HandleSeekCompleted_m3173537108 (VideoController_t2238106033 * __this, VideoPlayer_t1683042537 * ___video0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoController_HandleSeekCompleted_m3173537108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayer_t1683042537 * L_0 = ___video0;
		NullCheck(L_0);
		VideoClip_t1281919028 * L_1 = VideoPlayer_get_clip_m4248196588(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m4211327027(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2103867904, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoController::HandleLoopPointReached(UnityEngine.Video.VideoPlayer)
extern "C" IL2CPP_METHOD_ATTR void VideoController_HandleLoopPointReached_m1821354098 (VideoController_t2238106033 * __this, VideoPlayer_t1683042537 * ___video0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoController_HandleLoopPointReached_m1821354098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayer_t1683042537 * L_0 = ___video0;
		NullCheck(L_0);
		VideoClip_t1281919028 * L_1 = VideoPlayer_get_clip_m4248196588(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m4211327027(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral530034621, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		VideoController_ShowPlayButton_m3344188228(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VideoTrackableEventHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VideoTrackableEventHandler__ctor_m3822578331 (VideoTrackableEventHandler_t944783369 * __this, const RuntimeMethod* method)
{
	{
		DefaultTrackableEventHandler__ctor_m1782586389(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoTrackableEventHandler::OnTrackingFound()
extern "C" IL2CPP_METHOD_ATTR void VideoTrackableEventHandler_OnTrackingFound_m2042275778 (VideoTrackableEventHandler_t944783369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackableEventHandler_OnTrackingFound_m2042275778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = ((DefaultTrackableEventHandler_t1588957063 *)__this)->get_mTrackableBehaviour_4();
		NullCheck(L_0);
		VideoController_t2238106033 * L_1 = Component_GetComponentInChildren_TisVideoController_t2238106033_m1753125609(L_0, /*hidden argument*/Component_GetComponentInChildren_TisVideoController_t2238106033_m1753125609_RuntimeMethod_var);
		NullCheck(L_1);
		VideoController_Play_m3654523600(L_1, /*hidden argument*/NULL);
		DefaultTrackableEventHandler_OnTrackingFound_m2146197130(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VideoTrackableEventHandler::OnTrackingLost()
extern "C" IL2CPP_METHOD_ATTR void VideoTrackableEventHandler_OnTrackingLost_m2629131473 (VideoTrackableEventHandler_t944783369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoTrackableEventHandler_OnTrackingLost_m2629131473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = ((DefaultTrackableEventHandler_t1588957063 *)__this)->get_mTrackableBehaviour_4();
		NullCheck(L_0);
		VideoController_t2238106033 * L_1 = Component_GetComponentInChildren_TisVideoController_t2238106033_m1753125609(L_0, /*hidden argument*/Component_GetComponentInChildren_TisVideoController_t2238106033_m1753125609_RuntimeMethod_var);
		NullCheck(L_1);
		VideoController_Pause_m3562938676(L_1, /*hidden argument*/NULL);
		DefaultTrackableEventHandler_OnTrackingLost_m2776455481(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VirtualButtonEventHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VirtualButtonEventHandler__ctor_m2794813322 (VirtualButtonEventHandler_t1548763206 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VirtualButtonEventHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void VirtualButtonEventHandler_Start_m2291542140 (VirtualButtonEventHandler_t1548763206 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualButtonEventHandler_Start_m2291542140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		VirtualButtonBehaviourU5BU5D_t2153394082* L_0 = Component_GetComponentsInChildren_TisVirtualButtonBehaviour_t1436326451_m4196814779(__this, /*hidden argument*/Component_GetComponentsInChildren_TisVirtualButtonBehaviour_t1436326451_m4196814779_RuntimeMethod_var);
		__this->set_virtualButtonBehaviours_7(L_0);
		V_0 = 0;
		goto IL_0025;
	}

IL_0013:
	{
		VirtualButtonBehaviourU5BU5D_t2153394082* L_1 = __this->get_virtualButtonBehaviours_7();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		VirtualButtonBehaviour_t1436326451 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		VirtualButtonBehaviour_RegisterEventHandler_m1227097985(L_4, __this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		VirtualButtonBehaviourU5BU5D_t2153394082* L_7 = __this->get_virtualButtonBehaviours_7();
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void VirtualButtonEventHandler::OnButtonPressed(Vuforia.VirtualButtonBehaviour)
extern "C" IL2CPP_METHOD_ATTR void VirtualButtonEventHandler_OnButtonPressed_m2383829469 (VirtualButtonEventHandler_t1548763206 * __this, VirtualButtonBehaviour_t1436326451 * ___vb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualButtonEventHandler_OnButtonPressed_m2383829469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualButtonBehaviour_t1436326451 * L_0 = ___vb0;
		NullCheck(L_0);
		String_t* L_1 = VirtualButtonBehaviour_get_VirtualButtonName_m3664540626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral628560640, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Material_t340375123 * L_3 = __this->get_m_VirtualButtonPressed_5();
		VirtualButtonEventHandler_SetVirtualButtonMaterial_m447769224(__this, L_3, /*hidden argument*/NULL);
		MonoBehaviour_StopAllCoroutines_m3328507247(__this, /*hidden argument*/NULL);
		Component_BroadcastMessage_m2662892479(__this, _stringLiteral2625406672, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VirtualButtonEventHandler::OnButtonReleased(Vuforia.VirtualButtonBehaviour)
extern "C" IL2CPP_METHOD_ATTR void VirtualButtonEventHandler_OnButtonReleased_m160710258 (VirtualButtonEventHandler_t1548763206 * __this, VirtualButtonBehaviour_t1436326451 * ___vb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualButtonEventHandler_OnButtonReleased_m160710258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualButtonBehaviour_t1436326451 * L_0 = ___vb0;
		NullCheck(L_0);
		String_t* L_1 = VirtualButtonBehaviour_get_VirtualButtonName_m3664540626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3877245508, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Material_t340375123 * L_3 = __this->get_m_VirtualButtonDefault_4();
		VirtualButtonEventHandler_SetVirtualButtonMaterial_m447769224(__this, L_3, /*hidden argument*/NULL);
		float L_4 = __this->get_m_ButtonReleaseTimeDelay_6();
		VirtualButtonBehaviour_t1436326451 * L_5 = ___vb0;
		NullCheck(L_5);
		String_t* L_6 = VirtualButtonBehaviour_get_VirtualButtonName_m3664540626(L_5, /*hidden argument*/NULL);
		RuntimeObject* L_7 = VirtualButtonEventHandler_DelayOnButtonReleasedEvent_m751776769(__this, L_4, L_6, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VirtualButtonEventHandler::SetVirtualButtonMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void VirtualButtonEventHandler_SetVirtualButtonMaterial_m447769224 (VirtualButtonEventHandler_t1548763206 * __this, Material_t340375123 * ___material0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualButtonEventHandler_SetVirtualButtonMaterial_m447769224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0007:
	{
		Material_t340375123 * L_0 = ___material0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		VirtualButtonBehaviourU5BU5D_t2153394082* L_2 = __this->get_virtualButtonBehaviours_7();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		VirtualButtonBehaviour_t1436326451 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		MeshRenderer_t587009260 * L_6 = Component_GetComponent_TisMeshRenderer_t587009260_m3511415476(L_5, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t587009260_m3511415476_RuntimeMethod_var);
		Material_t340375123 * L_7 = ___material0;
		NullCheck(L_6);
		Renderer_set_sharedMaterial_m2374163090(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0026:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_9 = V_0;
		VirtualButtonBehaviourU5BU5D_t2153394082* L_10 = __this->get_virtualButtonBehaviours_7();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator VirtualButtonEventHandler::DelayOnButtonReleasedEvent(System.Single,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VirtualButtonEventHandler_DelayOnButtonReleasedEvent_m751776769 (VirtualButtonEventHandler_t1548763206 * __this, float ___waitTime0, String_t* ___buttonName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualButtonEventHandler_DelayOnButtonReleasedEvent_m751776769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297 * V_0 = NULL;
	{
		U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297 * L_0 = (U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297 *)il2cpp_codegen_object_new(U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297_il2cpp_TypeInfo_var);
		U3CDelayOnButtonReleasedEventU3Ec__Iterator0__ctor_m323425389(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297 * L_1 = V_0;
		float L_2 = ___waitTime0;
		NullCheck(L_1);
		L_1->set_waitTime_0(L_2);
		U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297 * L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CDelayOnButtonReleasedEventU3Ec__Iterator0__ctor_m323425389 (U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CDelayOnButtonReleasedEventU3Ec__Iterator0_MoveNext_m1533449474 (U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayOnButtonReleasedEventU3Ec__Iterator0_MoveNext_m1533449474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_005e;
	}

IL_0021:
	{
		float L_2 = __this->get_waitTime_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_2(L_3);
		bool L_4 = __this->get_U24disposing_3();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0041:
	{
		goto IL_0060;
	}

IL_0046:
	{
		VirtualButtonEventHandler_t1548763206 * L_5 = __this->get_U24this_1();
		NullCheck(L_5);
		Component_BroadcastMessage_m2662892479(L_5, _stringLiteral2155613312, 1, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_005e:
	{
		return (bool)0;
	}

IL_0060:
	{
		return (bool)1;
	}
}
// System.Object VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayOnButtonReleasedEventU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2723725963 (U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayOnButtonReleasedEventU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1052773257 (U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CDelayOnButtonReleasedEventU3Ec__Iterator0_Dispose_m4232767235 (U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CDelayOnButtonReleasedEventU3Ec__Iterator0_Reset_m3669565378 (U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayOnButtonReleasedEventU3Ec__Iterator0_Reset_m3669565378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CDelayOnButtonReleasedEventU3Ec__Iterator0_Reset_m3669565378_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VuMarkHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler__ctor_m3378689735 (VuMarkHandler_t1415762101 * __this, const RuntimeMethod* method)
{
	{
		__this->set_fusionProviderType_5(5);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VuMarkHandler::Awake()
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_Awake_m1422516943 (VuMarkHandler_t1415762101 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_Awake_m1422516943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t3697830469 * L_1 = VuforiaConfiguration_get_Vuforia_m1588208597(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GenericVuforiaConfiguration_set_MaxSimultaneousImageTargets_m2987003833(L_1, ((int32_t)10), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_2 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = (intptr_t)VuMarkHandler_OnBeforeVuforiaTrackerInitialized_m424657148_RuntimeMethod_var;
		Action_t1264377477 * L_4 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_4, __this, (intptr_t)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VuforiaARController_RegisterBeforeVuforiaTrackersInitializedCallback_m522809966(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VuMarkHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_Start_m3241718565 (VuMarkHandler_t1415762101 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_Start_m3241718565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AugmentationObject_t2506029784 * V_0 = NULL;
	AugmentationObjectU5BU5D_t2045593289* V_1 = NULL;
	int32_t V_2 = 0;
	VuMarkBehaviour_t1178230459 * V_3 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_0 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)VuMarkHandler_OnVuforiaStarted_m1391111315_RuntimeMethod_var;
		Action_t1264377477 * L_2 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_2, __this, (intptr_t)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VuforiaARController_RegisterVuforiaStartedCallback_m3258152770(L_0, L_2, /*hidden argument*/NULL);
		Dictionary_2_t3625702484 * L_3 = (Dictionary_2_t3625702484 *)il2cpp_codegen_object_new(Dictionary_2_t3625702484_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2275355514(L_3, /*hidden argument*/Dictionary_2__ctor_m2275355514_RuntimeMethod_var);
		__this->set_vumarkInstanceTextures_8(L_3);
		Dictionary_2_t898892918 * L_4 = (Dictionary_2_t898892918 *)il2cpp_codegen_object_new(Dictionary_2_t898892918_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m19875156(L_4, /*hidden argument*/Dictionary_2__ctor_m19875156_RuntimeMethod_var);
		__this->set_vumarkAugmentationObjects_9(L_4);
		AugmentationObjectU5BU5D_t2045593289* L_5 = __this->get_augmentationObjects_13();
		V_1 = L_5;
		V_2 = 0;
		goto IL_0059;
	}

IL_003a:
	{
		AugmentationObjectU5BU5D_t2045593289* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		AugmentationObject_t2506029784 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = L_9;
		Dictionary_2_t898892918 * L_10 = __this->get_vumarkAugmentationObjects_9();
		AugmentationObject_t2506029784 * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = L_11->get_vumarkID_0();
		AugmentationObject_t2506029784 * L_13 = V_0;
		NullCheck(L_13);
		GameObject_t1113636619 * L_14 = L_13->get_augmentation_1();
		NullCheck(L_10);
		Dictionary_2_Add_m1235394044(L_10, L_12, L_14, /*hidden argument*/Dictionary_2_Add_m1235394044_RuntimeMethod_var);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0059:
	{
		int32_t L_16 = V_2;
		AugmentationObjectU5BU5D_t2045593289* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		VuMarkBehaviour_t1178230459 * L_18 = Object_FindObjectOfType_TisVuMarkBehaviour_t1178230459_m2803750251(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisVuMarkBehaviour_t1178230459_m2803750251_RuntimeMethod_var);
		V_3 = L_18;
		VuMarkBehaviour_t1178230459 * L_19 = V_3;
		bool L_20 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0080;
		}
	}
	{
		VuMarkBehaviour_t1178230459 * L_21 = V_3;
		NullCheck(L_21);
		GameObject_t1113636619 * L_22 = Component_get_gameObject_m442555142(L_21, /*hidden argument*/NULL);
		VuMarkHandler_ToggleRenderers_m2154168747(__this, L_22, (bool)0, /*hidden argument*/NULL);
	}

IL_0080:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		PanelShowHide_t3128188850 * L_23 = Object_FindObjectOfType_TisPanelShowHide_t3128188850_m4107511304(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisPanelShowHide_t3128188850_m4107511304_RuntimeMethod_var);
		__this->set_nearestVuMarkScreenPanel_10(L_23);
		return;
	}
}
// System.Void VuMarkHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_Update_m901619523 (VuMarkHandler_t1415762101 * __this, const RuntimeMethod* method)
{
	{
		VuMarkHandler_UpdateClosestTarget_m1555317948(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VuMarkHandler::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_OnDestroy_m1959387815 (VuMarkHandler_t1415762101 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_OnDestroy_m1959387815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t3697830469 * L_1 = VuforiaConfiguration_get_Vuforia_m1588208597(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GenericVuforiaConfiguration_set_MaxSimultaneousImageTargets_m2987003833(L_1, 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_2 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = (intptr_t)VuMarkHandler_OnBeforeVuforiaTrackerInitialized_m424657148_RuntimeMethod_var;
		Action_t1264377477 * L_4 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_4, __this, (intptr_t)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VuforiaARController_UnregisterBeforeVuforiaTrackersInitializedCallback_m4235253672(L_2, L_4, /*hidden argument*/NULL);
		VuMarkManager_t2982459596 * L_5 = __this->get_vumarkManager_6();
		intptr_t L_6 = (intptr_t)VuMarkHandler_OnVuMarkBehaviourDetected_m2885491279_RuntimeMethod_var;
		Action_1_t1350698054 * L_7 = (Action_1_t1350698054 *)il2cpp_codegen_object_new(Action_1_t1350698054_il2cpp_TypeInfo_var);
		Action_1__ctor_m2885317269(L_7, __this, (intptr_t)L_6, /*hidden argument*/Action_1__ctor_m2885317269_RuntimeMethod_var);
		NullCheck(L_5);
		VuMarkManager_UnregisterVuMarkBehaviourDetectedCallback_m3907295535(L_5, L_7, /*hidden argument*/NULL);
		VuMarkManager_t2982459596 * L_8 = __this->get_vumarkManager_6();
		intptr_t L_9 = (intptr_t)VuMarkHandler_OnVuMarkDetected_m1153129555_RuntimeMethod_var;
		Action_1_t1302041398 * L_10 = (Action_1_t1302041398 *)il2cpp_codegen_object_new(Action_1_t1302041398_il2cpp_TypeInfo_var);
		Action_1__ctor_m4047871495(L_10, __this, (intptr_t)L_9, /*hidden argument*/Action_1__ctor_m4047871495_RuntimeMethod_var);
		NullCheck(L_8);
		VuMarkManager_UnregisterVuMarkDetectedCallback_m2762130345(L_8, L_10, /*hidden argument*/NULL);
		VuMarkManager_t2982459596 * L_11 = __this->get_vumarkManager_6();
		intptr_t L_12 = (intptr_t)VuMarkHandler_OnVuMarkLost_m1757530151_RuntimeMethod_var;
		Action_1_t1302041398 * L_13 = (Action_1_t1302041398 *)il2cpp_codegen_object_new(Action_1_t1302041398_il2cpp_TypeInfo_var);
		Action_1__ctor_m4047871495(L_13, __this, (intptr_t)L_12, /*hidden argument*/Action_1__ctor_m4047871495_RuntimeMethod_var);
		NullCheck(L_11);
		VuMarkManager_UnregisterVuMarkLostCallback_m2291705850(L_11, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VuMarkHandler::OnBeforeVuforiaTrackerInitialized()
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_OnBeforeVuforiaTrackerInitialized_m424657148 (VuMarkHandler_t1415762101 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_OnBeforeVuforiaTrackerInitialized_m424657148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_fusionProviderType_5();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(FusionProviderType_t4010899297_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral408578987, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DeviceTrackerARController_t1095592542_il2cpp_TypeInfo_var);
		DeviceTrackerARController_t1095592542 * L_4 = DeviceTrackerARController_get_Instance_m1618232027(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_fusionProviderType_5();
		NullCheck(L_4);
		DeviceTrackerARController_set_FusionProvider_m2890695734(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VuMarkHandler::OnVuforiaStarted()
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_OnVuforiaStarted_m1391111315 (VuMarkHandler_t1415762101 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_OnVuforiaStarted_m1391111315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = TrackerManager_get_Instance_m777262631(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		StateManager_t1982749557 * L_1 = InterfaceFuncInvoker0< StateManager_t1982749557 * >::Invoke(3 /* Vuforia.StateManager Vuforia.ITrackerManager::GetStateManager() */, ITrackerManager_t607206903_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		VuMarkManager_t2982459596 * L_2 = StateManager_GetVuMarkManager_m2413626463(L_1, /*hidden argument*/NULL);
		__this->set_vumarkManager_6(L_2);
		VuMarkManager_t2982459596 * L_3 = __this->get_vumarkManager_6();
		intptr_t L_4 = (intptr_t)VuMarkHandler_OnVuMarkBehaviourDetected_m2885491279_RuntimeMethod_var;
		Action_1_t1350698054 * L_5 = (Action_1_t1350698054 *)il2cpp_codegen_object_new(Action_1_t1350698054_il2cpp_TypeInfo_var);
		Action_1__ctor_m2885317269(L_5, __this, (intptr_t)L_4, /*hidden argument*/Action_1__ctor_m2885317269_RuntimeMethod_var);
		NullCheck(L_3);
		VuMarkManager_RegisterVuMarkBehaviourDetectedCallback_m3839577247(L_3, L_5, /*hidden argument*/NULL);
		VuMarkManager_t2982459596 * L_6 = __this->get_vumarkManager_6();
		intptr_t L_7 = (intptr_t)VuMarkHandler_OnVuMarkDetected_m1153129555_RuntimeMethod_var;
		Action_1_t1302041398 * L_8 = (Action_1_t1302041398 *)il2cpp_codegen_object_new(Action_1_t1302041398_il2cpp_TypeInfo_var);
		Action_1__ctor_m4047871495(L_8, __this, (intptr_t)L_7, /*hidden argument*/Action_1__ctor_m4047871495_RuntimeMethod_var);
		NullCheck(L_6);
		VuMarkManager_RegisterVuMarkDetectedCallback_m716813355(L_6, L_8, /*hidden argument*/NULL);
		VuMarkManager_t2982459596 * L_9 = __this->get_vumarkManager_6();
		intptr_t L_10 = (intptr_t)VuMarkHandler_OnVuMarkLost_m1757530151_RuntimeMethod_var;
		Action_1_t1302041398 * L_11 = (Action_1_t1302041398 *)il2cpp_codegen_object_new(Action_1_t1302041398_il2cpp_TypeInfo_var);
		Action_1__ctor_m4047871495(L_11, __this, (intptr_t)L_10, /*hidden argument*/Action_1__ctor_m4047871495_RuntimeMethod_var);
		NullCheck(L_9);
		VuMarkManager_RegisterVuMarkLostCallback_m902340585(L_9, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VuMarkHandler::OnVuMarkBehaviourDetected(Vuforia.VuMarkBehaviour)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_OnVuMarkBehaviourDetected_m2885491279 (VuMarkHandler_t1415762101 * __this, VuMarkBehaviour_t1178230459 * ___vumarkBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_OnVuMarkBehaviourDetected_m2885491279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VuMarkBehaviour_t1178230459 * L_0 = ___vumarkBehaviour0;
		NullCheck(L_0);
		String_t* L_1 = TrackableBehaviour_get_TrackableName_m3644057705(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3501509749, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		VuMarkBehaviour_t1178230459 * L_3 = ___vumarkBehaviour0;
		VuMarkHandler_GenerateVuMarkBorderOutline_m2061814309(__this, L_3, /*hidden argument*/NULL);
		VuMarkBehaviour_t1178230459 * L_4 = ___vumarkBehaviour0;
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		VuMarkHandler_ToggleRenderers_m2154168747(__this, L_5, (bool)1, /*hidden argument*/NULL);
		VuMarkBehaviour_t1178230459 * L_6 = ___vumarkBehaviour0;
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		VuMarkHandler_DestroyChildAugmentationsOfTransform_m3294511784(__this, L_7, /*hidden argument*/NULL);
		VuMarkBehaviour_t1178230459 * L_8 = ___vumarkBehaviour0;
		RuntimeObject* L_9 = VuMarkHandler_OnVuMarkTargetAvailable_m27070708(__this, L_8, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator VuMarkHandler::OnVuMarkTargetAvailable(Vuforia.VuMarkBehaviour)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuMarkHandler_OnVuMarkTargetAvailable_m27070708 (VuMarkHandler_t1415762101 * __this, VuMarkBehaviour_t1178230459 * ___vumarkBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_OnVuMarkTargetAvailable_m27070708_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * V_0 = NULL;
	{
		U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * L_0 = (U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 *)il2cpp_codegen_object_new(U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394_il2cpp_TypeInfo_var);
		U3COnVuMarkTargetAvailableU3Ec__Iterator0__ctor_m2268601434(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * L_1 = V_0;
		VuMarkBehaviour_t1178230459 * L_2 = ___vumarkBehaviour0;
		NullCheck(L_1);
		L_1->set_vumarkBehaviour_0(L_2);
		U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * L_4 = V_0;
		return L_4;
	}
}
// System.Void VuMarkHandler::OnVuMarkDetected(Vuforia.VuMarkTarget)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_OnVuMarkDetected_m1153129555 (VuMarkHandler_t1415762101 * __this, RuntimeObject* ___vumarkTarget0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_OnVuMarkDetected_m1153129555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___vumarkTarget0;
		String_t* L_1 = VuMarkHandler_GetVuMarkId_m2242633984(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3491265674, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = ___vumarkTarget0;
		Texture2D_t3840446185 * L_4 = VuMarkHandler_RetrieveStoredTextureForVuMarkTarget_m3023601945(__this, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		Dictionary_2_t3625702484 * L_6 = __this->get_vumarkInstanceTextures_8();
		RuntimeObject* L_7 = ___vumarkTarget0;
		String_t* L_8 = VuMarkHandler_GetVuMarkId_m2242633984(__this, L_7, /*hidden argument*/NULL);
		RuntimeObject* L_9 = ___vumarkTarget0;
		Texture2D_t3840446185 * L_10 = VuMarkHandler_GenerateTextureFromVuMarkInstanceImage_m2453209064(__this, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		Dictionary_2_Add_m1828178762(L_6, L_8, L_10, /*hidden argument*/Dictionary_2_Add_m1828178762_RuntimeMethod_var);
	}

IL_0041:
	{
		return;
	}
}
// System.Void VuMarkHandler::OnVuMarkLost(Vuforia.VuMarkTarget)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_OnVuMarkLost_m1757530151 (VuMarkHandler_t1415762101 * __this, RuntimeObject* ___vumarkTarget0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_OnVuMarkLost_m1757530151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___vumarkTarget0;
		String_t* L_1 = VuMarkHandler_GetVuMarkId_m2242633984(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral511758811, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = ___vumarkTarget0;
		RuntimeObject* L_4 = __this->get_currentVuMark_12();
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)L_4))))
		{
			goto IL_002d;
		}
	}
	{
		PanelShowHide_t3128188850 * L_5 = __this->get_nearestVuMarkScreenPanel_10();
		NullCheck(L_5);
		PanelShowHide_ResetShowTrigger_m404940343(L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.String VuMarkHandler::GetVuMarkDataType(Vuforia.VuMarkTarget)
extern "C" IL2CPP_METHOD_ATTR String_t* VuMarkHandler_GetVuMarkDataType_m4036864623 (VuMarkHandler_t1415762101 * __this, RuntimeObject* ___vumarkTarget0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_GetVuMarkDataType_m4036864623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___vumarkTarget0;
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Vuforia.InstanceId Vuforia.VuMarkTarget::get_InstanceId() */, VuMarkTarget_t1129573803_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Vuforia.InstanceIdType Vuforia.InstanceId::get_DataType() */, InstanceId_t2455430337_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_0037;
	}

IL_0025:
	{
		return _stringLiteral130596679;
	}

IL_002b:
	{
		return _stringLiteral1236129805;
	}

IL_0031:
	{
		return _stringLiteral4039910812;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_6;
	}
}
// System.String VuMarkHandler::GetVuMarkId(Vuforia.VuMarkTarget)
extern "C" IL2CPP_METHOD_ATTR String_t* VuMarkHandler_GetVuMarkId_m2242633984 (VuMarkHandler_t1415762101 * __this, RuntimeObject* ___vumarkTarget0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_GetVuMarkId_m2242633984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___vumarkTarget0;
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Vuforia.InstanceId Vuforia.VuMarkTarget::get_InstanceId() */, VuMarkTarget_t1129573803_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Vuforia.InstanceIdType Vuforia.InstanceId::get_DataType() */, InstanceId_t2455430337_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0057;
	}

IL_0025:
	{
		RuntimeObject* L_6 = ___vumarkTarget0;
		NullCheck(L_6);
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Vuforia.InstanceId Vuforia.VuMarkTarget::get_InstanceId() */, VuMarkTarget_t1129573803_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		String_t* L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Vuforia.InstanceId::get_HexStringValue() */, InstanceId_t2455430337_il2cpp_TypeInfo_var, L_7);
		return L_8;
	}

IL_0031:
	{
		RuntimeObject* L_9 = ___vumarkTarget0;
		NullCheck(L_9);
		RuntimeObject* L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Vuforia.InstanceId Vuforia.VuMarkTarget::get_InstanceId() */, VuMarkTarget_t1129573803_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		String_t* L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Vuforia.InstanceId::get_StringValue() */, InstanceId_t2455430337_il2cpp_TypeInfo_var, L_10);
		return L_11;
	}

IL_003d:
	{
		RuntimeObject* L_12 = ___vumarkTarget0;
		NullCheck(L_12);
		RuntimeObject* L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Vuforia.InstanceId Vuforia.VuMarkTarget::get_InstanceId() */, VuMarkTarget_t1129573803_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		uint64_t L_14 = InterfaceFuncInvoker0< uint64_t >::Invoke(4 /* System.UInt64 Vuforia.InstanceId::get_NumericValue() */, InstanceId_t2455430337_il2cpp_TypeInfo_var, L_13);
		V_1 = L_14;
		String_t* L_15 = UInt64_ToString_m1529093114((uint64_t*)(&V_1), /*hidden argument*/NULL);
		return L_15;
	}

IL_0057:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_16;
	}
}
// UnityEngine.Sprite VuMarkHandler::GetVuMarkImage(Vuforia.VuMarkTarget)
extern "C" IL2CPP_METHOD_ATTR Sprite_t280657092 * VuMarkHandler_GetVuMarkImage_m1022510546 (VuMarkHandler_t1415762101 * __this, RuntimeObject* ___vumarkTarget0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_GetVuMarkImage_m1022510546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Image_t745056343 * V_0 = NULL;
	Texture2D_t3840446185 * V_1 = NULL;
	Texture2D_t3840446185 * V_2 = NULL;
	Rect_t2360479859  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		RuntimeObject* L_0 = ___vumarkTarget0;
		NullCheck(L_0);
		Image_t745056343 * L_1 = InterfaceFuncInvoker0< Image_t745056343 * >::Invoke(2 /* Vuforia.Image Vuforia.VuMarkTarget::get_InstanceImage() */, VuMarkTarget_t1129573803_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		Image_t745056343 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral316544498, /*hidden argument*/NULL);
		return (Sprite_t280657092 *)NULL;
	}

IL_0019:
	{
		Image_t745056343 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = Image_get_Width_m3459292501(L_3, /*hidden argument*/NULL);
		Image_t745056343 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = Image_get_Height_m1593747350(L_5, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_7 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_7, L_4, L_6, 4, (bool)0, /*hidden argument*/NULL);
		V_2 = L_7;
		Texture2D_t3840446185 * L_8 = V_2;
		NullCheck(L_8);
		Texture_set_wrapMode_m587872754(L_8, 1, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_9 = V_2;
		V_1 = L_9;
		Image_t745056343 * L_10 = V_0;
		Texture2D_t3840446185 * L_11 = V_1;
		NullCheck(L_10);
		Image_CopyToTexture_m524838193(L_10, L_11, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_12 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3373731737);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3373731737);
		ObjectU5BU5D_t2843939325* L_14 = L_13;
		Image_t745056343 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = Image_get_Width_m3459292501(L_15, /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		ObjectU5BU5D_t2843939325* L_19 = L_14;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral3452614616);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614616);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		Image_t745056343 * L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = Image_get_Height_m1593747350(L_21, /*hidden argument*/NULL);
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_24);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m2971454694(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_26);
		Texture2D_t3840446185 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_28);
		Rect__ctor_m2614021312((Rect_t2360479859 *)(&V_3), (0.0f), (0.0f), (((float)((float)L_27))), (((float)((float)L_29))), /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_30 = V_1;
		Rect_t2360479859  L_31 = V_3;
		Vector2_t2156229523  L_32;
		memset(&L_32, 0, sizeof(L_32));
		Vector2__ctor_m3970636864((&L_32), (0.5f), (0.5f), /*hidden argument*/NULL);
		Sprite_t280657092 * L_33 = Sprite_Create_m803022218(NULL /*static, unused*/, L_30, L_31, L_32, /*hidden argument*/NULL);
		return L_33;
	}
}
// System.String VuMarkHandler::GetNumericVuMarkDescription(Vuforia.VuMarkTarget)
extern "C" IL2CPP_METHOD_ATTR String_t* VuMarkHandler_GetNumericVuMarkDescription_m384725732 (VuMarkHandler_t1415762101 * __this, RuntimeObject* ___vumarkTarget0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_GetNumericVuMarkDescription_m384725732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___vumarkTarget0;
		String_t* L_1 = VuMarkHandler_GetVuMarkId_m2242633984(__this, L_0, /*hidden argument*/NULL);
		bool L_2 = Int32_TryParse_m2404707562(NULL /*static, unused*/, L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_3 = V_0;
		V_1 = ((int32_t)((int32_t)L_3%(int32_t)4));
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0038;
			}
			case 3:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_0032:
	{
		return _stringLiteral869545341;
	}

IL_0038:
	{
		return _stringLiteral3549741636;
	}

IL_003e:
	{
		return _stringLiteral3276552461;
	}

IL_0044:
	{
		return _stringLiteral3216961754;
	}

IL_004a:
	{
		return _stringLiteral2854237347;
	}

IL_0050:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_5;
	}
}
// System.Void VuMarkHandler::SetVuMarkInfoForCanvas(Vuforia.VuMarkBehaviour)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_SetVuMarkInfoForCanvas_m2305932128 (VuMarkHandler_t1415762101 * __this, VuMarkBehaviour_t1178230459 * ___vumarkBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_SetVuMarkInfoForCanvas_m2305932128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_t1901882714 * V_0 = NULL;
	Image_t2670269651 * V_1 = NULL;
	Texture2D_t3840446185 * V_2 = NULL;
	Rect_t2360479859  V_3;
	memset(&V_3, 0, sizeof(V_3));
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	{
		VuMarkBehaviour_t1178230459 * L_0 = ___vumarkBehaviour0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_t1901882714 * L_2 = GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860(L_1, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t1901882714_m3637202860_RuntimeMethod_var);
		V_0 = L_2;
		VuMarkBehaviour_t1178230459 * L_3 = ___vumarkBehaviour0;
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ImageU5BU5D_t2439009922* L_5 = GameObject_GetComponentsInChildren_TisImage_t2670269651_m3275015851(L_4, /*hidden argument*/GameObject_GetComponentsInChildren_TisImage_t2670269651_m3275015851_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6 = 2;
		Image_t2670269651 * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		VuMarkBehaviour_t1178230459 * L_8 = ___vumarkBehaviour0;
		NullCheck(L_8);
		RuntimeObject* L_9 = VuMarkBehaviour_get_VuMarkTarget_m1232437050(L_8, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_10 = VuMarkHandler_RetrieveStoredTextureForVuMarkTarget_m3023601945(__this, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		Texture2D_t3840446185 * L_11 = V_2;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		Texture2D_t3840446185 * L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
		Rect__ctor_m2614021312((Rect_t2360479859 *)(&V_3), (0.0f), (0.0f), (((float)((float)L_12))), (((float)((float)L_14))), /*hidden argument*/NULL);
		VuMarkBehaviour_t1178230459 * L_15 = ___vumarkBehaviour0;
		NullCheck(L_15);
		RuntimeObject* L_16 = VuMarkBehaviour_get_VuMarkTarget_m1232437050(L_15, /*hidden argument*/NULL);
		String_t* L_17 = VuMarkHandler_GetVuMarkId_m2242633984(__this, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		VuMarkBehaviour_t1178230459 * L_18 = ___vumarkBehaviour0;
		NullCheck(L_18);
		RuntimeObject* L_19 = VuMarkBehaviour_get_VuMarkTarget_m1232437050(L_18, /*hidden argument*/NULL);
		String_t* L_20 = VuMarkHandler_GetVuMarkDataType_m4036864623(__this, L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		VuMarkBehaviour_t1178230459 * L_21 = ___vumarkBehaviour0;
		NullCheck(L_21);
		RuntimeObject* L_22 = VuMarkBehaviour_get_VuMarkTarget_m1232437050(L_21, /*hidden argument*/NULL);
		String_t* L_23 = VuMarkHandler_GetNumericVuMarkDescription_m384725732(__this, L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		Text_t1901882714 * L_24 = V_0;
		StringU5BU5D_t1281789340* L_25 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t1281789340* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral2138194072);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2138194072);
		StringU5BU5D_t1281789340* L_27 = L_26;
		String_t* L_28 = V_4;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_28);
		StringU5BU5D_t1281789340* L_29 = L_27;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral3786252490);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3786252490);
		StringU5BU5D_t1281789340* L_30 = L_29;
		String_t* L_31 = V_5;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_31);
		StringU5BU5D_t1281789340* L_32 = L_30;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral3042945994);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3042945994);
		StringU5BU5D_t1281789340* L_33 = L_32;
		String_t* L_34 = V_6;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_34);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m1809518182(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_35);
		Image_t2670269651 * L_36 = V_1;
		Texture2D_t3840446185 * L_37 = V_2;
		Rect_t2360479859  L_38 = V_3;
		Vector2_t2156229523  L_39;
		memset(&L_39, 0, sizeof(L_39));
		Vector2__ctor_m3970636864((&L_39), (0.5f), (0.5f), /*hidden argument*/NULL);
		Sprite_t280657092 * L_40 = Sprite_Create_m803022218(NULL /*static, unused*/, L_37, L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_36);
		Image_set_sprite_m2369174689(L_36, L_40, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VuMarkHandler::SetVuMarkAugmentation(Vuforia.VuMarkBehaviour)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_SetVuMarkAugmentation_m3922064865 (VuMarkHandler_t1415762101 * __this, VuMarkBehaviour_t1178230459 * ___vumarkBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_SetVuMarkAugmentation_m3922064865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObject_t1113636619 * V_1 = NULL;
	{
		Dictionary_2_t898892918 * L_0 = __this->get_vumarkAugmentationObjects_9();
		VuMarkBehaviour_t1178230459 * L_1 = ___vumarkBehaviour0;
		NullCheck(L_1);
		RuntimeObject* L_2 = VuMarkBehaviour_get_VuMarkTarget_m1232437050(L_1, /*hidden argument*/NULL);
		String_t* L_3 = VuMarkHandler_GetVuMarkId_m2242633984(__this, L_2, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = VuMarkHandler_GetValueFromDictionary_TisGameObject_t1113636619_m3240415858(__this, L_0, L_3, /*hidden argument*/VuMarkHandler_GetValueFromDictionary_TisGameObject_t1113636619_m3240415858_RuntimeMethod_var);
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006c;
		}
	}
	{
		GameObject_t1113636619 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_8 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_1 = L_8;
		GameObject_t1113636619 * L_9 = V_1;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		VuMarkBehaviour_t1178230459 * L_11 = ___vumarkBehaviour0;
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_SetParent_m381167889(L_10, L_12, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = V_1;
		NullCheck(L_13);
		Transform_t3600365921 * L_14 = GameObject_get_transform_m1369836730(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_15 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localPosition_m4128471975(L_14, L_15, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_16 = V_1;
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = GameObject_get_transform_m1369836730(L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localScale_m3053443106(L_17, L_18, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_19 = V_1;
		NullCheck(L_19);
		Transform_t3600365921 * L_20 = GameObject_get_transform_m1369836730(L_19, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localEulerAngles_m4202601546(L_20, L_21, /*hidden argument*/NULL);
	}

IL_006c:
	{
		return;
	}
}
// System.Void VuMarkHandler::SetVuMarkOpticalSeeThroughConfig(Vuforia.VuMarkBehaviour)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_SetVuMarkOpticalSeeThroughConfig_m1191219436 (VuMarkHandler_t1415762101 * __this, VuMarkBehaviour_t1178230459 * ___vumarkBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_SetVuMarkOpticalSeeThroughConfig_m1191219436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MeshRenderer_t587009260 * V_0 = NULL;
	MeshRenderer_t587009260 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		DigitalEyewearConfiguration_t546560202 * L_1 = VuforiaConfiguration_get_DigitalEyewear_m2721108911(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = DigitalEyewearConfiguration_get_SeeThroughConfiguration_m4233842437(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_006a;
		}
	}
	{
		VuMarkBehaviour_t1178230459 * L_3 = ___vumarkBehaviour0;
		NullCheck(L_3);
		MeshRenderer_t587009260 * L_4 = Component_GetComponent_TisMeshRenderer_t587009260_m3511415476(L_3, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t587009260_m3511415476_RuntimeMethod_var);
		V_0 = L_4;
		VuMarkBehaviour_t1178230459 * L_5 = ___vumarkBehaviour0;
		NullCheck(L_5);
		RuntimeObject* L_6 = VuMarkBehaviour_get_VuMarkTemplate_m3771121130(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Vuforia.VuMarkTemplate::get_TrackingFromRuntimeAppearance() */, VuMarkTemplate_t3623118391_il2cpp_TypeInfo_var, L_6);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		MeshRenderer_t587009260 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		MeshRenderer_t587009260 * L_10 = V_0;
		NullCheck(L_10);
		Renderer_set_enabled_m1727253150(L_10, (bool)0, /*hidden argument*/NULL);
	}

IL_003e:
	{
		goto IL_0065;
	}

IL_0043:
	{
		MeshRenderer_t587009260 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		MeshRenderer_t587009260 * L_13 = V_0;
		NullCheck(L_13);
		Material_t340375123 * L_14 = Renderer_get_material_m4171603682(L_13, /*hidden argument*/NULL);
		VuMarkBehaviour_t1178230459 * L_15 = ___vumarkBehaviour0;
		NullCheck(L_15);
		RuntimeObject* L_16 = VuMarkBehaviour_get_VuMarkTarget_m1232437050(L_15, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_17 = VuMarkHandler_RetrieveStoredTextureForVuMarkTarget_m3023601945(__this, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Material_set_mainTexture_m544811714(L_14, L_17, /*hidden argument*/NULL);
	}

IL_0065:
	{
		goto IL_0083;
	}

IL_006a:
	{
		VuMarkBehaviour_t1178230459 * L_18 = ___vumarkBehaviour0;
		NullCheck(L_18);
		MeshRenderer_t587009260 * L_19 = Component_GetComponent_TisMeshRenderer_t587009260_m3511415476(L_18, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t587009260_m3511415476_RuntimeMethod_var);
		V_1 = L_19;
		MeshRenderer_t587009260 * L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0083;
		}
	}
	{
		MeshRenderer_t587009260 * L_22 = V_1;
		NullCheck(L_22);
		Renderer_set_enabled_m1727253150(L_22, (bool)0, /*hidden argument*/NULL);
	}

IL_0083:
	{
		return;
	}
}
// UnityEngine.Texture2D VuMarkHandler::RetrieveStoredTextureForVuMarkTarget(Vuforia.VuMarkTarget)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * VuMarkHandler_RetrieveStoredTextureForVuMarkTarget_m3023601945 (VuMarkHandler_t1415762101 * __this, RuntimeObject* ___vumarkTarget0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_RetrieveStoredTextureForVuMarkTarget_m3023601945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3625702484 * L_0 = __this->get_vumarkInstanceTextures_8();
		RuntimeObject* L_1 = ___vumarkTarget0;
		String_t* L_2 = VuMarkHandler_GetVuMarkId_m2242633984(__this, L_1, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_3 = VuMarkHandler_GetValueFromDictionary_TisTexture2D_t3840446185_m224541793(__this, L_0, L_2, /*hidden argument*/VuMarkHandler_GetValueFromDictionary_TisTexture2D_t3840446185_m224541793_RuntimeMethod_var);
		return L_3;
	}
}
// UnityEngine.Texture2D VuMarkHandler::GenerateTextureFromVuMarkInstanceImage(Vuforia.VuMarkTarget)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * VuMarkHandler_GenerateTextureFromVuMarkInstanceImage_m2453209064 (VuMarkHandler_t1415762101 * __this, RuntimeObject* ___vumarkTarget0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_GenerateTextureFromVuMarkInstanceImage_m2453209064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	Texture2D_t3840446185 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2828273141, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___vumarkTarget0;
		NullCheck(L_0);
		Image_t745056343 * L_1 = InterfaceFuncInvoker0< Image_t745056343 * >::Invoke(2 /* Vuforia.Image Vuforia.VuMarkTarget::get_InstanceImage() */, VuMarkTarget_t1129573803_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral316544498, /*hidden argument*/NULL);
		return (Texture2D_t3840446185 *)NULL;
	}

IL_0021:
	{
		RuntimeObject* L_2 = ___vumarkTarget0;
		NullCheck(L_2);
		Image_t745056343 * L_3 = InterfaceFuncInvoker0< Image_t745056343 * >::Invoke(2 /* Vuforia.Image Vuforia.VuMarkTarget::get_InstanceImage() */, VuMarkTarget_t1129573803_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		int32_t L_4 = Image_get_Width_m3459292501(L_3, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		RuntimeObject* L_7 = ___vumarkTarget0;
		NullCheck(L_7);
		Image_t745056343 * L_8 = InterfaceFuncInvoker0< Image_t745056343 * >::Invoke(2 /* Vuforia.Image Vuforia.VuMarkTarget::get_InstanceImage() */, VuMarkTarget_t1129573803_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		int32_t L_9 = Image_get_Height_m1593747350(L_8, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m1715369213(NULL /*static, unused*/, L_6, _stringLiteral3452614532, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		RuntimeObject* L_13 = ___vumarkTarget0;
		NullCheck(L_13);
		Image_t745056343 * L_14 = InterfaceFuncInvoker0< Image_t745056343 * >::Invoke(2 /* Vuforia.Image Vuforia.VuMarkTarget::get_InstanceImage() */, VuMarkTarget_t1129573803_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		int32_t L_15 = Image_get_Width_m3459292501(L_14, /*hidden argument*/NULL);
		RuntimeObject* L_16 = ___vumarkTarget0;
		NullCheck(L_16);
		Image_t745056343 * L_17 = InterfaceFuncInvoker0< Image_t745056343 * >::Invoke(2 /* Vuforia.Image Vuforia.VuMarkTarget::get_InstanceImage() */, VuMarkTarget_t1129573803_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		int32_t L_18 = Image_get_Height_m1593747350(L_17, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_19 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_19, L_15, L_18, 4, (bool)0, /*hidden argument*/NULL);
		V_1 = L_19;
		Texture2D_t3840446185 * L_20 = V_1;
		NullCheck(L_20);
		Texture_set_wrapMode_m587872754(L_20, 1, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_21 = V_1;
		V_0 = L_21;
		RuntimeObject* L_22 = ___vumarkTarget0;
		NullCheck(L_22);
		Image_t745056343 * L_23 = InterfaceFuncInvoker0< Image_t745056343 * >::Invoke(2 /* Vuforia.Image Vuforia.VuMarkTarget::get_InstanceImage() */, VuMarkTarget_t1129573803_il2cpp_TypeInfo_var, L_22);
		Texture2D_t3840446185 * L_24 = V_0;
		NullCheck(L_23);
		Image_CopyToTexture_m524838193(L_23, L_24, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_25 = V_0;
		Texture2D_t3840446185 * L_26 = VuMarkHandler_FlipTextureY_m40679181(__this, L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// UnityEngine.Texture2D VuMarkHandler::FlipTextureY(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * VuMarkHandler_FlipTextureY_m40679181 (VuMarkHandler_t1415762101 * __this, Texture2D_t3840446185 * ___sourceTexture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_FlipTextureY_m40679181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	ColorU5BU5D_t941916413* V_1 = NULL;
	ColorU5BU5D_t941916413* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3486828104, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_0 = ___sourceTexture0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t3840446185 * L_2 = ___sourceTexture0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		Texture2D_t3840446185 * L_4 = ___sourceTexture0;
		NullCheck(L_4);
		int32_t L_5 = Texture2D_get_format_m2371899271(L_4, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_6 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_6, L_1, L_3, L_5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_6;
		Texture2D_t3840446185 * L_7 = ___sourceTexture0;
		NullCheck(L_7);
		ColorU5BU5D_t941916413* L_8 = Texture2D_GetPixels_m2081641574(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Texture2D_t3840446185 * L_9 = V_0;
		NullCheck(L_9);
		ColorU5BU5D_t941916413* L_10 = Texture2D_GetPixels_m2081641574(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		V_3 = 0;
		V_4 = 0;
		Texture2D_t3840446185 * L_11 = ___sourceTexture0;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		goto IL_009d;
	}

IL_0045:
	{
		V_6 = 0;
		goto IL_008a;
	}

IL_004d:
	{
		int32_t L_13 = V_5;
		Texture2D_t3840446185 * L_14 = ___sourceTexture0;
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		int32_t L_16 = V_6;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)L_15)), (int32_t)L_16)), (int32_t)1));
		int32_t L_17 = V_3;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0065;
		}
	}
	{
		V_3 = 0;
	}

IL_0065:
	{
		ColorU5BU5D_t941916413* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		ColorU5BU5D_t941916413* L_20 = V_1;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		*(Color_t2555686324 *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))) = (*(Color_t2555686324 *)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))));
		int32_t L_22 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
		int32_t L_23 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_008a:
	{
		int32_t L_24 = V_6;
		Texture2D_t3840446185 * L_25 = ___sourceTexture0;
		NullCheck(L_25);
		int32_t L_26 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_25);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_27 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1));
	}

IL_009d:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) > ((int32_t)(-1))))
		{
			goto IL_0045;
		}
	}
	{
		Texture2D_t3840446185 * L_29 = V_0;
		ColorU5BU5D_t941916413* L_30 = V_2;
		NullCheck(L_29);
		Texture2D_SetPixels_m3008871897(L_29, L_30, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_31 = V_0;
		NullCheck(L_31);
		Texture2D_Apply_m2271746283(L_31, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_32 = V_0;
		return L_32;
	}
}
// System.Void VuMarkHandler::GenerateVuMarkBorderOutline(Vuforia.VuMarkBehaviour)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_GenerateVuMarkBorderOutline_m2061814309 (VuMarkHandler_t1415762101 * __this, VuMarkBehaviour_t1178230459 * ___vumarkBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_GenerateVuMarkBorderOutline_m2061814309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	AnimationCurve_t3046754366 * V_4 = NULL;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		VuMarkBehaviour_t1178230459 * L_0 = ___vumarkBehaviour0;
		NullCheck(L_0);
		LineRenderer_t3154350270 * L_1 = Component_GetComponentInChildren_TisLineRenderer_t3154350270_m2269411787(L_0, /*hidden argument*/Component_GetComponentInChildren_TisLineRenderer_t3154350270_m2269411787_RuntimeMethod_var);
		__this->set_lineRenderer_7(L_1);
		LineRenderer_t3154350270 * L_2 = __this->get_lineRenderer_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_023b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2463663537, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_4, _stringLiteral3707370499, /*hidden argument*/NULL);
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		VuMarkBehaviour_t1178230459 * L_7 = ___vumarkBehaviour0;
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_SetParent_m381167889(L_6, L_8, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = V_0;
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = GameObject_get_transform_m1369836730(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_m4128471975(L_10, L_11, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = V_0;
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localEulerAngles_m4202601546(L_13, L_14, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_15 = V_0;
		NullCheck(L_15);
		Transform_t3600365921 * L_16 = GameObject_get_transform_m1369836730(L_15, /*hidden argument*/NULL);
		VuMarkBehaviour_t1178230459 * L_17 = ___vumarkBehaviour0;
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_localScale_m129152068(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		float L_20 = (&V_1)->get_x_2();
		VuMarkBehaviour_t1178230459 * L_21 = ___vumarkBehaviour0;
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t3722313464  L_23 = Transform_get_localScale_m129152068(L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		float L_24 = (&V_2)->get_z_4();
		Vector3_t3722313464  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Vector3__ctor_m3353183577((&L_25), ((float)((float)(1.0f)/(float)L_20)), (1.0f), ((float)((float)(1.0f)/(float)L_24)), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localScale_m3053443106(L_16, L_25, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_26 = V_0;
		NullCheck(L_26);
		LineRenderer_t3154350270 * L_27 = GameObject_AddComponent_TisLineRenderer_t3154350270_m2920077551(L_26, /*hidden argument*/GameObject_AddComponent_TisLineRenderer_t3154350270_m2920077551_RuntimeMethod_var);
		__this->set_lineRenderer_7(L_27);
		LineRenderer_t3154350270 * L_28 = __this->get_lineRenderer_7();
		NullCheck(L_28);
		Renderer_set_enabled_m1727253150(L_28, (bool)0, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_29 = __this->get_lineRenderer_7();
		NullCheck(L_29);
		Renderer_set_shadowCastingMode_m987547713(L_29, 0, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_30 = __this->get_lineRenderer_7();
		NullCheck(L_30);
		Renderer_set_receiveShadows_m108599289(L_30, (bool)0, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_31 = __this->get_lineRenderer_7();
		NullCheck(L_31);
		Material_t340375123 * L_32 = Renderer_get_material_m4171603682(L_31, /*hidden argument*/NULL);
		Shader_t4151988712 * L_33 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral3806870710, /*hidden argument*/NULL);
		NullCheck(L_32);
		Material_set_shader_m1402562841(L_32, L_33, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_34 = __this->get_lineRenderer_7();
		NullCheck(L_34);
		Material_t340375123 * L_35 = Renderer_get_material_m4171603682(L_34, /*hidden argument*/NULL);
		Color_t2555686324  L_36 = Color_get_clear_m1016382534(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_35);
		Material_set_color_m1794818007(L_35, L_36, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_37 = __this->get_lineRenderer_7();
		NullCheck(L_37);
		LineRenderer_set_positionCount_m2226639690(L_37, 4, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_38 = __this->get_lineRenderer_7();
		NullCheck(L_38);
		LineRenderer_set_loop_m763714369(L_38, (bool)1, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_39 = __this->get_lineRenderer_7();
		NullCheck(L_39);
		LineRenderer_set_useWorldSpace_m2472758901(L_39, (bool)0, /*hidden argument*/NULL);
		VuMarkBehaviour_t1178230459 * L_40 = ___vumarkBehaviour0;
		NullCheck(L_40);
		Vector2_t2156229523  L_41 = VuMarkBehaviour_GetSize_m676031065(L_40, /*hidden argument*/NULL);
		V_3 = L_41;
		AnimationCurve_t3046754366 * L_42 = (AnimationCurve_t3046754366 *)il2cpp_codegen_object_new(AnimationCurve_t3046754366_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m3000526466(L_42, /*hidden argument*/NULL);
		V_4 = L_42;
		AnimationCurve_t3046754366 * L_43 = V_4;
		NullCheck(L_43);
		AnimationCurve_AddKey_m468722315(L_43, (0.0f), (1.0f), /*hidden argument*/NULL);
		AnimationCurve_t3046754366 * L_44 = V_4;
		NullCheck(L_44);
		AnimationCurve_AddKey_m468722315(L_44, (1.0f), (1.0f), /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_45 = __this->get_lineRenderer_7();
		AnimationCurve_t3046754366 * L_46 = V_4;
		NullCheck(L_45);
		LineRenderer_set_widthCurve_m3548866059(L_45, L_46, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_47 = __this->get_lineRenderer_7();
		NullCheck(L_47);
		LineRenderer_set_widthMultiplier_m1516990663(L_47, (0.003f), /*hidden argument*/NULL);
		float L_48 = (&V_3)->get_x_0();
		LineRenderer_t3154350270 * L_49 = __this->get_lineRenderer_7();
		NullCheck(L_49);
		float L_50 = LineRenderer_get_widthMultiplier_m3961509070(L_49, /*hidden argument*/NULL);
		V_5 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_48, (float)(0.5f))), (float)((float)il2cpp_codegen_multiply((float)L_50, (float)(0.5f)))));
		float L_51 = (&V_3)->get_y_1();
		LineRenderer_t3154350270 * L_52 = __this->get_lineRenderer_7();
		NullCheck(L_52);
		float L_53 = LineRenderer_get_widthMultiplier_m3961509070(L_52, /*hidden argument*/NULL);
		V_6 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_51, (float)(0.5f))), (float)((float)il2cpp_codegen_multiply((float)L_53, (float)(0.5f)))));
		LineRenderer_t3154350270 * L_54 = __this->get_lineRenderer_7();
		Vector3U5BU5D_t1718750761* L_55 = (Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_t1718750761* L_56 = L_55;
		NullCheck(L_56);
		float L_57 = V_5;
		float L_58 = V_6;
		Vector3_t3722313464  L_59;
		memset(&L_59, 0, sizeof(L_59));
		Vector3__ctor_m3353183577((&L_59), ((-L_57)), (0.001f), L_58, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_59;
		Vector3U5BU5D_t1718750761* L_60 = L_56;
		NullCheck(L_60);
		float L_61 = V_5;
		float L_62 = V_6;
		Vector3_t3722313464  L_63;
		memset(&L_63, 0, sizeof(L_63));
		Vector3__ctor_m3353183577((&L_63), L_61, (0.001f), L_62, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_63;
		Vector3U5BU5D_t1718750761* L_64 = L_60;
		NullCheck(L_64);
		float L_65 = V_5;
		float L_66 = V_6;
		Vector3_t3722313464  L_67;
		memset(&L_67, 0, sizeof(L_67));
		Vector3__ctor_m3353183577((&L_67), L_65, (0.001f), ((-L_66)), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_67;
		Vector3U5BU5D_t1718750761* L_68 = L_64;
		NullCheck(L_68);
		float L_69 = V_5;
		float L_70 = V_6;
		Vector3_t3722313464  L_71;
		memset(&L_71, 0, sizeof(L_71));
		Vector3__ctor_m3353183577((&L_71), ((-L_69)), (0.001f), ((-L_70)), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))) = L_71;
		NullCheck(L_54);
		LineRenderer_SetPositions_m1969530996(L_54, L_68, /*hidden argument*/NULL);
	}

IL_023b:
	{
		return;
	}
}
// System.Void VuMarkHandler::DestroyChildAugmentationsOfTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_DestroyChildAugmentationsOfTransform_m3294511784 (VuMarkHandler_t1415762101 * __this, Transform_t3600365921 * ___parent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_DestroyChildAugmentationsOfTransform_m3294511784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Transform_t3600365921 * L_0 = ___parent0;
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m3145433196(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)2)))
		{
			goto IL_0034;
		}
	}
	{
		V_0 = 2;
		goto IL_0028;
	}

IL_0013:
	{
		Transform_t3600365921 * L_2 = ___parent0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Transform_t3600365921 * L_4 = Transform_GetChild_m1092972975(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		Transform_t3600365921 * L_8 = ___parent0;
		NullCheck(L_8);
		int32_t L_9 = Transform_get_childCount_m3145433196(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0013;
		}
	}

IL_0034:
	{
		return;
	}
}
// System.Void VuMarkHandler::ToggleRenderers(UnityEngine.GameObject,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_ToggleRenderers_m2154168747 (VuMarkHandler_t1415762101 * __this, GameObject_t1113636619 * ___obj0, bool ___enable1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_ToggleRenderers_m2154168747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	CanvasU5BU5D_t682926938* V_1 = NULL;
	Renderer_t2627027031 * V_2 = NULL;
	RendererU5BU5D_t3210418286* V_3 = NULL;
	int32_t V_4 = 0;
	Canvas_t3310196443 * V_5 = NULL;
	CanvasU5BU5D_t682926938* V_6 = NULL;
	int32_t V_7 = 0;
	{
		GameObject_t1113636619 * L_0 = ___obj0;
		NullCheck(L_0);
		RendererU5BU5D_t3210418286* L_1 = GameObject_GetComponentsInChildren_TisRenderer_t2627027031_m551606854(L_0, (bool)1, /*hidden argument*/GameObject_GetComponentsInChildren_TisRenderer_t2627027031_m551606854_RuntimeMethod_var);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = ___obj0;
		NullCheck(L_2);
		CanvasU5BU5D_t682926938* L_3 = GameObject_GetComponentsInChildren_TisCanvas_t3310196443_m2470993954(L_2, (bool)1, /*hidden argument*/GameObject_GetComponentsInChildren_TisCanvas_t3310196443_m2470993954_RuntimeMethod_var);
		V_1 = L_3;
		RendererU5BU5D_t3210418286* L_4 = V_0;
		V_3 = L_4;
		V_4 = 0;
		goto IL_0037;
	}

IL_001a:
	{
		RendererU5BU5D_t3210418286* L_5 = V_3;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Renderer_t2627027031 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		Renderer_t2627027031 * L_9 = V_2;
		if (((LineRenderer_t3154350270 *)IsInstSealed((RuntimeObject*)L_9, LineRenderer_t3154350270_il2cpp_TypeInfo_var)))
		{
			goto IL_0031;
		}
	}
	{
		Renderer_t2627027031 * L_10 = V_2;
		bool L_11 = ___enable1;
		NullCheck(L_10);
		Renderer_set_enabled_m1727253150(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0031:
	{
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_13 = V_4;
		RendererU5BU5D_t3210418286* L_14 = V_3;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_15 = V_1;
		V_6 = L_15;
		V_7 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		CanvasU5BU5D_t682926938* L_16 = V_6;
		int32_t L_17 = V_7;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Canvas_t3310196443 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		Canvas_t3310196443 * L_20 = V_5;
		bool L_21 = ___enable1;
		NullCheck(L_20);
		Behaviour_set_enabled_m20417929(L_20, L_21, /*hidden argument*/NULL);
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_23 = V_7;
		CanvasU5BU5D_t682926938* L_24 = V_6;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		return;
	}
}
// System.Void VuMarkHandler::UpdateClosestTarget()
extern "C" IL2CPP_METHOD_ATTR void VuMarkHandler_UpdateClosestTarget_m1555317948 (VuMarkHandler_t1415762101 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_UpdateClosestTarget_m1555317948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t4157153871 * V_0 = NULL;
	float V_1 = 0.0f;
	VuMarkBehaviour_t1178230459 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	Sprite_t280657092 * V_9 = NULL;
	String_t* V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	Camera_t4157153871 * G_B4_0 = NULL;
	Camera_t4157153871 * G_B3_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_0 = VuforiaRuntimeUtilities_IsVuforiaEnabled_m1152377305(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0130;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_1 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = VuforiaARController_get_HasStarted_m4199565299(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0130;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DigitalEyewearARController_t1054226036_il2cpp_TypeInfo_var);
		DigitalEyewearARController_t1054226036 * L_3 = DigitalEyewearARController_get_Instance_m3573866503(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Camera_t4157153871 * L_4 = DigitalEyewearARController_get_PrimaryCamera_m3122713263(L_3, /*hidden argument*/NULL);
		Camera_t4157153871 * L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_002f;
		}
	}
	{
		Camera_t4157153871 * L_6 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B4_0 = L_6;
	}

IL_002f:
	{
		V_0 = G_B4_0;
		V_1 = (std::numeric_limits<float>::infinity());
		VuMarkManager_t2982459596 * L_7 = __this->get_vumarkManager_6();
		NullCheck(L_7);
		RuntimeObject* L_8 = VuMarkManager_GetActiveBehaviours_m542308065(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.VuMarkBehaviour>::GetEnumerator() */, IEnumerable_1_t158083348_il2cpp_TypeInfo_var, L_8);
		V_3 = L_9;
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0099;
		}

IL_004c:
		{
			RuntimeObject* L_10 = V_3;
			NullCheck(L_10);
			VuMarkBehaviour_t1178230459 * L_11 = InterfaceFuncInvoker0< VuMarkBehaviour_t1178230459 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.VuMarkBehaviour>::get_Current() */, IEnumerator_1_t1610800927_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
			VuMarkBehaviour_t1178230459 * L_12 = V_2;
			NullCheck(L_12);
			Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
			V_4 = L_14;
			Camera_t4157153871 * L_15 = V_0;
			NullCheck(L_15);
			Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(L_15, /*hidden argument*/NULL);
			Vector3_t3722313464  L_17 = V_4;
			NullCheck(L_16);
			Vector3_t3722313464  L_18 = Transform_InverseTransformPoint_m1343916000(L_16, L_17, /*hidden argument*/NULL);
			V_5 = L_18;
			IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
			Vector2_t2156229523  L_19 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
			Vector3_t3722313464  L_20 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
			Vector3_t3722313464  L_21 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
			float L_22 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
			V_6 = L_22;
			float L_23 = V_6;
			float L_24 = V_1;
			if ((!(((float)L_23) < ((float)L_24))))
			{
				goto IL_0099;
			}
		}

IL_008a:
		{
			float L_25 = V_6;
			V_1 = L_25;
			VuMarkBehaviour_t1178230459 * L_26 = V_2;
			NullCheck(L_26);
			RuntimeObject* L_27 = VuMarkBehaviour_get_VuMarkTarget_m1232437050(L_26, /*hidden argument*/NULL);
			__this->set_closestVuMark_11(L_27);
		}

IL_0099:
		{
			RuntimeObject* L_28 = V_3;
			NullCheck(L_28);
			bool L_29 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_28);
			if (L_29)
			{
				goto IL_004c;
			}
		}

IL_00a4:
		{
			IL2CPP_LEAVE(0xB6, FINALLY_00a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a9;
	}

FINALLY_00a9:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_30 = V_3;
			if (!L_30)
			{
				goto IL_00b5;
			}
		}

IL_00af:
		{
			RuntimeObject* L_31 = V_3;
			NullCheck(L_31);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_31);
		}

IL_00b5:
		{
			IL2CPP_END_FINALLY(169)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(169)
	{
		IL2CPP_JUMP_TBL(0xB6, IL_00b6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b6:
	{
		RuntimeObject* L_32 = __this->get_closestVuMark_11();
		if (!L_32)
		{
			goto IL_0130;
		}
	}
	{
		RuntimeObject* L_33 = __this->get_currentVuMark_12();
		RuntimeObject* L_34 = __this->get_closestVuMark_11();
		if ((((RuntimeObject*)(RuntimeObject*)L_33) == ((RuntimeObject*)(RuntimeObject*)L_34)))
		{
			goto IL_0130;
		}
	}
	{
		RuntimeObject* L_35 = __this->get_closestVuMark_11();
		String_t* L_36 = VuMarkHandler_GetVuMarkId_m2242633984(__this, L_35, /*hidden argument*/NULL);
		V_7 = L_36;
		RuntimeObject* L_37 = __this->get_closestVuMark_11();
		String_t* L_38 = VuMarkHandler_GetVuMarkDataType_m4036864623(__this, L_37, /*hidden argument*/NULL);
		V_8 = L_38;
		RuntimeObject* L_39 = __this->get_closestVuMark_11();
		Sprite_t280657092 * L_40 = VuMarkHandler_GetVuMarkImage_m1022510546(__this, L_39, /*hidden argument*/NULL);
		V_9 = L_40;
		RuntimeObject* L_41 = __this->get_closestVuMark_11();
		String_t* L_42 = VuMarkHandler_GetNumericVuMarkDescription_m384725732(__this, L_41, /*hidden argument*/NULL);
		V_10 = L_42;
		RuntimeObject* L_43 = __this->get_closestVuMark_11();
		__this->set_currentVuMark_12(L_43);
		String_t* L_44 = V_7;
		String_t* L_45 = V_8;
		String_t* L_46 = V_10;
		Sprite_t280657092 * L_47 = V_9;
		RuntimeObject* L_48 = VuMarkHandler_ShowPanelAfter_m629699576(__this, (0.5f), L_44, L_45, L_46, L_47, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_48, /*hidden argument*/NULL);
	}

IL_0130:
	{
		return;
	}
}
// System.Collections.IEnumerator VuMarkHandler::ShowPanelAfter(System.Single,System.String,System.String,System.String,UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* VuMarkHandler_ShowPanelAfter_m629699576 (VuMarkHandler_t1415762101 * __this, float ___seconds0, String_t* ___vuMarkId1, String_t* ___vuMarkDataType2, String_t* ___vuMarkDesc3, Sprite_t280657092 * ___vuMarkImage4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkHandler_ShowPanelAfter_m629699576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * V_0 = NULL;
	{
		U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * L_0 = (U3CShowPanelAfterU3Ec__Iterator1_t1638954166 *)il2cpp_codegen_object_new(U3CShowPanelAfterU3Ec__Iterator1_t1638954166_il2cpp_TypeInfo_var);
		U3CShowPanelAfterU3Ec__Iterator1__ctor_m1273935106(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * L_1 = V_0;
		float L_2 = ___seconds0;
		NullCheck(L_1);
		L_1->set_seconds_0(L_2);
		U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * L_3 = V_0;
		String_t* L_4 = ___vuMarkId1;
		NullCheck(L_3);
		L_3->set_vuMarkId_1(L_4);
		U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * L_5 = V_0;
		String_t* L_6 = ___vuMarkDataType2;
		NullCheck(L_5);
		L_5->set_vuMarkDataType_2(L_6);
		U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * L_7 = V_0;
		String_t* L_8 = ___vuMarkDesc3;
		NullCheck(L_7);
		L_7->set_vuMarkDesc_3(L_8);
		U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * L_9 = V_0;
		Sprite_t280657092 * L_10 = ___vuMarkImage4;
		NullCheck(L_9);
		L_9->set_vuMarkImage_4(L_10);
		U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * L_11 = V_0;
		NullCheck(L_11);
		L_11->set_U24this_5(__this);
		U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * L_12 = V_0;
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3COnVuMarkTargetAvailableU3Ec__Iterator0__ctor_m2268601434 (U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3COnVuMarkTargetAvailableU3Ec__Iterator0_MoveNext_m1211627643 (U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnVuMarkTargetAvailableU3Ec__Iterator0_MoveNext_m1211627643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0079;
			}
		}
	}
	{
		goto IL_00ec;
	}

IL_0021:
	{
		U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 * L_2 = (U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 *)il2cpp_codegen_object_new(U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152_il2cpp_TypeInfo_var);
		U3COnVuMarkTargetAvailableU3Ec__AnonStorey2__ctor_m859336308(L_2, /*hidden argument*/NULL);
		__this->set_U24locvar0_5(L_2);
		U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 * L_3 = __this->get_U24locvar0_5();
		NullCheck(L_3);
		L_3->set_U3CU3Ef__refU240_1(__this);
		U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 * L_4 = __this->get_U24locvar0_5();
		VuMarkBehaviour_t1178230459 * L_5 = __this->get_vumarkBehaviour_0();
		NullCheck(L_4);
		L_4->set_vumarkBehaviour_0(L_5);
		U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 * L_6 = __this->get_U24locvar0_5();
		intptr_t L_7 = (intptr_t)U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_U3CU3Em__0_m1906099321_RuntimeMethod_var;
		Func_1_t3822001908 * L_8 = (Func_1_t3822001908 *)il2cpp_codegen_object_new(Func_1_t3822001908_il2cpp_TypeInfo_var);
		Func_1__ctor_m1399073142(L_8, L_6, (intptr_t)L_7, /*hidden argument*/Func_1__ctor_m1399073142_RuntimeMethod_var);
		WaitUntil_t3373419216 * L_9 = (WaitUntil_t3373419216 *)il2cpp_codegen_object_new(WaitUntil_t3373419216_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4227046299(L_9, L_8, /*hidden argument*/NULL);
		__this->set_U24current_2(L_9);
		bool L_10 = __this->get_U24disposing_3();
		if (L_10)
		{
			goto IL_0074;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0074:
	{
		goto IL_00ee;
	}

IL_0079:
	{
		VuMarkHandler_t1415762101 * L_11 = __this->get_U24this_1();
		U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 * L_12 = __this->get_U24locvar0_5();
		NullCheck(L_12);
		VuMarkBehaviour_t1178230459 * L_13 = L_12->get_vumarkBehaviour_0();
		NullCheck(L_13);
		RuntimeObject* L_14 = VuMarkBehaviour_get_VuMarkTarget_m1232437050(L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_15 = VuMarkHandler_GetVuMarkId_m2242633984(L_11, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1083894219, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		VuMarkHandler_t1415762101 * L_17 = __this->get_U24this_1();
		U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 * L_18 = __this->get_U24locvar0_5();
		NullCheck(L_18);
		VuMarkBehaviour_t1178230459 * L_19 = L_18->get_vumarkBehaviour_0();
		NullCheck(L_17);
		VuMarkHandler_SetVuMarkInfoForCanvas_m2305932128(L_17, L_19, /*hidden argument*/NULL);
		VuMarkHandler_t1415762101 * L_20 = __this->get_U24this_1();
		U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 * L_21 = __this->get_U24locvar0_5();
		NullCheck(L_21);
		VuMarkBehaviour_t1178230459 * L_22 = L_21->get_vumarkBehaviour_0();
		NullCheck(L_20);
		VuMarkHandler_SetVuMarkAugmentation_m3922064865(L_20, L_22, /*hidden argument*/NULL);
		VuMarkHandler_t1415762101 * L_23 = __this->get_U24this_1();
		U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 * L_24 = __this->get_U24locvar0_5();
		NullCheck(L_24);
		VuMarkBehaviour_t1178230459 * L_25 = L_24->get_vumarkBehaviour_0();
		NullCheck(L_23);
		VuMarkHandler_SetVuMarkOpticalSeeThroughConfig_m1191219436(L_23, L_25, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_00ec:
	{
		return (bool)0;
	}

IL_00ee:
	{
		return (bool)1;
	}
}
// System.Object VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3COnVuMarkTargetAvailableU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2996825622 (U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3COnVuMarkTargetAvailableU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2140011834 (U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3COnVuMarkTargetAvailableU3Ec__Iterator0_Dispose_m2183284548 (U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3COnVuMarkTargetAvailableU3Ec__Iterator0_Reset_m1976781890 (U3COnVuMarkTargetAvailableU3Ec__Iterator0_t1919121394 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnVuMarkTargetAvailableU3Ec__Iterator0_Reset_m1976781890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3COnVuMarkTargetAvailableU3Ec__Iterator0_Reset_m1976781890_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0/<OnVuMarkTargetAvailable>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3COnVuMarkTargetAvailableU3Ec__AnonStorey2__ctor_m859336308 (U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean VuMarkHandler/<OnVuMarkTargetAvailable>c__Iterator0/<OnVuMarkTargetAvailable>c__AnonStorey2::<>m__0()
extern "C" IL2CPP_METHOD_ATTR bool U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_U3CU3Em__0_m1906099321 (U3COnVuMarkTargetAvailableU3Ec__AnonStorey2_t602961152 * __this, const RuntimeMethod* method)
{
	{
		VuMarkBehaviour_t1178230459 * L_0 = __this->get_vumarkBehaviour_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VuMarkBehaviour_get_VuMarkTarget_m1232437050(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VuMarkHandler/<ShowPanelAfter>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CShowPanelAfterU3Ec__Iterator1__ctor_m1273935106 (U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean VuMarkHandler/<ShowPanelAfter>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CShowPanelAfterU3Ec__Iterator1_MoveNext_m1609615004 (U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowPanelAfterU3Ec__Iterator1_MoveNext_m1609615004_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_8();
		V_0 = L_0;
		__this->set_U24PC_8((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_008a;
	}

IL_0021:
	{
		float L_2 = __this->get_seconds_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_6(L_3);
		bool L_4 = __this->get_U24disposing_7();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_8(1);
	}

IL_0041:
	{
		goto IL_008c;
	}

IL_0046:
	{
		VuMarkHandler_t1415762101 * L_5 = __this->get_U24this_5();
		NullCheck(L_5);
		PanelShowHide_t3128188850 * L_6 = L_5->get_nearestVuMarkScreenPanel_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0083;
		}
	}
	{
		VuMarkHandler_t1415762101 * L_8 = __this->get_U24this_5();
		NullCheck(L_8);
		PanelShowHide_t3128188850 * L_9 = L_8->get_nearestVuMarkScreenPanel_10();
		String_t* L_10 = __this->get_vuMarkId_1();
		String_t* L_11 = __this->get_vuMarkDataType_2();
		String_t* L_12 = __this->get_vuMarkDesc_3();
		Sprite_t280657092 * L_13 = __this->get_vuMarkImage_4();
		NullCheck(L_9);
		PanelShowHide_Show_m23709963(L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
	}

IL_0083:
	{
		__this->set_U24PC_8((-1));
	}

IL_008a:
	{
		return (bool)0;
	}

IL_008c:
	{
		return (bool)1;
	}
}
// System.Object VuMarkHandler/<ShowPanelAfter>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CShowPanelAfterU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4235365285 (U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Object VuMarkHandler/<ShowPanelAfter>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CShowPanelAfterU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m2762656916 (U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Void VuMarkHandler/<ShowPanelAfter>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CShowPanelAfterU3Ec__Iterator1_Dispose_m2479115326 (U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_7((bool)1);
		__this->set_U24PC_8((-1));
		return;
	}
}
// System.Void VuMarkHandler/<ShowPanelAfter>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CShowPanelAfterU3Ec__Iterator1_Reset_m1100367435 (U3CShowPanelAfterU3Ec__Iterator1_t1638954166 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowPanelAfterU3Ec__Iterator1_Reset_m1100367435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CShowPanelAfterU3Ec__Iterator1_Reset_m1100367435_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VuMarkHandler/AugmentationObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AugmentationObject__ctor_m3862104869 (AugmentationObject_t2506029784 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VuMarkTrackableEventHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler__ctor_m3024407496 (VuMarkTrackableEventHandler_t4082851918 * __this, const RuntimeMethod* method)
{
	{
		DefaultTrackableEventHandler__ctor_m1782586389(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VuMarkTrackableEventHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler_Start_m3485156240 (VuMarkTrackableEventHandler_t4082851918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTrackableEventHandler_Start_m3485156240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VuMarkTrackableEventHandler_t4082851918 * G_B2_0 = NULL;
	VuMarkTrackableEventHandler_t4082851918 * G_B1_0 = NULL;
	Vector2_t2156229523  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	VuMarkTrackableEventHandler_t4082851918 * G_B3_1 = NULL;
	{
		DefaultTrackableEventHandler_Start_m3259365141(__this, /*hidden argument*/NULL);
		CanvasGroup_t4083511760 * L_0 = Component_GetComponentInChildren_TisCanvasGroup_t4083511760_m2486821986(__this, /*hidden argument*/Component_GetComponentInChildren_TisCanvasGroup_t4083511760_m2486821986_RuntimeMethod_var);
		__this->set_canvasGroup_11(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_1 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0031;
		}
	}
	{
		Vector2_t2156229523  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_m3970636864((&L_2), (0.5f), (0.6f), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0040;
	}

IL_0031:
	{
		Vector2_t2156229523  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3970636864((&L_3), (0.9f), (1.0f), /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0040:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_fadeRange_12(G_B3_0);
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaARController_t1876945237_il2cpp_TypeInfo_var);
		VuforiaARController_t1876945237 * L_4 = VuforiaARController_get_Instance_m1100644214(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)VuMarkTrackableEventHandler_OnVuforiaStarted_m3972534910_RuntimeMethod_var;
		Action_t1264377477 * L_6 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_6, __this, (intptr_t)L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VuforiaARController_RegisterVuforiaStartedCallback_m3258152770(L_4, L_6, /*hidden argument*/NULL);
		TrackableBehaviour_t1113559212 * L_7 = ((DefaultTrackableEventHandler_t1588957063 *)__this)->get_mTrackableBehaviour_4();
		if (!((VuMarkBehaviour_t1178230459 *)IsInstClass((RuntimeObject*)L_7, VuMarkBehaviour_t1178230459_il2cpp_TypeInfo_var)))
		{
			goto IL_00aa;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_8 = ((DefaultTrackableEventHandler_t1588957063 *)__this)->get_mTrackableBehaviour_4();
		__this->set_vumarkBehaviour_9(((VuMarkBehaviour_t1178230459 *)CastclassClass((RuntimeObject*)L_8, VuMarkBehaviour_t1178230459_il2cpp_TypeInfo_var)));
		VuMarkBehaviour_t1178230459 * L_9 = __this->get_vumarkBehaviour_9();
		intptr_t L_10 = (intptr_t)VuMarkTrackableEventHandler_OnVuMarkTargetAssigned_m3717424069_RuntimeMethod_var;
		Action_t1264377477 * L_11 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_11, __this, (intptr_t)L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		VuMarkBehaviour_RegisterVuMarkTargetAssignedCallback_m1826723177(L_9, L_11, /*hidden argument*/NULL);
		VuMarkBehaviour_t1178230459 * L_12 = __this->get_vumarkBehaviour_9();
		intptr_t L_13 = (intptr_t)VuMarkTrackableEventHandler_OnVuMarkTargetLost_m3960611387_RuntimeMethod_var;
		Action_t1264377477 * L_14 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_14, __this, (intptr_t)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		VuMarkBehaviour_RegisterVuMarkTargetLostCallback_m850959739(L_12, L_14, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void VuMarkTrackableEventHandler::OnTrackingFound()
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler_OnTrackingFound_m169796950 (VuMarkTrackableEventHandler_t4082851918 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void VuMarkTrackableEventHandler::OnTrackingLost()
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler_OnTrackingLost_m874291449 (VuMarkTrackableEventHandler_t4082851918 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void VuMarkTrackableEventHandler::OnVuforiaStarted()
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler_OnVuforiaStarted_m3972534910 (VuMarkTrackableEventHandler_t4082851918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTrackableEventHandler_OnVuforiaStarted_m3972534910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaManager_t1653423889_il2cpp_TypeInfo_var);
		VuforiaManager_t1653423889 * L_0 = VuforiaManager_get_Instance_m100367560(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = VuforiaManager_get_CentralAnchorPoint_m3160918874(L_0, /*hidden argument*/NULL);
		__this->set_centralAnchorPoint_13(L_1);
		return;
	}
}
// System.Void VuMarkTrackableEventHandler::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler_OnDisable_m331695818 (VuMarkTrackableEventHandler_t4082851918 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		VuMarkTrackableEventHandler_DestroyChildAugmentationsOfTransform_m3112459060(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VuMarkTrackableEventHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler_Update_m2004369362 (VuMarkTrackableEventHandler_t4082851918 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Time_get_frameCount_m1220035214(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (((int32_t)((int32_t)L_0%(int32_t)((int32_t)15))))
		{
			goto IL_0013;
		}
	}
	{
		VuMarkTrackableEventHandler_UpdateVuMarkBorderOutline_m3636685738(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		VuMarkTrackableEventHandler_UpdateCanvasFadeAmount_m1272505830(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VuMarkTrackableEventHandler::UpdateVuMarkBorderOutline()
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler_UpdateVuMarkBorderOutline_m3636685738 (VuMarkTrackableEventHandler_t4082851918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTrackableEventHandler_UpdateVuMarkBorderOutline_m3636685738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LineRenderer_t3154350270 * G_B3_0 = NULL;
	LineRenderer_t3154350270 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	LineRenderer_t3154350270 * G_B4_1 = NULL;
	Material_t340375123 * G_B7_0 = NULL;
	Material_t340375123 * G_B6_0 = NULL;
	Color_t2555686324  G_B8_0;
	memset(&G_B8_0, 0, sizeof(G_B8_0));
	Material_t340375123 * G_B8_1 = NULL;
	{
		LineRenderer_t3154350270 * L_0 = __this->get_lineRenderer_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006f;
		}
	}
	{
		LineRenderer_t3154350270 * L_2 = __this->get_lineRenderer_10();
		int32_t L_3 = ((DefaultTrackableEventHandler_t1588957063 *)__this)->get_m_NewStatus_6();
		G_B2_0 = L_2;
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			G_B3_0 = L_2;
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_t399660591_il2cpp_TypeInfo_var);
		bool L_4 = VuforiaRuntimeUtilities_IsPlayMode_m4165764373(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_4));
		G_B4_1 = G_B2_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_002a:
	{
		NullCheck(G_B4_1);
		Renderer_set_enabled_m1727253150(G_B4_1, (bool)G_B4_0, /*hidden argument*/NULL);
		LineRenderer_t3154350270 * L_5 = __this->get_lineRenderer_10();
		NullCheck(L_5);
		bool L_6 = Renderer_get_enabled_m3482452518(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		LineRenderer_t3154350270 * L_7 = __this->get_lineRenderer_10();
		NullCheck(L_7);
		Material_t340375123 * L_8 = Renderer_get_material_m4171603682(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ((DefaultTrackableEventHandler_t1588957063 *)__this)->get_m_NewStatus_6();
		G_B6_0 = L_8;
		if ((!(((uint32_t)L_9) == ((uint32_t)4))))
		{
			G_B7_0 = L_8;
			goto IL_0060;
		}
	}
	{
		Color_t2555686324  L_10 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_10;
		G_B8_1 = G_B6_0;
		goto IL_0065;
	}

IL_0060:
	{
		Color_t2555686324  L_11 = Color_get_cyan_m765383084(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_0;
	}

IL_0065:
	{
		NullCheck(G_B8_1);
		Material_set_color_m1794818007(G_B8_1, G_B8_0, /*hidden argument*/NULL);
	}

IL_006a:
	{
		goto IL_007b;
	}

IL_006f:
	{
		LineRenderer_t3154350270 * L_12 = Component_GetComponentInChildren_TisLineRenderer_t3154350270_m2269411787(__this, /*hidden argument*/Component_GetComponentInChildren_TisLineRenderer_t3154350270_m2269411787_RuntimeMethod_var);
		__this->set_lineRenderer_10(L_12);
	}

IL_007b:
	{
		return;
	}
}
// System.Void VuMarkTrackableEventHandler::UpdateCanvasFadeAmount()
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler_UpdateCanvasFadeAmount_m1272505830 (VuMarkTrackableEventHandler_t4082851918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTrackableEventHandler_UpdateCanvasFadeAmount_m1272505830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Transform_t3600365921 * L_0 = __this->get_centralAnchorPoint_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		Transform_t3600365921 * L_2 = __this->get_centralAnchorPoint_13();
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_5 = Transform_InverseTransformPoint_m1343916000(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_6 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_9 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		CanvasGroup_t4083511760 * L_10 = __this->get_canvasGroup_11();
		Vector2_t2156229523 * L_11 = __this->get_address_of_fadeRange_12();
		float L_12 = L_11->get_x_0();
		Vector2_t2156229523 * L_13 = __this->get_address_of_fadeRange_12();
		float L_14 = L_13->get_y_1();
		float L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_16 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, L_12, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_10);
		CanvasGroup_set_alpha_m4032573(L_10, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_16)), /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.Void VuMarkTrackableEventHandler::DestroyChildAugmentationsOfTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler_DestroyChildAugmentationsOfTransform_m3112459060 (VuMarkTrackableEventHandler_t4082851918 * __this, Transform_t3600365921 * ___parent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTrackableEventHandler_DestroyChildAugmentationsOfTransform_m3112459060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Transform_t3600365921 * L_0 = ___parent0;
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m3145433196(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)2)))
		{
			goto IL_0034;
		}
	}
	{
		V_0 = 2;
		goto IL_0028;
	}

IL_0013:
	{
		Transform_t3600365921 * L_2 = ___parent0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Transform_t3600365921 * L_4 = Transform_GetChild_m1092972975(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		Transform_t3600365921 * L_8 = ___parent0;
		NullCheck(L_8);
		int32_t L_9 = Transform_get_childCount_m3145433196(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0013;
		}
	}

IL_0034:
	{
		return;
	}
}
// System.Void VuMarkTrackableEventHandler::OnVuMarkTargetAssigned()
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler_OnVuMarkTargetAssigned_m3717424069 (VuMarkTrackableEventHandler_t4082851918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTrackableEventHandler_OnVuMarkTargetAssigned_m3717424069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1282720118, /*hidden argument*/NULL);
		TrackableBehaviour_t1113559212 * L_0 = ((DefaultTrackableEventHandler_t1588957063 *)__this)->get_mTrackableBehaviour_4();
		if (!((VuMarkBehaviour_t1178230459 *)IsInstClass((RuntimeObject*)L_0, VuMarkBehaviour_t1178230459_il2cpp_TypeInfo_var)))
		{
			goto IL_0064;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_1 = ((DefaultTrackableEventHandler_t1588957063 *)__this)->get_mTrackableBehaviour_4();
		__this->set_vumarkBehaviour_9(((VuMarkBehaviour_t1178230459 *)IsInstClass((RuntimeObject*)L_1, VuMarkBehaviour_t1178230459_il2cpp_TypeInfo_var)));
		VuMarkBehaviour_t1178230459 * L_2 = __this->get_vumarkBehaviour_9();
		NullCheck(L_2);
		RuntimeObject* L_3 = VuMarkBehaviour_get_VuMarkTarget_m1232437050(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0064;
		}
	}
	{
		VuMarkBehaviour_t1178230459 * L_4 = __this->get_vumarkBehaviour_9();
		NullCheck(L_4);
		RuntimeObject* L_5 = VuMarkBehaviour_get_VuMarkTarget_m1232437050(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Vuforia.InstanceId Vuforia.VuMarkTarget::get_InstanceId() */, VuMarkTarget_t1129573803_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		uint64_t L_7 = InterfaceFuncInvoker0< uint64_t >::Invoke(4 /* System.UInt64 Vuforia.InstanceId::get_NumericValue() */, InstanceId_t2455430337_il2cpp_TypeInfo_var, L_6);
		uint64_t L_8 = L_7;
		RuntimeObject * L_9 = Box(UInt64_t4134040092_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2131449724, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0064:
	{
		return;
	}
}
// System.Void VuMarkTrackableEventHandler::OnVuMarkTargetLost()
extern "C" IL2CPP_METHOD_ATTR void VuMarkTrackableEventHandler_OnVuMarkTargetLost_m3960611387 (VuMarkTrackableEventHandler_t4082851918 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkTrackableEventHandler_OnVuMarkTargetLost_m3960611387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3041277966, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
