// �����嵥16.4.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��##�����

#include "stdafx.h"

#define XNAME(n) x##n
#define PRINT_XN(n) printf("x" #n " = %d.\n", x##n);

int _tmain(int argc, _TCHAR* argv[])
{

	int XNAME(1) = 14;
	int XNAME(2) = 20;

	PRINT_XN(1);
	PRINT_XN(2);

	getchar();
	return 0;
}

