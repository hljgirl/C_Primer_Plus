// �����嵥7.2.cpp : �������̨Ӧ�ó������ڵ㡣
//�ı����룬ֻ�������еĿո�

#include "stdafx.h"
#include <Windows.h>

#define SPACE ' '

int _tmain(int argc, _TCHAR* argv[])
{
	char ch;
	ch = getchar();

	while (ch != '\n')
	{
		if (ch == SPACE)
		{
			putchar(ch);
		}else{

			putchar(ch + 1);
		}

		ch = getchar();
	}

	putchar(ch);

	system("pause");
	return 0;
}

