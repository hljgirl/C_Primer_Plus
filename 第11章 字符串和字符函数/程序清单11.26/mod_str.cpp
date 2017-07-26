// 程序清单11.26.cpp : 定义控制台应用程序的入口点。
//修改一个字符串

#include "stdafx.h"
#include <Windows.h>

#define LIMIT 80

void ToUpper(char *);
int PunctCount(const char *);

int _tmain(int argc, _TCHAR* argv[])
{
	char line[LIMIT];

	puts("Please enter a line:");

	gets(line);

	ToUpper(line);
	puts(line);
	
	printf("That line has %d punctuation characters.\n", PunctCount(line));

	system("pause");
	return 0;
}

void ToUpper(char * str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}


int PunctCount(const char * str)
{
	int ct = 0;

	while (*str)
	{
		if (ispunct(*str))
		{
			ct++;
		}
		str++;
	}

	return ct;
}