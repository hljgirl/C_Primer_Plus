// 程序清单5.4.cpp : 定义控制台应用程序的入口点。
//产生前20个整数的平方表

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int num = 1;

	while (num < 21)
	{
		printf("%4d %6d\n", num, num * num);
		num += 1;
	}

	system("pause");
	return 0;
}

