// �����嵥3.3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{

	int x = 100;

	printf("dec = %d; octal = %o; hex = %x \n", x, x, x);

	printf("dec = %d; octal = %#o; hex = %#x \n", x, x, x);


	system("pause");
	return 0;
}

