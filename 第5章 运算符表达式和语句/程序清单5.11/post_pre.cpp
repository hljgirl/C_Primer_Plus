// 程序清单5.11.cpp : 定义控制台应用程序的入口点。
//后缀和前缀

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int a = 1, b = 1;
	int aplus, plusb;

	aplus = a++;
	plusb = ++b;

	printf("a aplus b plusb \n");
	printf("%1d %5d %5d %5d\n", a, aplus, b, plusb);

	system("pause");
	return 0;
}

