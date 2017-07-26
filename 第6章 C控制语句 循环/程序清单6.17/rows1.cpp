// 程序清单6.17.cpp : 定义控制台应用程序的入口点。
//使用嵌套循环

#include "stdafx.h"

#define ROWS  6
#define CHARS 10

int _tmain(int argc, _TCHAR* argv[])
{
	int row;
	char ch;

	for (row = 0; row < ROWS; row++)
	{
		for (ch = 'A'; ch < ('A' + CHARS); ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}

