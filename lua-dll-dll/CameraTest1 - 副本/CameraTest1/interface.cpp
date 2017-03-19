
#include "interface.h"

int tolua_global_open(lua_State* tolua_S);

int __cdecl luaopen_CameraTest1(lua_State * L)
{
	printf("< Load CameraTest1 > ...\r\n");
	tolua_global_open(L);
	printf("< Load CameraTest1 > Finished\r\n");
	return 0;
}
