// 程序清单16.15.cpp : 定义控制台应用程序的入口点。
//使用qsort()对一组数字排序

#include "stdafx.h"
#include <Windows.h>

#define NUM 40

void fillarray(double ar[], int n);
void showarray(const double ar[], int n);
int mycomp(const void * p1, const void * p2);

int _tmain(int argc, _TCHAR* argv[])
{

	double vals[NUM];

	fillarray(vals, NUM);

	puts("Random list: ");

	showarray(vals, NUM);

	qsort(vals, NUM, sizeof(double), mycomp);

	puts("\nSorted list: ");

	showarray(vals, NUM);

	system("pause");
	return 0;
}


void fillarray(double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		ar[i] = (double)rand() / ((double)rand() + 0.1);
	}
}


void showarray(const double ar[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%9.4f ", ar[i]);

		if (i % 6 == 5)
			putchar('\n');
	}

	if (i % 6 != 0)
		putchar('\n');
}


int mycomp(const void * p1, const void * p2)
{
	const double *a1 = (const double *)p1;
	const double *a2 = (const double *)p2;

	if (*a1 < *a2)
	{
		return -1;
	}else if (*a1 == *a2)
	{
		return 0;
	}else{
		return 1;
	}

}