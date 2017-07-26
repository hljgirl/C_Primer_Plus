// 程序清单9.5.cpp : 定义控制台应用程序的入口点。
//使用函数原型

#include "stdafx.h"
#include <Windows.h>

int imax(int, int);

int _tmain(int argc, _TCHAR* argv[])
{
	printf("The maximum of %d and %d is %d .\n", 3, 5, imax(3 , 5));
	printf("The maximum of %d and %d is %d .\n", 3, 5, imax(3.0, 5.0));

	system("pause");
	return 0;
}


int imax(int n, int m)
{
	return m > n ? m : n;
}