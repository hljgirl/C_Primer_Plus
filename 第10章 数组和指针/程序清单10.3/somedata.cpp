// 程序清单10.3.cpp : 定义控制台应用程序的入口点。
//部分初始化数组

#include "stdafx.h"

#define SIZE 4

int _tmain(int argc, _TCHAR* argv[])
{
	int no_data[SIZE] = {1492,1066};

	printf("%2s %14s\n","i", "no_data[i]");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%2d %14d\n", i, no_data[i]);
	}

	getchar();
	return 0;
}