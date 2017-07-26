// 程序清单14.6.cpp : 定义控制台应用程序的入口点。
//传递指向结构的指针

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
double sum(const struct funds *);

int _tmain(int argc, _TCHAR* argv[])
{
	struct funds stan = {"Garlic-Melon Bank", 3024.72, "Lucky's Savings and Loan", 9237.11};
	printf("Stan has a total of $%.2f.\n", sum(&stan));

	system("pause");
	return 0;
}

double sum(const struct funds * ps)
{
	return ps->bankfund + ps->savefund;

}