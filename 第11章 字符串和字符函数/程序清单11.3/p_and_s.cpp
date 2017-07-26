// 程序清单11.3.cpp : 定义控制台应用程序的入口点。
//指针和字符串

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	char *mesg = "Don't be a fool!";
	char *copy;

	copy = mesg;

	printf("%s\n", copy);
	printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
	printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);

	system("pause");
	return 0;
}

