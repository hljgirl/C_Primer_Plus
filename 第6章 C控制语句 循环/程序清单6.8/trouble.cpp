// 程序清单6.8.cpp : 定义控制台应用程序的入口点。
//误用 将导致无限循环

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	long num;
	long sum = 0L;

	int status;

	printf("Please enter an integer to be summed.");
	printf("q to quit): ");

	status = scanf("%d", &num);

	while (status = 1)
	{
		sum = sum + num;

		printf("Please enter next integer (q to quit): ");

		status = scanf("%d", &num);
	}

	printf("Those integer sum to %d.\n", sum);

	system("pause");
	return 0;
}

