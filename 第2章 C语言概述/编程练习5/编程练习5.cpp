// 编程练习5.cpp : 定义控制台应用程序的入口点。
//
//smile!smile!smile!
//smile!smile!
//smile!
//

#include "stdafx.h"

void smile(void);

int _tmain(int argc, _TCHAR* argv[])
{
	

	for (int i = 3; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			smile();			
		}
		printf("\n");
	}

	getchar();
	return 0;
}

void smile(void)
{
	printf("smile!");
}
