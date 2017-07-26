// 程序清单4.10.cpp : 定义控制台应用程序的入口点。
//字符串的格式化

#include "stdafx.h"

#define BLURB "Authentic imitation!"

int _tmain(int argc, _TCHAR* argv[])
{

	printf("/%2s/\n", BLURB);
	printf("/%24s/\n", BLURB);
	printf("/%24.5s/\n", BLURB);
	printf("/%-24.5s/\n", BLURB);
	printf("");

	system("pause");
	return 0;
}

