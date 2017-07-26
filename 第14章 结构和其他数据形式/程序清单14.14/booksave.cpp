// 程序清单14.14.cpp : Defines the entry point for the console application.
//把结构内容保存到文件中

#include "stdafx.h"
#include <Windows.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS  10

typedef struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};
int main()
{
	struct book library[MAXBKS];
	int count = 0;
	int filecount;
	FILE *pbooks;
	int size = sizeof(struct book);

	if ((pbooks = fopen("book.txt", "a+b")) == NULL)
	{
		fputs("Can't open book.txt file", stderr);
		exit(0);
	}

	rewind(pbooks);

	while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
	{
		if (count == 0)
		{
			puts("Current contents of book.txt:");
		}

		printf("%s by %s : $%.2f\n", library[count].title, library[count].author, library[count].value);
		count++;
	}

	filecount = count;
	if (count == MAXBKS)
	{
		fputs("The book.txt is full", stderr);
		exit(1);
	}

	puts("Please add new book titles.");
	puts("Press [enter] at the start of a line to stop.");

	while (count < MAXBKS && gets_s(library[count].title) != NULL && library[count].title[0] != '\0')
	{
		puts("Now enter the anthor.");
		gets_s(library[count].author);

		puts("Now enter the value.");
		scanf("%f", &library[count++].value);

		while (getchar() != '\n')
		{
			continue;
		}

		if (count < MAXBKS)
		{
			puts("Enter the next title.");
		}
	}

	if (count > 0)
	{
		puts("Here is the list of your books:");
		for (int i = 0; i < count; i++)
		{
			printf("%s by %s : $%.2f\n", library[i].title, library[i].author, library[i].value);
		}
		fwrite(&library[filecount], size, count - filecount, pbooks);
	}
	else {
		puts("No books? Too bad.\n");
	}

	puts("Bye!\n");
	fclose(pbooks);

	system("pause");
    return 0;
}

