// �����嵥11.17.cpp : �������̨Ӧ�ó������ڵ㡣
//��������������Ҫ��

#include "stdafx.h"
#include <Windows.h>

#define ANSWER	"Grant"
#define MAX		40
int _tmain(int argc, _TCHAR* argv[])
{
	char try1[MAX];

	puts("Who is buried in Grant's tomb?");
	gets(try1);

	while (strcmp(ANSWER, try1) != 0)
	{
		puts("No, that's wrong. Try again.");
		gets(try1);
	}

	puts("That's right!");

	system("pause");
	return 0;
}
