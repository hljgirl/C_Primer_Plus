// �����嵥9.5.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ�ú���ԭ��

#include "stdafx.h"
#include <Windows.h>

int imax(int, int);

int _tmain(int argc, _TCHAR* argv[])
{
	printf("The maximum of %d and %d is %d .\n", 3, 5, imax(3 , 5));
	printf("The maximum of %d and %d is %d .\n", 3, 5, imax(3.0, 5.0));

	system("pause");
	return 0;
}


int imax(int n, int m)
{
	return m > n ? m : n;
}