// �����嵥10.4.cpp : �������̨Ӧ�ó������ڵ㡣
//�ñ���������Ԫ�ظ���

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};

	for (int i = 0; i < sizeof(days) / sizeof(int); i++)
	{
		printf("Month %d has %2d days.\n", i+1, days[i]);
	}

	getchar();
	return 0;
}

