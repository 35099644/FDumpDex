/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <pthread.h>
#include <unistd.h>
#include <android/log.h>
#include <sys/system_properties.h>
#include <stdlib.h>
#include <fcntl.h>
#include <time.h>
#include <string>
#include <dlfcn.h>
#include <string.h>
#include "dlopen.h"
#include "util/deviceutils.h"
#include "util/fileutils.h"

#ifndef _Included_com_lxzh123_dumpdex_Native
#define _Included_com_lxzh123_dumpdex_Native
#ifdef __cplusplus
extern "C" {

#endif


#define NELEM(x) ((int) (sizeof(x) / sizeof((x)[0])))

//__BEGIN_DECLS

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved);
JNIEXPORT void JNICALL JNI_OnUnload(JavaVM* vm, void* reserved);

/*
 * Class:     com_lxzh123_dumpdex_Native
 * Method:    test
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_lxzh123_dumpdex_Native_dump(JNIEnv *, jclass, jstring);


#ifdef __cplusplus
}
#endif
#endif