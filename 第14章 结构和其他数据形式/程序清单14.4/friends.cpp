// 程序清单14.4.cpp : 定义控制台应用程序的入口点。
//使用指向结构的指针

#include "stdafx.h"
#include <Windows.h>

#define LEN 20

struct names
{
	char first[LEN];
	char last[LEN];
};

struct guy
{
	struct names handle;
	char favfood[LEN];
	char job[LEN];
	float income;
};


int _tmain(int argc, _TCHAR* argv[])
{
	struct guy fellow[2] = {
		{{"Ewen", "Villard"}, "grilled salmon", "personality coach", 58112.00},
		{{"Rodney", "Swillbelly"}, "tripe", "tabloid editor", 232400.00}
	};

	struct guy * him;

	printf("address #1: %p  #2:%p\n", &fellow[0], &fellow[1]);

	him = &fellow[0];
	printf("pointer #1: %p  #2:%p\n", him, him + 1);

	printf("him->income is $%.2f; (*him).income is $%.2f\n", him->income, (*him).income);

	him++;
	printf("him->favfood is %s; him->handle.last is %s\n", him->favfood, him->handle.last);

	system("pause");
	return 0;
}

