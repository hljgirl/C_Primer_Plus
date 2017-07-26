// 程序清单6.10.cpp : 定义控制台应用程序的入口点。
//一个计数循环

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	const int NUMBER = 22;
	int count = 1;

	while (count <= NUMBER)
	{
		printf("Be my Valentine!\n");
		count++;
	}

	system("pause");
	return 0;
}

