// �����嵥5.13.cpp : �������̨Ӧ�ó������ڵ㡣
//4�����͵����

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int count, sum;

	count = 0;
	sum = 0;

	while (count++ < 10)
	{
		sum  = sum + count;
		printf("count = %d  sum = %d \n", count, sum);

	}


	system("pause");
	return 0;
}

