// 程序清单12.2.cpp : 定义控制台应用程序的入口点。
//c99关于代码块的新规则

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{

	int n = 10;
	printf("Initially, n= %d\n", n);

	for (int n = 1; n < 3; n++)
		printf("loop 1: n= %d\n", n);

	printf("After loop 1, n= %d\n", n);

	for (int n = 1; n < 3; n++)
	{
		printf("loop 2: n= %d\n", n);
		//int n = 30;
		//printf("loop 2: n= %d\n", n);
		//n++;
	}

	printf("After loop 2, n= %d\n", n);

	system("pause");
	return 0;
}

