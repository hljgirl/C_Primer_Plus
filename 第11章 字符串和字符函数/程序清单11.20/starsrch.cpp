// 程序清单11.20.cpp : 定义控制台应用程序的入口点。
//使用strncmp函数

#include "stdafx.h"
#include <Windows.h>

#define LISTSIZE 5

int _tmain(int argc, _TCHAR* argv[])
{
	char * list[LISTSIZE] = {
		"astronomy",
		"astounding",
		"astrophysics",
		"ostracize",
		"asterism"};

	int count = 0;

	for (int i = 0; i < LISTSIZE; i++)
	{
		if (strncmp(list[i], "astro", 5) == 0)
		{
			printf("Found: %s\n", list[i]);
			count++;
		}
	}

	printf("The list contained %d words beginning with astro.\n", count);

	system("pause");
	return 0;
}

