// �����嵥10.8.cpp : �������̨Ӧ�ó������ڵ㡣
//ָ��ӷ�

#include "stdafx.h"

#define SIZE 4

int _tmain(int argc, _TCHAR* argv[])
{
	short dates[SIZE];
	short *pti;
	short index;

	double bills[SIZE];
	double *ptf;

	pti = dates;
	ptf = bills;

	printf("sizeof(double) %d\n", sizeof(double));
	printf("sizeof(short)  %d\n", sizeof(short));

	printf("%23s %10s\n", "short", "double");

	for (index = 0; index < SIZE; index++)
	{
		printf("pointers + %d: %10p %10p\n", index, pti+index, ptf+index);
	}

	system("pause");
	return 0;
}

