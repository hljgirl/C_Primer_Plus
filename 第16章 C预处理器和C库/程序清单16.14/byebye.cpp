// 程序清单16.14.cpp : 定义控制台应用程序的入口点。
//atexit()示例程序

#include "stdafx.h"
#include <Windows.h>

void sign_off(void);
void too_bad(void);

int _tmain(int argc, _TCHAR* argv[])
{
	int n;

	atexit(sign_off);

	puts("Enter an integer: ");

	if (scanf("%d", &n) != 1)
	{
		puts("That's no integer!");
		atexit(too_bad);
		exit(1);
	}

	printf("%d is %s.\n", n, (n % 2 == 0) ? "even" : "odd");

	system("pause");
	return 0;
}

void sign_off(void)
{
	puts("Thus terminates another magnificent program from");
	puts("SeeSaw Software");
	system("pause");
}

void too_bad(void)
{
	puts("SeeSaw Software extends its heartfelt condolences");
	puts("to you upon the failure of your program.");
	system("pause");
}