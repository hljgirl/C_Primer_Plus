// 程序清单10.17.cpp : 定义控制台应用程序的入口点。
//处理二位数组的函数

#include "stdafx.h"
#include <Windows.h>

#define ROWS 3
#define COLS 4

void sum_rows(int arr[][COLS], int rows);
void sum_cols(int [][COLS], int);
int sum2d(int (*)[COLS], int);

int _tmain(int argc, _TCHAR* argv[])
{	
	int junk[ROWS][COLS] = {{2, 4, 6, 8}, 
							{3, 5, 7, 9}, 
							{12, 10, 8, 6}};

	sum_rows(junk, ROWS);
	sum_cols(junk, ROWS);

	printf("Sum of all element = %d\n", sum2d(junk, ROWS));
	
	system("pause");
	return 0;
}

void sum_rows(int arr[][COLS], int rows)
{
	int total;

	for (int i = 0; i < rows; i++)
	{
		total = 0;
		for (int j = 0; j < COLS; j++)
		{
			total += arr[i][j];
		}

		printf("row %d; sum = %d \n", i, total);
	}

	printf("\n");

}


void sum_cols(int arr[][COLS], int rows)
{
	int total;

	for (int i = 0; i < COLS; i++)
	{
		total = 0;
		for (int j = 0; j < rows; j++)
		{
			total += arr[j][i];
		}
		printf("col %d; sum = %d \n", i, total);
	}

	printf("\n");
	
}

int sum2d(int (*arr)[COLS], int rows)
{
	int total = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			total += arr[i][j];
		}
	}

	return total;
}