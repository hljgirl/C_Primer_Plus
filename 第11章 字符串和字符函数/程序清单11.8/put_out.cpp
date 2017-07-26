// 程序清单11.8.cpp : 定义控制台应用程序的入口点。
//使用puts

#include "stdafx.h"
#include <Windows.h>

#define DEF "I am a #defined string."
int _tmain(int argc, _TCHAR* argv[])
{
	char str1[80] = "An array was initialized to me.";
	const char *str2 = "A pointer was initialized to me.";

	puts("I'm an argument to puts().");
	puts(DEF);
	puts(str1);
	puts(str2);
	puts(&str1[5]);
	puts(str2+4);

	system("pause");
	return 0;
}

