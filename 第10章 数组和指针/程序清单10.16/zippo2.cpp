// 程序清单10.16.cpp : 定义控制台应用程序的入口点。
//通过一个指针变量获取有关Zippo的信息

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};

	int (*pz)[2];

	pz = zippo;

	printf("pz = %p, pz + 1 = %p\n", pz, pz + 1);
	printf("zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1);

	printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1);

	printf(" *pz = %p, *pz + 1 = %p\n", *pz, *pz + 1);

	printf("pz[0][0] = %d\n", pz[0][0]);
	printf("*pz[0] = %d\n", *pz[0]);
	printf("**pz = %d\n", **pz);

	printf("pz[2][1] = %d\n", pz[2][1]);
	printf("*(*(pz + 2) + 1) = %d\n", *(*(pz + 2) + 1));

	system("pause");
	return 0;
}

