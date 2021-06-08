#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_vnptit_videocallsample_MyApplication_getAccessToken(JNIEnv *env, jobject thiz) {
    std::string access_token = "eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9.eyJhdWQiOlsicmVzdHNlcnZpY2UiXSwidXNlcl9uYW1lIjoiZm9yZXZlcmRlbW9Adm5wdC52biIsImF1dGhvcml0aWVzIjpbIlVTRVIiXSwianRpIjoiMmFhNGE4Y2QtZDM4Ny00MWZjLWJmZWUtNjU5OThkM2U5NTkyIiwiY2xpZW50X2lkIjoiYWRtaW5hcHAiLCJzY29wZSI6WyJyZWFkIl19.qkGyxaOfUoglYriIotuAJyQzbOlxgd9bnBrM0O5gsPeGgB_ZiytA7W5XFUtPAqHrfkSuO-18OxU1RmO7FLVRCe2lBwVxegpE0oR_7ontJRJhnpLbelTBzSQ_Uu2tSKAqAr-1a0VasR0xffzG8RzmqCL7iP_FbN70yyV8KkCP-RGVg0gZHaz3eNR5gb1irOPJI_X0Nnc9vinDWh2HH7RxjVARjMShZAyRN_a_JLGDgbE0XMwwo88pFRI6ea0-4r0I9p8fIcJHP83CQsowNyjj0hNc-z1LT_7edsdniq0ryL99S5ZWrY31LLXhhy67QeqdkTpfdRgdpR5w6sIV78DcRQ";
    //std::string access_token = "Bearer eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9.eyJhdWQiOlsicmVzdHNlcnZpY2UiXSwidXNlcl9uYW1lIjoiYWRtaW5AaWRnLnZucHQudm4iLCJzY29wZSI6WyJyZWFkIl0sInV1aWRfYWNjb3VudCI6IjdlYzBmZGEwLTdiMTEtNDkwNy04N2UzLWY0MDFjMjAyNjFmNSIsImF1dGhvcml0aWVzIjpbIlVTRVIiXSwianRpIjoiNWYzMjFjZTEtMmU4MC00ZTUzLThhMzAtMjNjMmI0NTg5MjFhIiwiY2xpZW50X2lkIjoiYWRtaW5hcHAifQ.c-1F2C_PTSZ2pktErhKshgRW7cVF3Onz9yZ14DvdNl4N4irTeaNq_fowpGCitskT9d9-SolbEr1jgyNOX80asSK0_UVXuI1uZ-vPAYLnkz75T5YmANQcKMa7q0JqzcD6FyuK3Ons2RYUuDmmzFPCL8U01b3LlJd2ONXL9jNF8c-T1XsBUIM3NwXJags7CadMxCfHdXGV29yZ-ncw0E7Rqug19hHbaFGDXRul0zrj1Yu9W9Sw5ZfP0ZImMSKoAXLReDhYmASqLGlmRLCU86Cwoq6TEoEu9r6XkGAnDK6tEj5oVchjqqIiKnjbc0fg0IuT0R16jpDxWM7Fn0qfQfBpiA";

    return env->NewStringUTF(access_token.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_vnptit_videocallsample_MyApplication_getTokenID(JNIEnv *env, jobject thiz) {
    //std::string token_id = "6af3add6-4023-4185-abfe-17b6aaa16b0f";
    //std::string token_id = "b5133ae4-f74a-266d-e053-604fc10a3c1b";
    std::string token_id = "be400bf3-9b91-311b-e053-5f4fc10a3519";

    return env->NewStringUTF(token_id.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_vnptit_videocallsample_MyApplication_getTokenKey(JNIEnv *env, jobject thiz) {
    //  std::string token_key = "MFwwDQYJKoZIhvcNAQEBBQADSwAwSAJBAJA5XkrWo36Y/WLmRD1z79TEKxcDzR/A25o9fqydnxJcvv2lWQLjOuyJaFhyP13TwDWOaRE61VSgZgKKfEuQP5kCAwEAAQ==";
    //std::string token_key = "MFwwDQYJKoZIhvcNAQEBBQADSwAwSAJBAJQ4Cz4B3CP4CV20gF9uSUvBoK/gwOrrP4whWt+vwRRDtyykoTywOPZbTmdTe9+rKEv3NhL/6i+G1CgjMr4ThVcCAwEAAQ==";
    std::string token_key = "MFwwDQYJKoZIhvcNAQEBBQADSwAwSAJBAMiy2tvBR5iGiR2smm+/2dCgpAdqk2RdYAggcxKJYsPLurqiQwSrAOaUVoPPU7WS+o8uP246sD9UE+8rlmmTrpsCAwEAAQ==";
    return env->NewStringUTF(token_key.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_vnptit_videocallsample_MyApplication_getClientID(JNIEnv *env, jobject thiz) {
//    std::string client_id = "videocall";
    std::string client_id = "2Q0z4vJXaVRBwPyTIy6IZ236eWSBsbDadOGcqrkm";

    return env->NewStringUTF(client_id.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_vnptit_videocallsample_MyApplication_getClientSecret(JNIEnv *env, jobject thiz) {
    //   std::string client_secret = "password";
    std::string client_secret = "IdbLaOwHUBp23bddqLGC0y8930NdqNTROKZ0s5Y8";

    return env->NewStringUTF(client_secret.c_str());
}