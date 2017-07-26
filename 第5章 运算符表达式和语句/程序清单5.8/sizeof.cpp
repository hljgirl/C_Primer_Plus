// 程序清单5.8.cpp : 定义控制台应用程序的入口点。
//使用sizeof运算符

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int n = 0;
	size_t intsize;

	intsize = sizeof(int);

	printf("n = %d, n has %lu bytes; all ints have %lu bytes.\n", n, sizeof n, intsize);

	system("pause");
	return 0;
}

