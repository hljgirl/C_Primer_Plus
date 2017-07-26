// 程序清单8.3.cpp : 定义控制台应用程序的入口点。
//打开一个文件并显示其内容

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{

	int ch;
	FILE * fp;
	char filename[50];

	printf("Enter the name of the file.\n");
	scanf("%s", filename);

	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		printf("Faild to open file. Bye!\n");
		system("pause");
		exit(1);
	}

	while ((ch = getc(fp)) != EOF)
	{
		putchar(ch);
	}

	putchar('\n');

	fclose(fp);

	system("pause");
	return 0;
}

