// 程序清单11.7.cpp : 定义控制台应用程序的入口点。
//使用scanf()

#include "stdafx.h"
#include <Windows.h>


int _tmain(int argc, _TCHAR* argv[])
{
	char name1[11], name2[11];
	int count;


	printf("Please enter 2 names.\n");
	count = scanf("%5s %10s", name1, name2);


	printf("I read the %d names %s and %s", count, name1, name2);

	system("pause");
	return 0;
}

