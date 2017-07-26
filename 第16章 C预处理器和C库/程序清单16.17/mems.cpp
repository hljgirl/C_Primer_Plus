// 程序清单16.17.cpp : 定义控制台应用程序的入口点。
//使用memcpy()和memmove()函数

#include "stdafx.h"
#include <Windows.h>

#define SIZE 10

void show_array(const int ar[], int n);

int _tmain(int argc, _TCHAR* argv[])
{
	int values[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int target[SIZE];
	double curious[SIZE / 2] = {1.0, 2.0, 3.0, 4.0, 5.0};

	puts("memcpy() used: ");
	puts("values (original data): ");

	show_array(values, SIZE);
	memcpy(target, values, SIZE * sizeof(int));
	puts("target (copy of values) : ");
	show_array(target, SIZE);

	puts("\nUsing memmove() with overlapping ranges: ");
	memmove(values + 2, values, 5 * sizeof(int));
	puts("valuse -- elements 0-5 copied to 2-7: ");
	show_array(values, SIZE);

	puts("\nUsing memcpy() to copy double to int: ");
	memcpy(target, curious, SIZE / 2 * sizeof(double));
	puts("target -- 5 double into 10 int positions: ");
	show_array(target, SIZE);



	system("pause");
	return 0;
}


void show_array(const int ar[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%3d ", ar[i]);

	putchar('\n');
}
