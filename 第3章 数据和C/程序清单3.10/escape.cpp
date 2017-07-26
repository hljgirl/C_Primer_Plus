// 程序清单3.10.cpp : 定义控制台应用程序的入口点。
//使用转义序列

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{

	float salary;

	printf("\aEnter your desired monthly salary: ");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a monty is $%.2f a year.", salary, salary * 12);
	printf("\rGee!\n");

	system("pause");
	return 0;
}

