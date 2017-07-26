// 程序清单4.11.cpp : 定义控制台应用程序的入口点。
//一些不匹配的整数转换

#include "stdafx.h"

#define PAGES 336
#define WORDS 65618

int _tmain(int argc, _TCHAR* argv[])
{

	short num = PAGES;
	short mnum = -PAGES;

	printf("num as short and unsigned short: %hd %hu\n", num, num);
	printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
	printf("num as int and char: %d %c\n", num, num);
	printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);

	system("pause");
	return 0;
}

