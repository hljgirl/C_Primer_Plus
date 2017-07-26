// 程序清单4.9.cpp : 定义控制台应用程序的入口点。
//一些格式标志的使用示例

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("%x %X %#x \n", 31, 31, 31);
	printf("**%d**% d**% d**\n", 42, 42, -42);
	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);

	system("pause");
	return 0;
}

