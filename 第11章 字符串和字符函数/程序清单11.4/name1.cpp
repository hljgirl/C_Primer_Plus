// �����嵥11.4.cpp : �������̨Ӧ�ó������ڵ㡣
//��ȡһ������

#include "stdafx.h"
#include <Windows.h>

#define MAX		81

int _tmain(int argc, _TCHAR* argv[])
{
	char name[MAX];

	printf("Hi, what's your name?\n");

	gets(name);

	printf("Nice name, %s.\n", name);

	system("pause");
	return 0;
}

