// �����嵥10.2.cpp : �������̨Ӧ�ó������ڵ㡣
//δ����ʼ��������

#include "stdafx.h"

#define SIZE 4

int _tmain(int argc, _TCHAR* argv[])
{
	int no_data[SIZE];

	printf("%2s %14s\n","i", "no_data[i]");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%2d %14d\n", i, no_data[i]);
	}

	getchar();
	return 0;
}

