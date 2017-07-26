// 程序清单5.2.cpp : 定义控制台应用程序的入口点。
//计算多个鞋尺码对应的英寸长度

#include "stdafx.h"


#define ADJUST 7.64
#define SCALE  0.325

int _tmain(int argc, _TCHAR* argv[])
{
	double shoe, foot;

	printf("Shoe size(men's) foot length\n");

	shoe = 3.0;

	while (shoe < 18.5)
	{
		foot = shoe * SCALE + ADJUST;
		printf("%10.1f %15.2f inches\n", shoe, foot);
		shoe += 1.0;
	}


	printf("If the shoe fits, wear it.\n");
	
	

	system("pause");
	return 0;
}
