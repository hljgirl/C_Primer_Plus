// �����嵥10.12.cpp : �������̨Ӧ�ó������ڵ㡣
//ָ����������ȼ�

#include "stdafx.h"
#include <Windows.h>

int data[2] = {100, 200};
int moredata[2] = {300, 400};

int _tmain(int argc, _TCHAR* argv[])
{
	int *p1, *p2, *p3;

	p1 = p2 = data;
	p3 = moredata;

	printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
	printf(" *p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
	printf(" *p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);

	system("pause");
	return 0;
}

