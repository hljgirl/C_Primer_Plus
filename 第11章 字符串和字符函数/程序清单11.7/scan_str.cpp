// �����嵥11.7.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��scanf()

#include "stdafx.h"
#include <Windows.h>


int _tmain(int argc, _TCHAR* argv[])
{
	char name1[11], name2[11];
	int count;


	printf("Please enter 2 names.\n");
	count = scanf("%5s %10s", name1, name2);


	printf("I read the %d names %s and %s", count, name1, name2);

	system("pause");
	return 0;
}

