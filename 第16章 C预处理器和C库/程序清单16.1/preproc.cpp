// �����嵥16.1.cpp : �������̨Ӧ�ó������ڵ㡣
//�򵥵�Ԥ������������

#include "stdafx.h"
#include <Windows.h>

#define TWO		2
#define OW		"Consistency is the late refuge of the unimagina\
tive. - Oscar Wilde"
#define FOUR	TWO*TWO
#define PX		printf("X is %d.\n", x)
#define FMT		"X is %d.\n"

int _tmain(int argc, _TCHAR* argv[])
{
	int x = TWO;

	PX;

	x = FOUR;

	printf(FMT, x);

	printf("%s\n", OW);
	printf("TWO : OW\n");

	system("pause");
	return 0;
}

