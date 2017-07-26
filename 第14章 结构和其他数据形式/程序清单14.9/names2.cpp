// 程序清单14.9.cpp : Defines the entry point for the console application.
//传递和返回结构

#include "stdafx.h"
#include <Windows.h>

typedef struct namect
{
	char fname[20];
	char lname[20];
	int letters;
}namect;

namect getinfo(void);
namect makeinfo(struct namect);
void showinfo(const struct namect);

int main()
{
	namect person;

	person = getinfo();
	person = makeinfo(person);
	showinfo(person);

	system("pause");
    return 0;
}

namect getinfo(void)
{
	namect temp;

	printf("Please enter your first name.\n");
	gets_s(temp.fname);
	printf("Please enter your last name.\n");
	gets_s(temp.lname);

	return temp;
}


namect makeinfo(struct namect st)
{
	st.letters = strlen(st.fname) + strlen(st.lname);
	return st;
}

void showinfo(const struct namect st)
{
	printf("%s %s,your name contains %d letters.\n", st.fname, st.lname, st.letters);
}