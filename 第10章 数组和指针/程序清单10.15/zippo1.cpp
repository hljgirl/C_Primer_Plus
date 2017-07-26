// 程序清单10.15.cpp : 定义控制台应用程序的入口点。
//有关2维数组Zippo的信息

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};

	//compare zippo & zippo[0]
	printf("zippo = %p, zippo + 1 = %p, zippo + 2 = %p,  zippo + 3 = %p\n", zippo, zippo + 1, zippo + 2, zippo + 3);
	printf("zippo[0] = %p, zippo[1] = %p, zippo[2] = %p,  zippo[3] = %p\n", zippo[0], zippo[1], zippo[2], zippo[3]);

	//compare zippo + 1 & zippo[0] + 1
	printf("zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1);
	printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);

	printf("*zippo = %p, *zippo + 1 = %p\n", *zippo, *zippo + 1);

	printf("zippo[0][0] = %d\n", zippo[0][0]);
	printf("*zippo[0] = %d\n", *zippo[0]);

	printf("**zippo = %d\n", **zippo);

	printf("zippo[2][1] = %d\n", zippo[2][1]);

	printf("*(*(zippo + 2) + 1) = %d\n", *(*(zippo + 2) + 1));
	printf("*(  zippo[2]   + 1) = %d\n", *(  zippo[2]   + 1));

	system("pause");
	return 0;
}

