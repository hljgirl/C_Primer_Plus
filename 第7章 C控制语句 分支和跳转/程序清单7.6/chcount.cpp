// �����嵥7.6.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ���߼��������

#include "stdafx.h"
#include <Windows.h>

#define PERIOD '.'

int _tmain(int argc, _TCHAR* argv[])
{
	int ch;
	int charcount = 0;

	while ((ch = getchar()) != PERIOD)
	{
		if (ch != '"' && ch != '\'')
		{
			charcount++;
		}
	}

	printf("There are %d non-quote characters.\n", charcount);

	system("pause");
	return 0;
}

