// �����嵥16.9.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ����������

#include "stdafx.h"
#include <Windows.h>

#define JUST_CHECKING
#define LIMIT 4

int _tmain(int argc, _TCHAR* argv[])
{


	int total = 0;

	for (int i = 1; i <= LIMIT; i++)
	{
		total += 2 * i * i + 1; 
#ifdef JUST_CHECKING
		printf("i = %d, running total = %d\n", i, total);
#endif

	}

	printf("Grand total = %d\n", total);


	system("pause");
	return 0;
}

