// �����嵥11.19.cpp : �������̨Ӧ�ó������ڵ㡣
//ĳ����Ŀ�ʼ

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

