// DynamicTestApp.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
		printf("dll �ε� ����\n");
		return -1;
	}
	pfntest testC = (pfntest)GetProcAddress(hClassDll, "TestC");
	testC();

	//FactoryFunc factoryFunc = (FactoryFunc)GetProcAddress(hClassDll, "TestClass");
	//factoryFunc();

	FreeLibrary(hClassDll);

	return 0;
}

