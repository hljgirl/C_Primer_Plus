// 程序清单3.9.cpp : 定义控制台应用程序的入口点。
//不正确参数个数

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	
	int f = 4;
	int g = 5;
	float h = 5.0f;

	printf("%d \n", f, g); //参数太多
	printf("%d %d\n", f);  //参数太少
	printf("%d %f\n", h, g); //值的类型不正确



	system("pause");
	return 0;
}

