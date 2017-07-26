// 程序清单13.4.cpp : 定义控制台应用程序的入口点。
//使用fgets()和fputs()函数

#include "stdafx.h"
#include <Windows.h>

#define MAXLINE 20

int _tmain(int argc, _TCHAR* argv[])
{
	char line[MAXLINE];

	while (fgets(line, MAXLINE, stdin) != NULL && line[0] != '\n')
	{
		fputs(line, stdout);
	}
	

	system("pause");
	return 0;
}

