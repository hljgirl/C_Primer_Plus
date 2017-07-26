// 程序清单11.28.cpp : 定义控制台应用程序的入口点。
//把命令行参数转换为数字

#include "stdafx.h"
#include <stdlib.h>

int _tmain(int argc, char* argv[])
{
	int times;

	if (argc < 2 || (times = atoi(argv[1])) < 1)
	{
		printf("Usage: %s positive - number \n", argv[0]);
	}else{
		for (int i = 0; i < times; i++)
		{
			puts("Hello, good looking!");
		}

	}




	return 0;
}

