// 程序清单14.10.cpp : Defines the entry point for the console application.
//使用指针和malloc()函数

#include "stdafx.h"
#include <Windows.h>

typedef struct namect
{
	char *fname;
	char *lname;
	int letters;
}namect;

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *);

int main()
{
	namect person;

	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);

	system("pause");
    return 0;
}

void getinfo(struct namect * pst)
{
	char temp[80];

	printf("Please enter your first name.\n");
	gets_s(temp);
	pst->fname = (char *)malloc(sizeof(temp) + 1);
	strcpy(pst->fname, temp);

	printf("Please enter your last name.\n");
	gets_s(temp);
	pst->lname = (char *)malloc(sizeof(temp) + 1);
	strcpy(pst->lname, temp);

}

void makeinfo(struct namect * pst)
{
	pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
	printf("%s %s,your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}


void cleanup(struct namect * pst)
{
	free(pst->fname);
	free(pst->lname);
}