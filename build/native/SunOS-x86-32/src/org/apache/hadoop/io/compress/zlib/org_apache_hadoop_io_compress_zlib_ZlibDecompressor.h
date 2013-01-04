/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_hadoop_io_compress_zlib_ZlibDecompressor */

#ifndef _Included_org_apache_hadoop_io_compress_zlib_ZlibDecompressor
#define _Included_org_apache_hadoop_io_compress_zlib_ZlibDecompressor
#ifdef __cplusplus
extern "C" {
#endif
#undef org_apache_hadoop_io_compress_zlib_ZlibDecompressor_DEFAULT_DIRECT_BUFFER_SIZE
#define org_apache_hadoop_io_compress_zlib_ZlibDecompressor_DEFAULT_DIRECT_BUFFER_SIZE 65536L
/* Inaccessible static: clazz */
/* Inaccessible static: nativeZlibLoaded */
/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibDecompressor
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibDecompressor
 * Method:    init
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_init
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibDecompressor
 * Method:    setDictionary
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_setDictionary
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibDecompressor
 * Method:    inflateBytesDirect
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_inflateBytesDirect
  (JNIEnv *, jobject);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibDecompressor
 * Method:    getBytesRead
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_getBytesRead
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibDecompressor
 * Method:    getBytesWritten
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_getBytesWritten
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibDecompressor
 * Method:    getRemaining
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_getRemaining
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibDecompressor
 * Method:    reset
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_reset
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibDecompressor
 * Method:    end
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibDecompressor_end
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
