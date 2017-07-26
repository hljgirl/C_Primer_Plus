// 程序清单9.8.cpp : 定义控制台应用程序的入口点。
//以二进制形式输出整数

#include "stdafx.h"
#include <Windows.h>

void to_binary(unsigned long n);

int _tmain(int argc, _TCHAR* argv[])
{
	unsigned long number;

	printf("Enter an integer(q to quit).\n");

	while (scanf("%ul", &number) == 1)
	{
		printf("Binary equivalent: ");
		to_binary(number);
		putchar('\n');
		printf("Enter an integer (q to quit). \n");
	}

	printf("Done!\n");

	system("pause");
	return 0;
}

void to_binary(unsigned long n)
{
	int temp;

	temp = n % 2;

	if (n >= 2)
		to_binary(n / 2);
	
	printf("%d", temp);
	//putchar('0' + temp);

	return;

}