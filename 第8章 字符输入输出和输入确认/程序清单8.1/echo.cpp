// �����嵥8.1.cpp : �������̨Ӧ�ó������ڵ㡣
//�ظ�����

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	char ch;

	while ((ch = getchar()) != '#')
	{
		putchar(ch);
	}

	putchar('\n');
	system("pause");
	return 0;
}

