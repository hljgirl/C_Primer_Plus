// 程序清单11.4.cpp : 定义控制台应用程序的入口点。
//读取一个名字

#include "stdafx.h"
#include <Windows.h>

#define MAX		81

int _tmain(int argc, _TCHAR* argv[])
{
	char name[MAX];

	printf("Hi, what's your name?\n");

	gets(name);

	printf("Nice name, %s.\n", name);

	system("pause");
	return 0;
}

