// 程序清单5.5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#define SQUARES 64
#define CROP 1E15

int _tmain(int argc, _TCHAR* argv[])
{

	double current, total;
	int count = 1;

	printf("square   grains       total        ");
	printf("fraction of \n");
	printf("         added        grain        ");
	printf("US total\n");

	total = current = 1.0;
	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);


	while (count < SQUARES)
	{
		count += 1;
		current *= 2.0;
		total += current;

		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);

	}

	printf("That's all.\n");

	system("pause");
	return 0;
}

