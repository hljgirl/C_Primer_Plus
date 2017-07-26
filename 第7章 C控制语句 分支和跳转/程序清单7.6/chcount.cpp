// 程序清单7.6.cpp : 定义控制台应用程序的入口点。
//使用逻辑与运算符

#include "stdafx.h"
#include <Windows.h>

#define PERIOD '.'

int _tmain(int argc, _TCHAR* argv[])
{
	int ch;
	int charcount = 0;

	while ((ch = getchar()) != PERIOD)
	{
		if (ch != '"' && ch != '\'')
		{
			charcount++;
		}
	}

	printf("There are %d non-quote characters.\n", charcount);

	system("pause");
	return 0;
}

