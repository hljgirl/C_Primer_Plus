// 程序清单14.2.cpp : 定义控制台应用程序的入口点。
//包含多本书的图书目录

#include "stdafx.h"
#include <Windows.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS  100

struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int _tmain(int argc, _TCHAR* argv[])
{
	struct book library[MAXBKS];

	int count = 0;

	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");

	while (count < MAXBKS && gets(library[count].title) != NULL && library[count].title[0] != '\0')
	{
		printf("Now enter the anthor.\n");
		gets(library[count].author);

		printf("Now enter the value.\n");
		scanf("%f", &library[count++].value);

		while (getchar() != '\n')
			continue;

		if (count < MAXBKS)
			printf("Enter the next title;\n");
	}

	if (count > 0)
	{
		printf("Here is the list of your books;\n");
		for (int i = 0; i < count; i++)
		{
			printf("%s by %s: $%.2f\n", library[i].title, library[i].author, library[i].value);
		}
	}else{

		printf("No books? Too bad.\n");
	}


	system("pause");
	return 0;
}

