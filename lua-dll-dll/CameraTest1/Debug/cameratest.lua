package.cpath = package.path..";".."C:\\Users\\Young_liu\\Desktop\\dllexample\\project\\lua-dll-dll\\CameraTest1\\Debug\\?.dll"
require "CameraTest1"
print(">>",GetCaptureStatus())


print(">>",InitCamera("32"));


print(">>",SetCameraReady("Desktop",1));



print(">>",CloseCamera("CloseCamera"));
