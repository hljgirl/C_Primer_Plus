// 程序清单7.2.cpp : 定义控制台应用程序的入口点。
//改变输入，只保留其中的空格

#include "stdafx.h"
#include <Windows.h>

#define SPACE ' '

int _tmain(int argc, _TCHAR* argv[])
{
	char ch;
	ch = getchar();

	while (ch != '\n')
	{
		if (ch == SPACE)
		{
			putchar(ch);
		}else{

			putchar(ch + 1);
		}

		ch = getchar();
	}

	putchar(ch);

	system("pause");
	return 0;
}

