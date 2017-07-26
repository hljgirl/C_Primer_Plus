// 程序清单6.13.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	const int FIRST_OZ = 37;
	const int NEXT_OZ = 23;

	int ounces, cost;	

	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
	{		
		printf("%5d %4.2f\n",ounces, cost/100.0);
	}

	getchar();
	return 0;
}

