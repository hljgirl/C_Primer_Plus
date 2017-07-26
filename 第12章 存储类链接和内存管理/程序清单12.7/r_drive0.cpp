// 程序清单12.7.cpp : 定义控制台应用程序的入口点。
//测试rand0（）函数

#include "stdafx.h"
#include <Windows.h>

int rand0(void);

int _tmain(int argc, _TCHAR* argv[])
{
	for (int count = 0; count < 5; count++)
	{
		printf("%hd\n", rand0());
	}

	system("pause");
	return 0;
}

