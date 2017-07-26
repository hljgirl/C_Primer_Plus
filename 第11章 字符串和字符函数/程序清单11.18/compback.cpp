// 程序清单11.18.cpp : 定义控制台应用程序的入口点。
//strcmp（）的返回值

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	printf("strcmp(\"A\", \"A\") is ");
	printf("%d\n", strcmp("A", "A"));


	printf("strcmp(\"A\", \"B\") is ");
	printf("%d\n", strcmp("A", "B"));


	printf("strcmp(\"B\", \"A\") is ");
	printf("%d\n", strcmp("B", "A"));


	printf("strcmp(\"C\", \"A\") is ");
	printf("%d\n", strcmp("C", "A"));


	printf("strcmp(\"Z\", \"a\") is ");
	printf("%d\n", strcmp("Z", "a"));


	printf("strcmp(\"apples\", \"apple\") is ");
	printf("%d\n", strcmp("apples", "apple"));

	system("pause");
	return 0;
}

