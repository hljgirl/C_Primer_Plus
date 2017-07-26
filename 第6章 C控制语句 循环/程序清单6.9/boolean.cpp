// 程序清单6.9.cpp : 定义控制台应用程序的入口点。
//使用_Bool变量

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	long num;
	long sum = 0L;

	bool input_is_good;

	printf("Please enter an integer to be summed.");
	printf("q to quit): ");

	input_is_good = (scanf("%d", &num) == 1);

	while (input_is_good)
	{
		sum = sum + num;

		printf("Please enter next integer (q to quit): ");

		input_is_good = (scanf("%d", &num) == 1);
	}

	printf("Those integer sum to %d.\n", sum);

	system("pause");
	return 0;
}

