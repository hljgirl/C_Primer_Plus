// 程序清单8.5.cpp : 定义控制台应用程序的入口点。
//带有一个较大的I/O问题的程序

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
		scanf("%d %d", &rows, &cols);
		display(ch, rows, cols);

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

