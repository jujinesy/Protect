// StaticTestApp.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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