// 程序清单5.15.cpp : 定义控制台应用程序的入口点。
//定义带有一个参数的函数
//formal argument  formal parameter formal argument formal parameter
//actual argument  actual parameter

#include "stdafx.h"

void pound(int);

int _tmain(int argc, _TCHAR* argv[])
{
	int times = 5;
	char ch = '!';
	float f = 6.0f;
	pound(times);
	pound(ch);
	pound((int)f);

	system("pause");
	return 0;
}


void pound(int n)
{
	while (n-- > 0)
	{
		printf("#");
	}
	printf("\n");
}