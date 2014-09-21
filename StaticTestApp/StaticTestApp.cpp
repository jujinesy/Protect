// StaticTestApp.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "..\Protect\TestC.h"
#include "..\Protect\TestClass.h"
#pragma comment(lib, "..\\Debug\\Protect.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	TestC();

	TestClass Tc;
	Tc.TestCla();
	return 0;
}