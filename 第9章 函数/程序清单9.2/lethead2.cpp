// 程序清单9.2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

//void starbar(void);
void show_n_char(char ch, int n);

int _tmain(int argc, _TCHAR* argv[])
{
	int space;

	show_n_char('*', WIDTH);
	putchar('\n');
	show_n_char(SPACE, 12);
	printf("%s\n", NAME);
	space =(WIDTH - strlen(ADDRESS)) / 2;

	show_n_char(SPACE, space);
	printf("%s\n", ADDRESS);
	space =(WIDTH - strlen(PLACE)) / 2;

	show_n_char(SPACE, space);
	printf("%s\n", PLACE);
	show_n_char('*', WIDTH);

	putchar('\n');

	system("pause");
	return 0;
}

//void starbar(void)
//{
//	int count;
//
//	for (int i = 0; i < WIDTH; i++)
//	{
//		putchar('*');
//	}
//
//	putchar('\n');
//
//}

void show_n_char(char ch, int n)
{

	for (int i = 0; i < n; i++)
	{
		//printf("%c", ch);
		putchar(ch);
	}

}