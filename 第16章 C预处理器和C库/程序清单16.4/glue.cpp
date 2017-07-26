// 程序清单16.4.cpp : 定义控制台应用程序的入口点。
//使用##运算符

#include "stdafx.h"

#define XNAME(n) x##n
#define PRINT_XN(n) printf("x" #n " = %d.\n", x##n);

int _tmain(int argc, _TCHAR* argv[])
{

	int XNAME(1) = 14;
	int XNAME(2) = 20;

	PRINT_XN(1);
	PRINT_XN(2);

	getchar();
	return 0;
}

