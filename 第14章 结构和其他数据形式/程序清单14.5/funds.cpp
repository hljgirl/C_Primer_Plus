// 程序清单14.5.cpp : 定义控制台应用程序的入口点。
//把结构成员作为参数传递

#include "stdafx.h"
#include <Windows.h>

#define FUNDLEN 50

struct funds
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(double, double);

int _tmain(int argc, _TCHAR* argv[])
{
	struct funds stan = {"Garlic-Melon Bank", 3024.72, "Lucky's Savings and Loan", 9237.11};

	printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));


	system("pause");
	return 0;
}

double sum(double a, double b)
{
	return a + b;
}

