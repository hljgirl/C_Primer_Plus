// �����嵥11.16.cpp : �������̨Ӧ�ó������ڵ㡣
//�������������Ҫ����

#include "stdafx.h"
#include <Windows.h>

#define ANSWER "Grant"

int _tmain(int argc, _TCHAR* argv[])
{
	char try1[40];

	puts("Who is buried in Grant's tomb?");
	gets(try1);

	while (try1 != ANSWER)
	{
		puts("No, that's wrong. Try again.");
		gets(try1);
	}

	puts("That's right!");

	system("pause");
	return 0;
}

