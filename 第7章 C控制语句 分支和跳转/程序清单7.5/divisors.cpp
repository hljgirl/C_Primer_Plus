// 程序清单7.5.cpp : 定义控制台应用程序的入口点。
//使用嵌套if显示一个数的约数

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{

	unsigned long num;
	unsigned long div;
	bool isPrime;

	printf("Please enter an integer for analysis;");
	printf("Enter q to quit.\n");

	while (scanf("%lu", &num) == 1)
	{
		isPrime = true;
		for (div = 2; div * div <= num; div++)
		{
			if (num % div == 0)
			{
				if ((div * div) != num)
				{
					printf("%lu is divisible by %lu and %lu.\n", num, div, num/div);
				}else{
				
					printf("%lu is divisible by %lu.\n", num, div);
				}
				isPrime = false;
			}
		}

		if(isPrime)
		{
			printf("%lu is Prime.\n", num);
		}

		printf("Please enter another integer for analysis;");
		printf("Enter q to quit.\n");
	}

	system("pause");
	return 0;
}

