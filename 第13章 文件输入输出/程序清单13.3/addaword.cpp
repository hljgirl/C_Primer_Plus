// 程序清单13.3.cpp : 定义控制台应用程序的入口点。
//使用fprintf(),fcanf()和rewind()函数

#include "stdafx.h"
#include <Windows.h>

#define MAX 40

int _tmain(int argc, _TCHAR* argv[])
{
	FILE *pf;
	char words[MAX];

	if ((pf = fopen("words.txt", "a+")) == NULL)
	{
		fprintf(stdout, "Can't open \"words.txt\" file.\n");
		exit(1);
	}

	puts("Enter words to add to the file; press the enter");
	puts("key at the beginning of a line to terminate.");

	while (gets(words) != NULL && words[0] != '\0')
	{
		fprintf(pf, "%s", words);
	}

	puts("File contents: ");
	rewind(pf);


	//int ch;
	//while ((ch = getc(pf)) != EOF)
	//{
	//	putc(ch, stdout);
	//}

	while (fscanf(pf, "%s", words) == 1)
	{
		puts(words);
	}

	if (fclose(pf) != 0)
		fprintf(stderr, "Error closing file\n");

	system("pause");
	return 0;
}

