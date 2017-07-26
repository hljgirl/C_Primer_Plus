// 程序清单16.6.cpp : 定义控制台应用程序的入口点。
//使用names_st结构

#include "stdafx.h"
#include "names_st.h"

int _tmain(int argc, _TCHAR* argv[])
{
	names candidate;

	get_names(&candidate);
	printf("Let's welcome ");

	show_names(&candidate);
	printf(" to this program!\n");


	system("pause");
	return 0;
}

