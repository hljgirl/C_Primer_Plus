// 程序清单6.18.cpp : 定义控制台应用程序的入口点。
//使内部循环依赖于外部循环的嵌套循环

#include "stdafx.h"

//#define ROWS  6
//#define CHARS 10

int _tmain(int argc, _TCHAR* argv[])
{
	const int ROWS = 6;
	const int CHARS = 6;

	int row;
	char ch;

	for (row = 0; row < ROWS; row++)
	{
		for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}

