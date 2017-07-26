// 程序清单11.11.cpp : 定义控制台应用程序的入口点。
//打印一个字符串，并统计其中的字符个数

#include "stdafx.h"
#include <Windows.h>

int put2(const char*);
int _tmain(int argc, _TCHAR* argv[])
{
	
	const char * string = "1234567890";

	printf("count = %d", put2(string));

	system("pause");
	return 0;
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
