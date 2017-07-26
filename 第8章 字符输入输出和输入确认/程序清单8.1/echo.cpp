// 程序清单8.1.cpp : 定义控制台应用程序的入口点。
//重复输入

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	char ch;

	while ((ch = getchar()) != '#')
	{
		putchar(ch);
	}

	putchar('\n');
	system("pause");
	return 0;
}

