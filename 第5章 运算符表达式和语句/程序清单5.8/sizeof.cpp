// �����嵥5.8.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��sizeof�����

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int n = 0;
	size_t intsize;

	intsize = sizeof(int);

	printf("n = %d, n has %lu bytes; all ints have %lu bytes.\n", n, sizeof n, intsize);

	system("pause");
	return 0;
}

