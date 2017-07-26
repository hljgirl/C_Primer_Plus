// 程序清单7.9.cpp : 定义控制台应用程序的入口点。
//使用continue跳过部分循环

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{

	const float MIN = 0.0f;
	const float MAX = 100.0f;

	float score;
	float total = 0.0f;
	int n = 0;
	float min = MAX;
	float max = MIN;

	printf("Enter the first score(q to quit):\n");

	while (scanf("%f", &score) == 1)
	{
		if (score < MIN || score > MAX)
		{
			printf("%0.1f is an invalid value. Try again:", score);
			continue;
		}

		printf("Accepting %0.1f:\n", score);

		min = score < min ? score : min;
		max = score > max ? score : max;

		total += score;
		n++;

		printf("Enter next score(q to quit):");
	}

	if (n > 0)
	{
		printf("Average of %d score is %0.1f.\n", n, total / n);
		printf("Low = %0.1f, high = %0.1f\n", min, max);
	}else
	{
		printf("No valid scores were entered.\n");
	}

	system("pause");
	return 0;
}

