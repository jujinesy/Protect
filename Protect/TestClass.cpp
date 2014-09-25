#include "stdafx.h"
#include "TestClass.h"
#include <iostream>

TestClass::TestClass()
{
}

TestClass::~TestClass()
{
}

void TestClass::Start()
{
	std::cout << "Start\n";
}

void TestClass::Stop()
{
	std::cout << "Stop\n";
}

void TestClass::TestCla()
{
	std::cout << "Hello Class\n";
}

void TestClass::Int(int* dest, int* src)
{
	int temp = *dest;

	*dest = *src;
	*src = temp;
}

void TestClass::String(char* dest, char* src, int size)
{
	char* pcTemp = new char[size];

	for (int i = 0; i < size; i++)
	{
		pcTemp[i] = dest[i];
		dest[i] = src[i];
		src[i] = pcTemp[i];
	}

	delete[] pcTemp;
}

TestClass* GetSawpClass()
{
	TestClass* pClass = new TestClass();
	return pClass;
}