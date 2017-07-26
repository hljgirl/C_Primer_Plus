// 程序清单6.7.cpp : 定义控制台应用程序的入口点。
//哪些值是真

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int n = 3;

	while (n)
	{
		printf("%2d is true\n", n--);
	}
	
	printf("%2d is false\n", n);


	n = -3;
	while (n)
	{
		printf("%2d is true\n", n++);
	}
	
	printf("%2d is false\n", n);

	system("pause");
	return 0;
}

