// 程序清单11.16.cpp : 定义控制台应用程序的入口点。
//这个程序能满足要求吗？

#include "stdafx.h"
#include <Windows.h>

#define ANSWER "Grant"

int _tmain(int argc, _TCHAR* argv[])
{
	char try1[40];

	puts("Who is buried in Grant's tomb?");
	gets(try1);

	while (try1 != ANSWER)
	{
		puts("No, that's wrong. Try again.");
		gets(try1);
	}

	puts("That's right!");

	system("pause");
	return 0;
}

