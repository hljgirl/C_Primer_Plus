// 程序清单5.13.cpp : 定义控制台应用程序的入口点。
//4种类型的语句

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int count, sum;

	count = 0;
	sum = 0;

	while (count++ < 10)
	{
		sum  = sum + count;
		printf("count = %d  sum = %d \n", count, sum);

	}


	system("pause");
	return 0;
}

