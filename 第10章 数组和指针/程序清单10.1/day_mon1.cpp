// �����嵥10.1.cpp : �������̨Ӧ�ó������ڵ㡣
//��ӡÿ�µ�����

#include "stdafx.h"

#define MONTHS 12

int _tmain(int argc, _TCHAR* argv[])
{
	int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (int i = 0; i < MONTHS; i++)
	{
		printf("Month %d has %2d days.\n", i+1, days[i]);
	}

	getchar();
	return 0;
}

