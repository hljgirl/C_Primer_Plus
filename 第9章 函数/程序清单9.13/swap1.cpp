// 程序清单9.13.cpp : 定义控制台应用程序的入口点。
//交换函数的第一个版本

#include "stdafx.h"

void interchange(int u, int v);

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);

	interchange(x, y);

	printf("Now x = %d and y = %d.\n", x, y);

	getchar();
	return 0;
}

void interchange(int u, int v)
{

	int temp;

	temp = u;
	u = v;
	v = temp;

}