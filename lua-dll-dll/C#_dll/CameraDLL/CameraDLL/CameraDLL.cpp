#include "CameraDLL.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

extern "C" bool IAInitCamera(char cameraIp[]){
	printf_s("IAInitCamera success ,param = %s",cameraIp);
	return true;
}

extern "C" bool IASetCameraReady(char saveImagePath[], int timeOut){
	printf_s("IASetCameraReady success ,param = %s ; %d",saveImagePath,timeOut);
	return true;
}

extern "C" bool IAGetCaptureStatus(){
	printf_s("IAGetCaptureStatus success");
	return true;
}

extern "C" bool IACloseCamera(char cameraIp[]){
	printf_s("IACloseCamera success , param = %s", cameraIp);
	return true;
}
