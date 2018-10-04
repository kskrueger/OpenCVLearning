#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_kskrueger_opencvlearning_MainActivity_stringFromJNI(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "Hello from C + +");
}