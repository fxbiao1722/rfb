/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_sshtools_rfbserver_windows_jni_DisplayHook */

#ifndef _Included_com_sshtools_rfbserver_windows_jni_DisplayHook
#define _Included_com_sshtools_rfbserver_windows_jni_DisplayHook
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_sshtools_rfbserver_windows_jni_DisplayHook
 * Method:    register
 * Signature: (Lcom/sshtools/rfbserver/windows/jni/DisplayCallback;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_sshtools_rfbserver_windows_jni_DisplayHook_register
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_sshtools_rfbserver_windows_jni_DisplayHook
 * Method:    loop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_sshtools_rfbserver_windows_jni_DisplayHook_loop
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif