// �����嵥12.1.cpp : �������̨Ӧ�ó������ڵ㡣
//������ڵı���

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 30;
	printf("x in outer block: %d\n", x);
	
	{
		int x = 77;
		printf("x in inner block: %d\n", x);
	}

	printf("x in outer block: %d\n", x);

	while (x++ < 33)
	{
		int x = 100;
		x++;
		printf("x in while loop: %d\n", x);
	}

	printf("x in outer block: %d\n", x);

	system("pause");
	return 0;
}

