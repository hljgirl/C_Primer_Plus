// �����嵥9.1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void);

int _tmain(int argc, _TCHAR* argv[])
{
	starbar();
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);
	starbar();

	system("pause");
	return 0;
}

void starbar(void)
{
	int count;

	for (int i = 0; i < WIDTH; i++)
	{
		putchar('*');
	}

	putchar('\n');

}