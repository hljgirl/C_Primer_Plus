// �����嵥12.3.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��һ���ֲ���̬����

#include "stdafx.h"
#include <Windows.h>

void trystat(void);

int _tmain(int argc, _TCHAR* argv[])
{
	for (int count = 1; count <= 3; count++)
	{
		printf("Here comes iteration %d;\n", count);
		trystat();
	}

	system("pause");
	return 0;
}

void trystat(void)
{
	int fade = 1;
	static int stay = 1;

	printf("fade = %d and stay = %d\n", fade++, stay++);
}