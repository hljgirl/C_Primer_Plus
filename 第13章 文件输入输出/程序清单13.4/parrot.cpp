// �����嵥13.4.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��fgets()��fputs()����

#include "stdafx.h"
#include <Windows.h>

#define MAXLINE 20

int _tmain(int argc, _TCHAR* argv[])
{
	char line[MAXLINE];

	while (fgets(line, MAXLINE, stdin) != NULL && line[0] != '\n')
	{
		fputs(line, stdout);
	}
	

	system("pause");
	return 0;
}

