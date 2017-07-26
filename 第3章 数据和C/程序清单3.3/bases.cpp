// 程序清单3.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{

	int x = 100;

	printf("dec = %d; octal = %o; hex = %x \n", x, x, x);

	printf("dec = %d; octal = %#o; hex = %#x \n", x, x, x);


	system("pause");
	return 0;
}

