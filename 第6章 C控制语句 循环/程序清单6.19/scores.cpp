// 程序清单6.19.cpp : 定义控制台应用程序的入口点。
//使用循环进行数组处理

#include "stdafx.h"

#define SIZE 10
#define PAR  72

int _tmain(int argc, _TCHAR* argv[])
{
	int index, score[SIZE];
	int sum = 0;
	float average;

	printf("Enter %d golf scores: \n", SIZE);
	for (index = 0; index < SIZE; index++)
	{
		scanf("%d", &score[index]);
	}


	printf("The scores read in are as follows: \n");
	for (index = 0; index < SIZE; index++){
		printf("%5d", score[index]);
	}


	printf("\n");

	for (index = 0; index < SIZE; index++){
		sum += score[index];
	}
	average = (float)sum / SIZE;

	printf("Sum of scores = %d, average = %.2f\n", sum, average);
	printf("That's a handicap of %.0f\n", average - PAR);

	system("pause");
	return 0;
}

