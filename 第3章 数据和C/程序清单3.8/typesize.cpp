// 程序清单3.8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>
#include <limits.h>
#include <float.h>

int _tmain(int argc, _TCHAR* argv[])
{


	printf("sizeof(int) = %d\n", sizeof(int) * 8);
	printf("sizeof(char) = %d\n", sizeof(char) * 8);
	printf("sizeof(long) = %d\n", sizeof(long) * 8);

	printf("sizeof(float) = %d\n", sizeof(float) * 8);
	printf("sizeof(double) = %d\n", sizeof(double) * 8);
	printf("sizeof(long double) = %d\n", sizeof(long double) * 8);



	system("pause");
	return 0;
}

