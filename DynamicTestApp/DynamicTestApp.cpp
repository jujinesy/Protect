// DynamicTestApp.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <windows.h>

typedef void (*pfntest)();
typedef void (*FactoryFunc)();
int _tmain(int argc, _TCHAR* argv[])
{
	HINSTANCE hClassDll = LoadLibrary(_T("..\\Debug\\Protect.dll"));
	if (hClassDll == NULL)
	{
		printf("dll 로드 실패\n");
		return -1;
	}
	pfntest testC = (pfntest)GetProcAddress(hClassDll, "TestC");
	testC();

	//FactoryFunc factoryFunc = (FactoryFunc)GetProcAddress(hClassDll, "TestClass");
	//factoryFunc();

	FreeLibrary(hClassDll);

	return 0;
}

