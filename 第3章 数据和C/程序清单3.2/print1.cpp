// 程序清单3.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{

	int ten = 10;
	int two = 2;

	printf("Doing it right: ");
	printf("%d minus %d is %d \n", ten, 2, ten - two);

	printf("Doing it wrong: ");
	printf("%d minus %d is %d \n", ten);

	system("pause");
	return 0;
}

