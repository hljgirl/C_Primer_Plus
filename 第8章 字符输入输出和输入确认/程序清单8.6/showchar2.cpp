// �����嵥8.6.cpp : �������̨Ӧ�ó������ڵ㡣
//���к��д�ӡ�ַ�

#include "stdafx.h"
#include <Windows.h>

void display(char ch, int lines, int width);

int _tmain(int argc, _TCHAR* argv[])
{
	int ch;
	int rows, cols;

	printf("Enter a character and two integers:\n");

	while ((ch = getchar()) != '\n')
	{
		if(scanf("%d %d", &rows, &cols) != 2)
			break;

		display(ch, rows, cols);

		while (getchar() != '\n')
			continue;
		

		printf("Enter another character and two integers:\n");
		printf("Enter a newline to quit.\n");
	}

	printf("Bye.\n");
	
	system("pause");
	return 0;
}


void display(char ch, int lines, int width)
{

	int row, col;

	for (row = 1; row <= lines; row++)
	{
		for (col = 1; col <= width; col++)
		{
			putchar(ch);
		}

		putchar('\n');
	}
}