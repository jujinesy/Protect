// StaticTestApp.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "..\Protect\dllmain.h"
#pragma comment(lib, "..\\Debug\\Protect.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	TestC();

	TestClass Tc;
	Tc.TestCla();

	getchar();
	return 0;
}