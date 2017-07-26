// 程序清单9.14.cpp : 定义控制台应用程序的入口点。
//分析swap1.cpp程序

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

	printf("Originally u = %d and v = %d.\n", u, v);


	temp = u;
	u = v;
	v = temp;

	printf("Now u = %d and v = %d.\n", u, v);
}

