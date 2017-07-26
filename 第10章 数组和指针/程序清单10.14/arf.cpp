// 程序清单10.14.cpp : 定义控制台应用程序的入口点。
//处理数组的函数

#include "stdafx.h"
#include <Windows.h>

#define SIZE 5

void show_array(const double [], int);
void mult_array(double [], int, double);

int _tmain(int argc, _TCHAR* argv[])
{	
	double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};

	printf("The original dip array:\n");
	show_array(dip, SIZE);
	mult_array(dip, SIZE, 2.5);
	printf("The dip array after calling mult_array():\n");
	show_array(dip, SIZE);
	
	
	system("pause");
	return 0;
}

void show_array(const double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%8.3f", arr[i]);
	}
	putchar('\n');

}


void mult_array(double arr[], int size, double n)
{

	for (int i = 0; i < size; i++)
	{
		arr[i] *= n;
	}

}