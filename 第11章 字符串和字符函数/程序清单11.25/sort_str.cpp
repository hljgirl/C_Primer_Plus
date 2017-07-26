// 程序清单11.25.cpp : 定义控制台应用程序的入口点。
//读进一些字符串并对他们排序

#include "stdafx.h"
#include <Windows.h>

#define SIZE	81
#define LIM		20
#define HALT	" "

void stsrt(char * strings[], int num);

int _tmain(int argc, _TCHAR* argv[])
{
	char input [LIM][SIZE];
	char * ptstr[LIM];

	int ct = 0;

	printf("Input up to %d lines, and I will sort them.\n", LIM);
	printf("To stop, press the Enter key at a line's start.\n");

	while (ct < LIM && gets(input[ct]) != NULL && input[ct][0] != '\0')
	{
		ptstr[ct] = input[ct];
		ct++;
	}

	stsrt(ptstr, ct);

	puts("\nHere's the sorted list:\n");

	for (int i = 0; i < ct; i++)
	{
		puts(ptstr[i]);
	}

	system("pause");
	return 0;
}


void stsrt(char * strings[], int num)
{
	char * temp;
	int top, seek;

	for (top = 0; top < num - 1; top++)
	{
		for (seek = top + 1; seek < num; seek++)
		{
			if (strcmp(strings[top], strings[seek]) > 0)
			{
				temp = strings[top];
				strings[top] = strings[seek];
				strings[seek] = temp;
			}
		}
	}


}
