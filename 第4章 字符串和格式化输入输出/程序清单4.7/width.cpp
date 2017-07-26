// 程序清单4.7.cpp : 定义控制台应用程序的入口点。
//字段宽度

#include "stdafx.h"

#define PAGES 931

int _tmain(int argc, _TCHAR* argv[])
{
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%10d*\n", PAGES);
	printf("*%-10d*\n", PAGES);
	printf("*%010d*\n", PAGES);

	system("pause");
	return 0;
}

