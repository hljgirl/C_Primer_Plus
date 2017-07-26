// 程序清单9.3.cpp : 定义控制台应用程序的入口点。
//找出两个整数中的较小者

#include "stdafx.h"
#include <Windows.h>

int imin(int m, int n);

int _tmain(int argc, _TCHAR* argv[])
{
	int evil1, evil2;

	printf("Enter a pair of integers(q to quit):\n");

	while (scanf("%d %d", &evil1, &evil2) == 2)
	{
		printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
		printf("Enter a pair of integers(q to quit):\n");
	}

	printf("Bye!.\n");

	system("pause");
	return 0;
}

int imin(int m, int n)
{
	//int temp;

	//if (m > n)
	//{
	//	return n;
	//}else{

	//	return m;
	//}
	
	return m > n ? n : m;

}


