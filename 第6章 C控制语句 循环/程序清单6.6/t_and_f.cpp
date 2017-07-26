// 程序清单6.6.cpp : 定义控制台应用程序的入口点。
//C中的真和假

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int true_val, false_val;

	true_val = (10 > 2);
	false_val = (10 == 2);

	printf("true = %d; false = %d \n", true_val, false_val);

	system("pause");
	return 0;
}

