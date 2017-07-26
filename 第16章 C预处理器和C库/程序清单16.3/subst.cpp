// 程序清单16.3.cpp : 定义控制台应用程序的入口点。
//在字符串中进行替换

#include "stdafx.h"
#include <Windows.h>


#define PSQR(x) printf("The square of " #x " is %d.\n", ((x)*(x)));

int _tmain(int argc, _TCHAR* argv[])
{
	int y = 5;

	PSQR(y);
	PSQR(2 + 4);

	system("pause");
	return 0;
}

