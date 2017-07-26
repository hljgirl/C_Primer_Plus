// 程序清单16.18.cpp : 定义控制台应用程序的入口点。
//使用可变个数的参数

#include "stdafx.h"
#include <Windows.h>


double sum(int, ...);

int _tmain(int argc, _TCHAR* argv[])
{
	double s, t;

	s = sum(3, 1.1, 2.5, 13.3);
	t = sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1);

	printf("return value for sum(3, 1.1, 2.5, 13.3): %g\n", s);
	printf("return value for sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1): %g\n", t);

	system("pause");
	return 0;
}


double sum(int lim, ...)
{
	va_list ap;
	double tot = 0;

	va_start(ap, lim);

	for (int i = 0; i < lim; i++)
	{
		tot += va_arg(ap, double);
	}

	va_end(ap);

	return tot;
}
