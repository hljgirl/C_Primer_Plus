// 程序清单12.9.cpp : 定义控制台应用程序的入口点。
//测试函数rand1()和srand1()

#include "stdafx.h"
#include <Windows.h>

void srand1(unsigned int x);
int rand1(void);

int _tmain(int argc, _TCHAR* argv[])
{
	unsigned seed;

	printf("Please enter your choice for seed.\n");

	while (scanf("%u", &seed) == 1)
	{
		srand1(seed);
		for (int count = 0; count < 5; count++)
			printf("%hd\n", rand1());

		printf("Please enter next seed(q to quit):\n");
	}

	printf("Done!\n");

	system("pause");
	return 0;
}

