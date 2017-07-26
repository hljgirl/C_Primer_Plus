// 程序清单11.10.cpp : 定义控制台应用程序的入口点。
//不添加换行符打印一个字符串

#include "stdafx.h"
#include <Windows.h>

void put1(const char*);
int _tmain(int argc, _TCHAR* argv[])
{

	const char * string = "alskjflasjdfaslfjasldf";

	put1(string);

	system("pause");
	return 0;
}

void put1(const char* string)
{
	while (*string != '\0')
	{
		putchar(*string++);
	}

}