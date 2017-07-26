// 程序清单10.9.cpp : 定义控制台应用程序的入口点。
//使用指针符号

#include "stdafx.h"
#include <Windows.h>

#define MONTHS 12

int sum1(int *, int);
int sum2(int *p, int n);
int sum3(int a[], int n);
int sum4(int [], int n);

int _tmain(int argc, _TCHAR* argv[])
{

	int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (int i = 0; i < MONTHS; i++)
	{
		//printf("Month %d has %2d days.\n", i+1, days[i]);        //<<<<right
		//printf("Month %d has %2d days.\n", i+1, *days + i);      //<<<<wrong
		printf("Month %d has %2d days.\n", i+1, *(days + i));      //<<<<right
	}

	system("pause");
	return 0;
}

