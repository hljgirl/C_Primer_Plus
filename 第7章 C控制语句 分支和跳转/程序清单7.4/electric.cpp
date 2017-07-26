// 程序清单7.4.cpp : 定义控制台应用程序的入口点。
//计算用电账目

#include "stdafx.h"
#include <Windows.h>

#define RATE1  0.12589
#define RATE2  0.17901
#define RATE3  0.20971
#define BREAK1 360.000
#define BREAK2 680.000

int _tmain(int argc, _TCHAR* argv[])
{
	double kwh;
	double bill;

	printf("Please enter the kwh used.\n");
	scanf("%lf", &kwh);

	if (kwh <= BREAK1)
	{
		bill = RATE1 * kwh;

	}else if (kwh <= BREAK2){		

		bill =  RATE1 * BREAK1 + RATE2 * (kwh - BREAK1);

	}else{

		bill =  RATE1 * BREAK1 + RATE2 * (BREAK2 - BREAK1) + RATE3 *  (kwh - BREAK2);
	}

	printf("The charge for %.2f kwh is $%1.2f.\n", kwh, bill);

	system("pause");
	return 0;
}

