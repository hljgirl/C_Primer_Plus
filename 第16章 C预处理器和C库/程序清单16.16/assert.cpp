// 程序清单16.16.cpp : 定义控制台应用程序的入口点。
//使用assert（）

#include "stdafx.h"
#include <Windows.h>
#include <math.h>
#include <assert.h>

int _tmain(int argc, _TCHAR* argv[])
{
	double x, y, z;

	puts("Enter a pair of number (0 0 to quit)");

	while (scanf("%lf %lf", &x, &y) == 2 && (x != 0 || y != 0))
	{
		z = x * x - y * y;
		assert(z >= 0);
		printf("answer is %f\n", sqrt(z));
		puts("Next pair of numbers: ");
	}

	puts("Done.");

	system("pause");
	return 0;
}

