// �����嵥7.8.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ�����������

#include "stdafx.h"
#include <Windows.h>

#define COVERAGE 200

int _tmain(int argc, _TCHAR* argv[])
{
	int sq_feet;
	int cans;

	printf("Enter number of square feet to be painted:\n");

	while (scanf("%d", &sq_feet) == 1)
	{
		cans = sq_feet / COVERAGE;
		cans += (sq_feet % COVERAGE == 0) ? 0 : 1;

		printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
		printf("Enter next value(q to quit):\n");
	}

	system("pause");
	return 0;
}

