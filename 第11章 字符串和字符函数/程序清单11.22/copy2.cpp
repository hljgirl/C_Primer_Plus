// �����嵥11.22.cpp : �������̨Ӧ�ó������ڵ㡣
////strcpy()ʾ������

#include "stdafx.h"
#include <Windows.h>

#define WORDS	"beast"
#define SIZE	40

int _tmain(int argc, _TCHAR* argv[])
{
	char * orig = WORDS;
	char copy[SIZE] = "Be the best that you can be.";
	char * ps;

	puts(orig);
	puts(copy);

	ps = strcpy(copy + 7, orig);

	puts(copy);
	puts(ps);

	system("pause");
	return 0;
}

