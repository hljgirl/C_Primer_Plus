// 程序清单14.8.cpp : Defines the entry point for the console application.
//使用指向结构的指针

#include "stdafx.h"
#include <Windows.h>

typedef struct namect
{
	char fname[20];
	char lname[20];
	int letters;
}namect;

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);

int main()
{
	namect person;

	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);

	system("pause");
    return 0;
}

void getinfo(struct namect * pst)
{
	printf("Please enter your first name.\n");
	gets_s(pst->fname);
	printf("Please enter your last name.\n");
	gets_s(pst->lname);

}

void makeinfo(struct namect * pst)
{
	pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
	printf("%s %s,your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}