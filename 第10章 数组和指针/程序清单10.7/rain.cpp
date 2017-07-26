// 程序清单10.7.cpp : 定义控制台应用程序的入口点。
//针对若干年的降水量数据、计算年降水总量、年降水平均量，以及月降水平均量

#include "stdafx.h"

#define MONTHS 12
#define YEARS  5

int _tmain(int argc, _TCHAR* argv[])
{
	const float rain[YEARS][MONTHS] = {
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},                  // sum = 32.4        ave = 2.7
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},                  // sum = 37.9        ave = 3.158333333
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},                  // sum = 49.8        ave = 4.15
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},                  // sum = 44.0        ave = 3.6666
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}                   // sum = 32.9        ave = 2.74166666
	};

	float subtot, average, total;

	

	printf(" YEAR   RAINFALL  (inches) \n");

	total = 0;
	for (int i = 0; i < YEARS; i++)
	{	
		subtot = 0.0f;
		average = 0.0f;
		for (int j = 0; j < MONTHS; j++)
		{
			subtot += rain[i][j]; 
		}
		average = subtot / MONTHS;		
		printf("%s%d   sum = %.2f average = %.2f\n", "YEAR 200", i, subtot, average);

		total += subtot;
	}

	printf("\nThe yearly average is %.2f inches.\n\n", total / YEARS);


	printf(" MONTHLY   AVERAGES:  (inches) \n\n");

	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

	for (int i = 0; i < MONTHS; i++)
	{
		subtot = 0.0f;
		average = 0.0f;
		for (int j = 0; j < YEARS; j++)
		{
			subtot += rain[j][i]; 
		}
		average = subtot / YEARS;

		printf("%4.1f", average);
	}

	system("pause");
	return 0;
}

