// 程序清单11.15.cpp : 定义控制台应用程序的入口点。
//连接两个字符串，并检查第一个字符串的大小

#include "stdafx.h"
#include <Windows.h>

#define SIZE	30
#define BUGSIZE 13

int _tmain(int argc, _TCHAR* argv[])
{
	char flower[SIZE];
	char addon[] = "s smell like old shoes";
	char bug[BUGSIZE];
	int available;

	puts("What is your favorite flower?");
	gets(flower);

	if ((strlen(addon) + strlen(flower) + 1) <= SIZE)
	{
		strcat(flower, addon);
	}

	puts(flower);
	puts("What is your favorite bug?");
	gets(bug);

	available = BUGSIZE - strlen(bug) - 1;
	strncat(bug, addon, available);
	puts(bug);

	system("pause");
	return 0;
}

