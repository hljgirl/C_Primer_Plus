// 程序清单8.2.cpp : 定义控制台应用程序的入口点。
//重复输入，直到文件的结尾

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int ch;


	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}


	putchar('\n');
	system("pause");

	return 0;
}

