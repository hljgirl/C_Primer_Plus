// 程序清单11.5.cpp : 定义控制台应用程序的入口点。
//读取一个名字

#include "stdafx.h"
#include <Windows.h>

#define MAX		81

int _tmain(int argc, _TCHAR* argv[])
{
	char name[MAX];
	char *ptr;

	printf("Hi, what's your name?\n");

	ptr = gets(name);

	printf("%s? Ah! %s!\n", name, ptr);

	system("pause");
	return 0;
}

