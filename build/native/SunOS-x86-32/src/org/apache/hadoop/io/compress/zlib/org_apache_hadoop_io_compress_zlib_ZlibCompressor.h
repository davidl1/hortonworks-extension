/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_hadoop_io_compress_zlib_ZlibCompressor */

#ifndef _Included_org_apache_hadoop_io_compress_zlib_ZlibCompressor
#define _Included_org_apache_hadoop_io_compress_zlib_ZlibCompressor
#ifdef __cplusplus
extern "C" {
#endif
#undef org_apache_hadoop_io_compress_zlib_ZlibCompressor_DEFAULT_DIRECT_BUFFER_SIZE
#define org_apache_hadoop_io_compress_zlib_ZlibCompressor_DEFAULT_DIRECT_BUFFER_SIZE 65536L
/* Inaccessible static: clazz */
/* Inaccessible static: nativeZlibLoaded */
/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibCompressor
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibCompressor
 * Method:    init
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_init
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibCompressor
 * Method:    setDictionary
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_setDictionary
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibCompressor
 * Method:    deflateBytesDirect
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_deflateBytesDirect
  (JNIEnv *, jobject);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibCompressor
 * Method:    getBytesRead
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_getBytesRead
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibCompressor
 * Method:    getBytesWritten
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_getBytesWritten
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibCompressor
 * Method:    reset
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_reset
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_apache_hadoop_io_compress_zlib_ZlibCompressor
 * Method:    end
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_apache_hadoop_io_compress_zlib_ZlibCompressor_end
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif