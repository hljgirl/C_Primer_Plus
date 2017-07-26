// 程序清单11.17.cpp : 定义控制台应用程序的入口点。
//这个程序可以满足要求

#include "stdafx.h"
#include <Windows.h>

#define ANSWER	"Grant"
#define MAX		40
int _tmain(int argc, _TCHAR* argv[])
{
	char try1[MAX];

	puts("Who is buried in Grant's tomb?");
	gets(try1);

	while (strcmp(ANSWER, try1) != 0)
	{
		puts("No, that's wrong. Try again.");
		gets(try1);
	}

	puts("That's right!");

	system("pause");
	return 0;
}
