#include <jni.h>
#include <string>

/* Header for class de_fruitfly_ovr_OculusRift */

#ifndef _Included_de_fruitfly_ovr_OculusRift
#define _Included_de_fruitfly_ovr_OculusRift
#ifdef __cplusplus
extern "C" {
#endif

void LOG(std::string s);
void Reset();

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    initSubsystem
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_de_fruitfly_ovr_OculusRift__1initSubsystem
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    pollSubsystem
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift__1pollSubsystem
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
 * Method:    reset
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift__1reset
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    isCalibrated
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_de_fruitfly_ovr_OculusRift__1isCalibrated
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    setCalibrationReference
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift__1setCalibrationReference
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _setPredictionEnabled
 * Signature: (FZ)V
 */
JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift__1setPredictionEnabled
  (JNIEnv *, jobject, jfloat, jboolean);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getHResolution
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_de_fruitfly_ovr_OculusRift__1getHResolution
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getVResolution
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_de_fruitfly_ovr_OculusRift__1getVResolution
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getHScreenSize
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getHScreenSize
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getVScreenSize
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getVScreenSize
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getVScreenCenter
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getVScreenCenter
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getEyeToScreenDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getEyeToScreenDistance
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getLensSeparationDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getLensSeparationDistance
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getInterpupillaryDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getInterpupillaryDistance
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _setInterpupillaryDistance
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift__1setInterpupillaryDistance
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getDistortionK0
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getDistortionK0
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getDistortionK1
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getDistortionK1
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getDistortionK2
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getDistortionK2
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getDistortionK3
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getDistortionK3
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getChromaAbCorrection0
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getChromaAbCorrection0
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getChromaAbCorrection1
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getChromaAbCorrection1
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getChromaAbCorrection2
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getChromaAbCorrection2
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getChromaAbCorrection3
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getChromaAbCorrection3
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getYaw
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getYaw
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getPitch
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getPitch
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getRoll
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getRoll
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getOrientationQuaternion
 * Signature: ()[F
 */
JNIEXPORT jfloatArray JNICALL Java_de_fruitfly_ovr_OculusRift__1getOrientationQuaternion
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getEulerAngles
 * Signature: (FFFFII)[F
 */
JNIEXPORT jfloatArray JNICALL Java_de_fruitfly_ovr_OculusRift__1getEulerAngles
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jfloat, jint, jint);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getEyeRenderParams
 * Signature: (IIIIFFFFF)Lde/fruitfly/ovr/EyeRenderParams;
 */
JNIEXPORT jobject JNICALL Java_de_fruitfly_ovr_OculusRift__1getEyeRenderParams
  (JNIEnv *, jobject, jint, jint, jint, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jint);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getUserProfileData
 * Signature: L de/fruitfly/ovr/UserProfileData
 */
JNIEXPORT jobject JNICALL Java_de_fruitfly_ovr_OculusRift__1getUserProfileData(
   JNIEnv *env, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getUserProfiles
 * Signature: [L java/lang/String
 */
JNIEXPORT jobjectArray JNICALL Java_de_fruitfly_ovr_OculusRift__1getUserProfiles(
   JNIEnv *env, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _loadUserProfile
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_de_fruitfly_ovr_OculusRift__1loadUserProfile(
   JNIEnv *env, jobject, jstring);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _latencyTesterProcessInputs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift__1latencyTesterProcessInputs
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _latencyTesterDisplayScreenColor
 * Signature: ()[F
 */
JNIEXPORT jfloatArray JNICALL Java_de_fruitfly_ovr_OculusRift__1latencyTesterDisplayScreenColor
  (JNIEnv *env, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _latencyTesterGetResultsString
 * Signature: ()L java/lang/String
 */
JNIEXPORT jstring JNICALL Java_de_fruitfly_ovr_OculusRift__1latencyTesterGetResultsString
  (JNIEnv *env, jobject);

#ifdef __cplusplus
}
#endif
#endif
