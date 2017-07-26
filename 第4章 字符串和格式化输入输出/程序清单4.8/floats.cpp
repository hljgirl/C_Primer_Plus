// 程序清单4.8.cpp : 定义控制台应用程序的入口点。
//一些浮点数的组合

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	const double RENT = 3852.99;

	printf("*%f*\n", RENT);
	printf("*%e*\n", RENT);
	printf("*%4.2f*\n", RENT);
	printf("*%3.1f*\n", RENT);
	printf("*%10.3f*\n", RENT);
		printf("*%10.3e*\n", RENT);
			printf("*%+4.2f*\n", RENT);
printf("*%010.2f*\n", RENT);

	system("pause");
	return 0;
}

