// �����嵥6.7.cpp : �������̨Ӧ�ó������ڵ㡣
//��Щֵ����

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int n = 3;

	while (n)
	{
		printf("%2d is true\n", n--);
	}
	
	printf("%2d is false\n", n);


	n = -3;
	while (n)
	{
		printf("%2d is true\n", n++);
	}
	
	printf("%2d is false\n", n);

	system("pause");
	return 0;
}

