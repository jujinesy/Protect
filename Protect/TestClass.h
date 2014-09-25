#pragma once

#ifdef DLL_PROTECT
#define DLL_PROTECT_API __declspec(dllexport)
#else
#define DLL_PROTECT_API __declspec(dllimport)
#endif

class DLL_PROTECT_API TestClass
{
public:
	TestClass();
	~TestClass();
	void Start();
	void Stop();
	void TestCla();
	void Int(int* dest, int* src);
	void String(char* dest, char* src, int size);
};