extern "C" __declspec(dllexport) bool IAInitCamera(char cameraIp[]);
extern "C" __declspec(dllexport) bool IASetCameraReady(char saveImagePath[], int timeOut);
extern "C" __declspec(dllexport) bool IAGetCaptureStatus();
extern "C" __declspec(dllexport) bool IACloseCamera(char cameraIp[]);
//在“C++”下定义“C”函数