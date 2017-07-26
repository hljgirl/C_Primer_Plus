// 程序清单6.2.cpp : 定义控制台应用程序的入口点。
//何时退出一个循环

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int n = 5;

	while (n < 7)
	{
		printf("n = %d\n", n);
		n++;
		printf("Now n = %d\n", n);

	}

	printf("The loop has finished.\n");

	system("pause");
	return 0;
}

