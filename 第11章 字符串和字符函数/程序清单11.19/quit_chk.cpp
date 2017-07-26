// 程序清单11.19.cpp : 定义控制台应用程序的入口点。
//某程序的开始

#include "stdafx.h"
#include <Windows.h>

#define SIZE	81
#define LIM		100
#define STOP	"quit"

int _tmain(int argc, _TCHAR* argv[])
{
	char input[LIM][SIZE];
	int ct = 0;

	printf("Enter up to %d lines(type quit to quit):\n", LIM);

	while (ct < LIM && gets(input[ct]) != NULL && strcmp(input[ct], STOP) != 0)
	{
		ct++;
	}

	printf("%d strings entered", ct);

	system("pause");
	return 0;
}

