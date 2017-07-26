// 程序清单6.12.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	
	printf("\tn\tn cubed\n");

	for (int i = 1; i <= 6; i++)
	{
		printf("%9d %9d\n", i, i*i*i);
	}


	getchar();
	return 0;
}

