// �����嵥7.3.cpp : �������̨Ӧ�ó������ڵ㡣
//�ı����룬ֻ��������ĸ�ַ�

#include "stdafx.h"
#include <Windows.h>

#include <ctype.h>

int _tmain(int argc, _TCHAR* argv[])
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
		{
			putchar(ch + 1);
		}else{
			putchar(ch);
		}
	}

	putchar(ch);

	system("pause");
	return 0;
}

