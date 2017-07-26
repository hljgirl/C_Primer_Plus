// 程序清单11.13.cpp : 定义控制台应用程序的入口点。
//使用缩短字符串的函数

#include "stdafx.h"
#include <Windows.h>

void fit(char *, unsigned int);

int _tmain(int argc, _TCHAR* argv[])
{
	char mesg[] = "Hold on to your hats, hackers.";

	puts(mesg);
	fit(mesg, 7);
	puts(mesg);

	puts("Let's look at some more of the string.");
	puts("mesg + 8");
	puts(mesg + 8);

	system("pause");
	return 0;
}

void fit(char *string, unsigned int size)
{
	if (strlen(string) > size)
	{
		*(string + size) = '\0';
	}

}