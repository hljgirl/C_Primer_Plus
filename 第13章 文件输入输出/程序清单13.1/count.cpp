// �����嵥13.1.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ�ñ�׼I/O

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	char *filename = "ReadMe.txt";
	int ch;

	FILE *pf;

	long count = 0;

	/*if (argc != 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(1);
	}*/

	pf = fopen(filename, "r");

	if (pf == NULL)
	{
		printf("Can't open %s\n", filename);
		exit(1);
	}

	while ((ch = getc(pf)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}

	fclose(pf);
	printf("File %s has %ld characters. \n", filename, count);

	system("pause");
	return 0;
}

