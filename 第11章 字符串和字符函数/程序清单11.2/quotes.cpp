// 程序清单11.2.cpp : 定义控制台应用程序的入口点。
//把字符串看做指针

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	printf("%s, %p, %c\n", "We", "are", *"space farers");


	system("pause");
	return 0;
}

