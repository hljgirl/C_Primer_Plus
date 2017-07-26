// 程序清单12.14.cpp : 定义控制台应用程序的入口点。
//为数组动态分配存储空间

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	double * ptd;
	int max;
	int number;
	int i = 0;

	puts("What is the maximum number of type double entries?");
	scanf("%d", &max);

	ptd = (double *)malloc(max * sizeof(double));

	if (ptd == NULL)
	{
		puts("Memory allocation failed. Goodbye.");
		exit(EXIT_FAILURE);
	}

	puts("Enter the values(q to quit): ");

	while (i < max && scanf("%lf", &ptd[i]) == 1)
		i++;

	printf("Here are your %d entries: \n", number = i);

	for (i = 0; i < number; i++)
	{
		printf("%7.2f", ptd[i]);
		if (i % 7 == 6)
			putchar('\n');
	}

	if (i % 7 != 0)
		putchar('\n');

	puts("Done!");

	free(ptd);

	system("pause");
	return 0;
}

