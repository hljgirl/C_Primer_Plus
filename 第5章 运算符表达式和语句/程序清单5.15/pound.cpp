// �����嵥5.15.cpp : �������̨Ӧ�ó������ڵ㡣
//�������һ�������ĺ���
//formal argument  formal parameter formal argument formal parameter
//actual argument  actual parameter

#include "stdafx.h"

void pound(int);

int _tmain(int argc, _TCHAR* argv[])
{
	int times = 5;
	char ch = '!';
	float f = 6.0f;
	pound(times);
	pound(ch);
	pound((int)f);

	system("pause");
	return 0;
}


void pound(int n)
{
	while (n-- > 0)
	{
		printf("#");
	}
	printf("\n");
}