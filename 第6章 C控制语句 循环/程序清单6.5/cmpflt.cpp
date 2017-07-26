// 程序清单6.5.cpp : 定义控制台应用程序的入口点。
//浮点数比较

#include "stdafx.h"
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{
	const double ANSWER = 3.14159;
	double response;

	printf("What is the value of pi?\n");

	scanf("%lf", &response);

	while (fabs(response - ANSWER) > 0.0001)
	{
		printf("Tye again!\n");
		scanf("%lf", &response);
	}

	printf("Close enough!\n");

	system("pause");
	return 0;
}

