// �����嵥6.17.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��Ƕ��ѭ��

#include "stdafx.h"

#define ROWS  6
#define CHARS 10

int _tmain(int argc, _TCHAR* argv[])
{
	int row;
	char ch;

	for (row = 0; row < ROWS; row++)
	{
		for (ch = 'A'; ch < ('A' + CHARS); ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}

