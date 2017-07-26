// 程序清单4.13.cpp : 定义控制台应用程序的入口点。
//发现printf()函数的返回值

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int bph2o = 212;
	int rv;

	rv = printf("%d F is water's boiling poing.\n", bph2o);
	printf("The Printf() function printed %d characters.\n", rv);

	system("pause");
	return 0;
}

