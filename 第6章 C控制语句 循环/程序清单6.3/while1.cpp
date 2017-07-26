// 程序清单6.3.cpp : 定义控制台应用程序的入口点。
//拙劣的代码产生了一个无限循环

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int n = 0;

	while (n < 3)
		printf("n is %d\n", n);

	n++;

	printf("That's all this program does\n");


	system("pause");
	return 0;
}

