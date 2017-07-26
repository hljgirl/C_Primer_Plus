// 程序清单10.11.cpp : 定义控制台应用程序的入口点。
//对一个数组的所有元素求和

#include "stdafx.h"
#include <Windows.h>

#define SIZE 10

int sump(int * begin, int * end);

int _tmain(int argc, _TCHAR* argv[])
{
	int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
	long answer;

	answer = sump(marbles, marbles + SIZE);

	printf("The total number of marbles is %ld .\n", answer);
	printf("The size of marbles is %lu bytes.\n", sizeof marbles);

	system("pause");
	return 0;
}

int sump(int * begin, int * end)
{
	int total = 0;

	//for (int i = 0; i < n; i++)
	//{
	//	//total += arr[i];
	//	//total += *(arr++);
	//	total += *(arr + i);
	//}

	while (begin < end)
	{
		//total += *(begin++);
		total += *begin++;
	}

	printf("The size of begin is %lu bytes.\n", sizeof begin);
	printf("The size of end is %lu bytes.\n", sizeof end);

	return total;

}