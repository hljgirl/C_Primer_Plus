// 程序清单16.11.cpp : 定义控制台应用程序的入口点。
//两次包含同一头文件

#include "stdafx.h"
#include <Windows.h>

#include "names_st.h"
#include "names_st.h"

int _tmain(int argc, _TCHAR* argv[])
{
	names winner = {"Less", "Ismoor"};
	printf("The winner is %s %s.\n", winner.first, winner.last);

	system("pause");
	return 0;
}

