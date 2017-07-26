// 程序清单4.5.cpp : 定义控制台应用程序的入口点。
//使用limit.h和float.h中定义的常量

#include "stdafx.h"
#include <limits.h>
#include <float.h>

int _tmain(int argc, _TCHAR* argv[])
{
	printf("Some number limits for this system: \n");
	printf("Biggest int: %d \n", INT_MAX);
	printf("Smallest unsigned long: %lld \n", LLONG_MIN);
	printf("One byte = %d bits on this system .\n", CHAR_BIT);
	printf("Largest double : %e \n", DBL_MAX);
	printf("Smallest normal float: %e \n", FLT_MIN);
	printf("float precision = %d digits \n", FLT_DIG);
	printf("float epsion = %e \n", FLT_EPSILON);
	printf("");

	system("pause");
	return 0;
}

