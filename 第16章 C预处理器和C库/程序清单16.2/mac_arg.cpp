// �����嵥16.2.cpp : �������̨Ӧ�ó������ڵ㡣
//���в����ĺ�

#include "stdafx.h"
#include <Windows.h>

#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\n", X)

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 4;
	int z;

	printf("x = %d.\n", x);

	z = SQUARE(x);
	printf("Evaluating SQUARE(x): ");
	PR(z);

	z = SQUARE(2);
	printf("Evaluating SQUARE(2): ");
	PR(z);

	printf("Evaluating SQUARE(x+2): ");
	PR(SQUARE(x+2));

	printf("Evaluating 100/SQUARE(2): ");
	PR(100/SQUARE(2));


	printf("Evaluating SQUARE(++x): ");
	PR(SQUARE(++x));

	printf("After incrementing, x is %x.\n", x);

	system("pause");
	return 0;
}

