// 程序清单4.12.cpp : 定义控制台应用程序的入口点。
//不匹配的浮点数转换

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	float n1 = 3.0;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;

	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
	printf("%ld %ld\n", n3, n4);
	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);

	system("pause");
	return 0;
}

