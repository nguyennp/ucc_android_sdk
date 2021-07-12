package com.vnptit.videocallsample;

import android.annotation.SuppressLint;
import android.provider.Settings;

import androidx.multidex.MultiDexApplication;

import com.vnptit.video_call_sdk.BuildConfig;
import com.vnptit.video_call_sdk.config.SDKConfig;
import com.vnptit.video_call_sdk.utils.AppCode;
import com.vnptit.video_call_sdk.utils.Constants;

public class MyApplication extends MultiDexApplication {
    private static String TAG = "MyApplication";

    @SuppressLint("HardwareIds")
    @Override
    public void onCreate() {
        super.onCreate();

        // cấu hình môi trường SDK
        SDKConfig.setApplication(this);

        // truyền thông số cấu hình bộ key định danh ứng dụng tích hợp vào SDK
        AppCode.TOKEN_ID_SDK = "";
        AppCode.TOKEN_KEY_SDK = "";
        AppCode.CLIENT_ID = "";
        AppCode.CLIENT_SECRET = "";
        AppCode.TOKEN_ID_APP = "";
        AppCode.TOKEN_ID_APP_DEST = "";

        // truyền thông số định danh người dùng của app tích hợp
        AppCode.DEVICE_ID = "Android" + Settings.Secure.getString(this.getContentResolver(), Settings.Secure.ANDROID_ID);
        AppCode.PERSON_ID = "CustomerID" + Settings.Secure.getString(this.getContentResolver(), Settings.Secure.ANDROID_ID); //Customer ID của app tích hợp
        AppCode.PERSON_NAME = "Sample Name"; //Customer name của app tích hợp
        AppCode.TOPIC_USING = AppCode.TOKEN_ID_SDK + "_" + AppCode.TOKEN_ID_APP + "_" + AppCode.PERSON_ID + "_" + AppCode.DEVICE_ID;
    }
}
