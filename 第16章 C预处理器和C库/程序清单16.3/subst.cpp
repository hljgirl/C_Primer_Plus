// �����嵥16.3.cpp : �������̨Ӧ�ó������ڵ㡣
//���ַ����н����滻

#include "stdafx.h"
#include <Windows.h>


#define PSQR(x) printf("The square of " #x " is %d.\n", ((x)*(x)));

int _tmain(int argc, _TCHAR* argv[])
{
	int y = 5;

	PSQR(y);
	PSQR(2 + 4);

	system("pause");
	return 0;
}

