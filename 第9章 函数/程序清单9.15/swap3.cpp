// �����嵥9.15.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��ָ����ɽ���

#include "stdafx.h"
#include <Windows.h>

void interchange(int *, int *);

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);

	interchange(&x, &y);

	printf("Now x = %d and y = %d.\n", x, y);

	system("pause");
	return 0;
}

void interchange(int *u, int *v)
{
	int temp;

	printf("%p\n",v);

	temp = *u;
	*u = *v;
	*v = temp;

}