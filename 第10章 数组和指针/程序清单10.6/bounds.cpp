// 程序清单10.6.cpp : 定义控制台应用程序的入口点。
//超出数组的边界

#include "stdafx.h"

#define SIZE 4
int _tmain(int argc, _TCHAR* argv[])
{
	int value1 = 44;	
	int arr[SIZE];
	int value2 = 88;

	printf("value1 = %d, value2 = %d\n", value1, value2);

	for (int i = -1; i <= SIZE; i++)
	{
		arr[i] = 2 * i + 1;
	}

	for (int i = -1; i < 7; i++)
	{
		printf("%2d %d\n", i, arr[i]);
	}

	printf("value1 = %d, value2 = %d\n", value1, value2);

	system("pause");
	return 0;
}

