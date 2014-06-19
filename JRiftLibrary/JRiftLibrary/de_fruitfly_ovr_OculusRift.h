#include <jni.h>
#include <string>
#include <memory>
#include "OVR.h"
#include "OVR_CAPI.h"
//#include "Kernel/OVR_Math.h"

/* Header for class de_fruitfly_ovr_OculusRift */

#ifndef _Included_de_fruitfly_ovr_OculusRift
#define _Included_de_fruitfly_ovr_OculusRift
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    initSubsystem
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_de_fruitfly_ovr_OculusRift__1initSubsystem
    (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    destroySubsystem
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift__1destroySubsystem
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    getHmdDesc
 * Signature: (F)Lde/fruitfly/ovr/struct/HmdDesc;
 */
JNIEXPORT jobject JNICALL Java_de_fruitfly_ovr_OculusRift__1getHmdDesc
    (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    getNextHmd
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_de_fruitfly_ovr_OculusRift__1getNextHmd
    (JNIEnv *, jobject); 

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    getSensorState
 * Signature: (D)Lde/fruitfly/ovr/struct/SensorState;
 */
JNIEXPORT jobject JNICALL Java_de_fruitfly_ovr_OculusRift__1getSensorState
    (JNIEnv *, jobject, jdouble);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    resetSensor
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift__1resetSensor
    (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    getFovTextureSize
 * Signature: (F)Lde/fruitfly/ovr/struct/FovTextureInfo;
 */
JNIEXPORT jobject JNICALL Java_de_fruitfly_ovr_OculusRift__1getFovTextureSize
    (JNIEnv *, jobject, jfloat);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    configureRendering
 * Signature: (IIIIIJJZIZZZ)Lde/fruitfly/ovr/EyeRenderParams;
 */
JNIEXPORT jobject JNICALL Java_de_fruitfly_ovr_OculusRift__1configureRendering(
	JNIEnv *, 
	jobject,
    jint,
    jint,
	jint,
	jint,
	jint,
	jlong, 
	jlong,
	jboolean,
    jint,
    jboolean,
    jboolean,
    jboolean);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    beginFrame
 * Signature: (I)Lde/fruitfly/ovr/structs/FrameTiming;
 */
JNIEXPORT jobject JNICALL Java_de_fruitfly_ovr_OculusRift__1beginFrame
    (JNIEnv *, jobject, jint);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    beginEyeRender
 * Signature: (I)Lde/fruitfly/ovr/structs/Posef;
 */
JNIEXPORT jobject JNICALL Java_de_fruitfly_ovr_OculusRift__1beginEyeRender
    (JNIEnv *, jobject, jint);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    getMatrix4fProjection
 * Signature: (FFFFFF)Lde/fruitfly/ovr/structs/Matrix4f;
 */
JNIEXPORT jobject JNICALL Java_de_fruitfly_ovr_OculusRift__1getMatrix4fProjection(
    JNIEnv *, 
    jobject, 
    jfloat,
    jfloat,
    jfloat,
    jfloat,
    jfloat,
    jfloat);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    endEyeRender
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift__1endEyeRender
    (JNIEnv *, jobject, jint);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    endFrame
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift__1endFrame
    (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _convertQuatToEuler
 * Signature: (FFFFFIIIII)[Lde/fruitfly/ovr/structs/EulerOrient;
 */
JNIEXPORT jobject JNICALL Java_de_fruitfly_ovr_OculusRift__1convertQuatToEuler
  (JNIEnv *, 
  jobject, 
  jfloat, 
  jfloat, 
  jfloat, 
  jfloat, 
  jfloat, 
  jint, 
  jint, 
  jint, 
  jint, 
  jint);


/* Helpers */
void DEBUGLOG(std::string s);
void LogHmdDesc(std::auto_ptr<ovrHmdDesc>& pHmdDesc);
void Reset();
void ResetRenderConfig();
bool CacheJNIGlobals(JNIEnv *env);
bool CreateHmdAndStartSensor(int hmdIndex);
bool LookupJNIGlobal(JNIEnv *env,
                     jclass& clazz,
                     std::string className,
                     jmethodID& method,
                     std::string constructorSignature);
void ClearException(JNIEnv *env);
void PrintNewObjectException(JNIEnv *env, std::string objectName);
void SetBit(unsigned int& BitField, unsigned int BitIndex, boolean Value);
void SetEulerEnumValues(int firstRotationAxis,
					    int secondRotationAxis,
					    int thirdRotationAxis,
					    int rotationDir,
					    int hand,
					    OVR::Axis& A1,
						OVR::Axis& A2,
					    OVR::Axis& A3,
					    OVR::RotateDirection& D,
					    OVR::HandedSystem& S);
void SetAxisEnum(int value, OVR::Axis& A);

//
///*
// * Class:     de_fruitfly_ovr_OculusRift
// * Method:    _getEyeRenderParams
// * Signature: (IIIIFFFFF)Lde/fruitfly/ovr/EyeRenderParams;
// */
//JNIEXPORT jobject JNICALL Java_de_fruitfly_ovr_OculusRift__1getEyeRenderParams
//  (JNIEnv *, jobject, jint, jint, jint, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jint);
//
///*
// * Class:     de_fruitfly_ovr_OculusRift
// * Method:    _getUserProfileData
// * Signature: L de/fruitfly/ovr/UserProfileData
// */
//JNIEXPORT jobject JNICALL Java_de_fruitfly_ovr_OculusRift__1getUserProfileData(
//   JNIEnv *env, jobject);
//
///*
// * Class:     de_fruitfly_ovr_OculusRift
// * Method:    _getUserProfiles
// * Signature: [L java/lang/String
// */
//JNIEXPORT jobjectArray JNICALL Java_de_fruitfly_ovr_OculusRift__1getUserProfiles(
//   JNIEnv *env, jobject);
//
///*
// * Class:     de_fruitfly_ovr_OculusRift
// * Method:    _loadUserProfile
// * Signature: ()Z
// */
//JNIEXPORT jboolean JNICALL Java_de_fruitfly_ovr_OculusRift__1loadUserProfile(
//   JNIEnv *env, jobject, jstring);
//
///*
// * Class:     de_fruitfly_ovr_OculusRift
// * Method:    _latencyTesterProcessInputs
// * Signature: ()V
// */
//JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift__1latencyTesterProcessInputs
//  (JNIEnv *, jobject);
//
///*
// * Class:     de_fruitfly_ovr_OculusRift
// * Method:    _latencyTesterDisplayScreenColor
// * Signature: ()[F
// */
//JNIEXPORT jfloatArray JNICALL Java_de_fruitfly_ovr_OculusRift__1latencyTesterDisplayScreenColor
//  (JNIEnv *env, jobject);
//
///*
// * Class:     de_fruitfly_ovr_OculusRift
// * Method:    _latencyTesterGetResultsString
// * Signature: ()L java/lang/String
// */
//JNIEXPORT jstring JNICALL Java_de_fruitfly_ovr_OculusRift__1latencyTesterGetResultsString
//  (JNIEnv *env, jobject);

#ifdef __cplusplus
}
#endif
#endif
