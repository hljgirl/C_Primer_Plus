// 程序清单16.5.cpp : 定义控制台应用程序的入口点。
//可变宏

#include "stdafx.h"
#include <Windows.h>
#include <math.h>

#define PR(X, ...)  printf("Message " #X " : " __VA_ARGS__)

int _tmain(int argc, _TCHAR* argv[])
{

	double x = 48;
	double y;

	y = sqrt(x);

	PR(1, "x = %g\n", x);
	PR(2, "x = %.2f, y = %.4f\n", x, y);

	getchar();
	return 0;
}

