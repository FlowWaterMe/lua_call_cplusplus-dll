#include "CameraDLL.h"
#include <stdio.h>
#include <windows.h>
int main(int argc, char *argv[]){
	printf("main start\n");
	IAGetCaptureStatus();
	printf("main end\n");
	system("pause");
	return 0;
}