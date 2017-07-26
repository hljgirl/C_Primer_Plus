// 程序清单4.17.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int n;

	printf("Please enter three integers: \n");
	scanf("%*d %*d %d", &n);

	printf("The last integer was %d \n", n);

	system("pause");
	return 0;
}

