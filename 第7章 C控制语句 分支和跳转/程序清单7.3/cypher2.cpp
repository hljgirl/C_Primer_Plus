// 程序清单7.3.cpp : 定义控制台应用程序的入口点。
//改变输入，只保留非字母字符

#include "stdafx.h"
#include <Windows.h>

#include <ctype.h>

int _tmain(int argc, _TCHAR* argv[])
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
		{
			putchar(ch + 1);
		}else{
			putchar(ch);
		}
	}

	putchar(ch);

	system("pause");
	return 0;
}

