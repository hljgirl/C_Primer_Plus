// 程序清单10.10.cpp : 定义控制台应用程序的入口点。
//对一个数组的所有元素求和

#include "stdafx.h"
#include <Windows.h>

#define SIZE 10

int sum(int *, int);

int _tmain(int argc, _TCHAR* argv[])
{
	int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
	long answer;

	answer = sum(marbles, SIZE);

	printf("The total number of marbles is %d .\n", answer);
	printf("The size of marbles is %lu bytes.\n", sizeof marbles);

	system("pause");
	return 0;
}

int sum(int * arr, int n)
{
	int total = 0;

	for (int i = 0; i < n; i++)
	{
		//total += arr[i];
		//total += *(arr++);
		total += *(arr + i);
	}

	printf("The size of arr is %lu bytes.\n", sizeof arr);

	return total;

}