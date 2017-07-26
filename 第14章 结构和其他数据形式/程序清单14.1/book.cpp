// 程序清单14.1.cpp : 定义控制台应用程序的入口点。
//仅包含一本书的图书目录

#include "stdafx.h"
#include <Windows.h>

#define MAXTITL 41
#define MAXAUTL 31

struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int _tmain(int argc, _TCHAR* argv[])
{
	struct book library;
	
	printf("Please enter the book tile.\n");
	gets(library.title);

	printf("Now enter the anthor.\n");
	gets(library.author);

	printf("Now enter the value.\n");
	scanf("%f", &library.value);

	printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
	printf("%s : \"%s\" ($%.2f)\n", library.author, library.title, library.value);

	printf("Done!\n");

	system("pause");
	return 0;
}

