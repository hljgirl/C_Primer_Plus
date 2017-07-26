// 程序清单12.4.cpp : 定义控制台应用程序的入口点。
//使用外部变量

#include "stdafx.h"
#include <Windows.h>

int units = 0;

void critic(void);

int _tmain(int argc, _TCHAR* argv[])
{
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);

	while (units != 56)
		critic();

	printf("You must have looked it up!\n");

	system("pause");
	return 0;
}

void critic(void)
{
	printf("No luck, chummy. Try again.\n");
	scanf("%d", &units);
}