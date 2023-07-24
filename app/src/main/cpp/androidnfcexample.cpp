
// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("androidnfcexample");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("androidnfcexample")
//      }
//    }
#include "include/BCAdllE.h"
#include <jni.h>


JNIEXPORT extern "C" jboolean
Java_com_maskaravivek_androidnfcexample_NativeLibrary_cekSaldoBCA(JNIEnv *env, jobject thiz) {
    // TODO: implement BCACheckBalance()
}