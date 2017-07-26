// 程序清单11.29.cpp : 定义控制台应用程序的入口点。
//尝试使用strtol()函数

#include "stdafx.h"
#include <stdlib.h>
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	char number[30];
	char *end;
	long value;

	puts("Enter a number (empty line to quit):");

	while (gets(number) && number[0] != '\0')
	{
		value = strtol(number, &end, 10);
		printf("value: %ld, stopped at %s(%d)\n", value, end, *end);

		value = strtol(number, &end, 16);
		printf("value: %ld, stopped at %s(%d)\n", value, end, *end);

		puts("NEXT number:");
	}

	puts("Bye!");
	system("pause");
	return 0;
}

