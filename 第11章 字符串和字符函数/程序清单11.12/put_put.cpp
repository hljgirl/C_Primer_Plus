// 程序清单11.12.cpp : 定义控制台应用程序的入口点。
//用户自定义的输出函数

#include "stdafx.h"
#include <Windows.h>

void put1(const char*);   //不添加换行符打印一个字符串
int put2(const char*);    //打印一个字符串，并统计其中的字符个数

int _tmain(int argc, _TCHAR* argv[])
{
	put1("If I'd as much money");
	put1(" as I could spend, \n");

	printf("I count %d characters.\n", put2("I never would cry old chairs to mend."));

	system("pause");
	return 0;
}

void put1(const char* string)
{
	while (*string != '\0')
	{
		putchar(*string++);
	}

}

int put2(const char* string)
{
	int count = 0;

	while (*string)
	{
		putchar(*string++);
		count++;
	}
	
	putchar('\n');

	return count;
}