// 程序清单11.24.cpp : 定义控制台应用程序的入口点。
//格式化一个字符串

#include "stdafx.h"
#include <Windows.h>

#define MAX 20

int _tmain(int argc, _TCHAR* argv[])
{
	char first[MAX];
	char last[MAX];
	char formal[2 * MAX + 10];

	double prize;


	puts("Enter your first name:");
	gets(first);

	puts("Enter your last name:");
	gets(last);	

	puts("Enter your prize money:");
	scanf("%lf", &prize);

	sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);
	puts(formal);

	system("pause");
	return 0;
}

