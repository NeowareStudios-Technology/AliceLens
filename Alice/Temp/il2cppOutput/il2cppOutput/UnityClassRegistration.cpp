template <typename T> void RegisterClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_PerformanceReporting();
	RegisterModule_PerformanceReporting();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_XR();
	RegisterModule_XR();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterClass<Behaviour>(const char*);
class Animation; template <> void RegisterClass<Animation>(const char*);
class Animator; template <> void RegisterClass<Animator>(const char*);
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterClass<AudioSource>(const char*);
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>(const char*);
class GUIElement; template <> void RegisterClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; template <> void RegisterClass<VideoPlayer>(const char*);
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterClass<Collider>(const char*);
class BoxCollider; template <> void RegisterClass<BoxCollider>(const char*);
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>(const char*);
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; 
class Renderer; template <> void RegisterClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>(const char*);
class ParticleRenderer; 
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; 
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>(const char*);
class NamedObject; template <> void RegisterClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AssetImporterLog; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>(const char*);
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>(const char*);
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>(const char*);
class Material; template <> void RegisterClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>(const char*);
class Motion; template <> void RegisterClass<Motion>(const char*);
class AnimationClip; template <> void RegisterClass<AnimationClip>(const char*);
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>(const char*);
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>(const char*);
class AnimatorController; 
class AnimatorOverrideController; template <> void RegisterClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterClass<AudioClip>(const char*);
class Shader; template <> void RegisterClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>(const char*);
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>(const char*);
class Texture; template <> void RegisterClass<Texture>(const char*);
class BaseVideoTexture; template <> void RegisterClass<BaseVideoTexture>(const char*);
class MovieTexture; 
class WebCamTexture; template <> void RegisterClass<WebCamTexture>(const char*);
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterClass<Texture3D>(const char*);
class VideoClip; template <> void RegisterClass<VideoClip>(const char*);
class GameManager; template <> void RegisterClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterClass<BuildSettings>(const char*);
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>(const char*);
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterClass<InputManager>(const char*);
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>(const char*);
class MonoManager; template <> void RegisterClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>(const char*);
class PerformanceReportingManager; template <> void RegisterClass<PerformanceReportingManager>(const char*);
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterClass<ScriptMapper>(const char*);
class TagManager; template <> void RegisterClass<TagManager>(const char*);
class TimeManager; template <> void RegisterClass<TimeManager>(const char*);
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>(const char*);
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>(const char*);
class LevelGameManager; template <> void RegisterClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>(const char*);
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 80 non stripped classes
	//0. VideoPlayer
	RegisterClass<VideoPlayer>("Video");
	//1. Behaviour
	RegisterClass<Behaviour>("Core");
	//2. Unity::Component
	RegisterClass<Unity::Component>("Core");
	//3. EditorExtension
	RegisterClass<EditorExtension>("Core");
	//4. Camera
	RegisterClass<Camera>("Core");
	//5. GameObject
	RegisterClass<GameObject>("Core");
	//6. GUIElement
	RegisterClass<GUIElement>("Core");
	//7. GUILayer
	RegisterClass<GUILayer>("Core");
	//8. Shader
	RegisterClass<Shader>("Core");
	//9. NamedObject
	RegisterClass<NamedObject>("Core");
	//10. Material
	RegisterClass<Material>("Core");
	//11. Sprite
	RegisterClass<Sprite>("Core");
	//12. Texture
	RegisterClass<Texture>("Core");
	//13. Texture2D
	RegisterClass<Texture2D>("Core");
	//14. RenderTexture
	RegisterClass<RenderTexture>("Core");
	//15. Transform
	RegisterClass<Transform>("Core");
	//16. UI::RectTransform
	RegisterClass<UI::RectTransform>("Core");
	//17. QualitySettings
	RegisterClass<QualitySettings>("Core");
	//18. GlobalGameManager
	RegisterClass<GlobalGameManager>("Core");
	//19. GameManager
	RegisterClass<GameManager>("Core");
	//20. Renderer
	RegisterClass<Renderer>("Core");
	//21. MeshFilter
	RegisterClass<MeshFilter>("Core");
	//22. Mesh
	RegisterClass<Mesh>("Core");
	//23. MonoBehaviour
	RegisterClass<MonoBehaviour>("Core");
	//24. AudioClip
	RegisterClass<AudioClip>("Audio");
	//25. SampleClip
	RegisterClass<SampleClip>("Audio");
	//26. AudioListener
	RegisterClass<AudioListener>("Audio");
	//27. AudioBehaviour
	RegisterClass<AudioBehaviour>("Audio");
	//28. AudioSource
	RegisterClass<AudioSource>("Audio");
	//29. WebCamTexture
	RegisterClass<WebCamTexture>("Audio");
	//30. BaseVideoTexture
	RegisterClass<BaseVideoTexture>("Audio");
	//31. Collider
	RegisterClass<Collider>("Physics");
	//32. BoxCollider
	RegisterClass<BoxCollider>("Physics");
	//33. Animator
	RegisterClass<Animator>("Animation");
	//34. AnimatorOverrideController
	RegisterClass<AnimatorOverrideController>("Animation");
	//35. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>("Animation");
	//36. UI::Canvas
	RegisterClass<UI::Canvas>("UI");
	//37. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>("UI");
	//38. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>("UI");
	//39. TextRendering::Font
	RegisterClass<TextRendering::Font>("TextRendering");
	//40. MeshRenderer
	RegisterClass<MeshRenderer>("Core");
	//41. PreloadData
	RegisterClass<PreloadData>("Core");
	//42. Cubemap
	RegisterClass<Cubemap>("Core");
	//43. Texture3D
	RegisterClass<Texture3D>("Core");
	//44. Texture2DArray
	RegisterClass<Texture2DArray>("Core");
	//45. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>("Core");
	//46. TagManager
	RegisterClass<TagManager>("Core");
	//47. GraphicsSettings
	RegisterClass<GraphicsSettings>("Core");
	//48. DelayedCallManager
	RegisterClass<DelayedCallManager>("Core");
	//49. InputManager
	RegisterClass<InputManager>("Core");
	//50. TimeManager
	RegisterClass<TimeManager>("Core");
	//51. BuildSettings
	RegisterClass<BuildSettings>("Core");
	//52. ResourceManager
	RegisterClass<ResourceManager>("Core");
	//53. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>("Core");
	//54. MasterServerInterface
	RegisterClass<MasterServerInterface>("Core");
	//55. NetworkManager
	RegisterClass<NetworkManager>("Core");
	//56. ScriptMapper
	RegisterClass<ScriptMapper>("Core");
	//57. PhysicsManager
	RegisterClass<PhysicsManager>("Physics");
	//58. MonoManager
	RegisterClass<MonoManager>("Core");
	//59. MonoScript
	RegisterClass<MonoScript>("Core");
	//60. TextAsset
	RegisterClass<TextAsset>("Core");
	//61. AudioManager
	RegisterClass<AudioManager>("Audio");
	//62. PlayerSettings
	RegisterClass<PlayerSettings>("Core");
	//63. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>("CloudWebServices");
	//64. PerformanceReportingManager
	RegisterClass<PerformanceReportingManager>("PerformanceReporting");
	//65. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>("UnityAnalytics");
	//66. UnityConnectSettings
	RegisterClass<UnityConnectSettings>("UnityConnect");
	//67. FlareLayer
	RegisterClass<FlareLayer>("Core");
	//68. LightProbes
	RegisterClass<LightProbes>("Core");
	//69. RenderSettings
	RegisterClass<RenderSettings>("Core");
	//70. LevelGameManager
	RegisterClass<LevelGameManager>("Core");
	//71. LightmapSettings
	RegisterClass<LightmapSettings>("Core");
	//72. VideoClip
	RegisterClass<VideoClip>("Video");
	//73. Light
	RegisterClass<Light>("Core");
	//74. Motion
	RegisterClass<Motion>("Animation");
	//75. AnimationClip
	RegisterClass<AnimationClip>("Animation");
	//76. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>("Core");
	//77. MeshCollider
	RegisterClass<MeshCollider>("Physics");
	//78. Animation
	RegisterClass<Animation>("Animation");
	//79. Avatar
	RegisterClass<Avatar>("Animation");

}
