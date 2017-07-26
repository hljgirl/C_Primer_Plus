// 程序清单16.12.cpp : 定义控制台应用程序的入口点。
//预定义标识符

#include "stdafx.h"
#include <Windows.h>

void why_me(void);

int _tmain(int argc, _TCHAR* argv[])
{
	printf("The file is %s.\n", __FILE__);
	printf("The function is %s.\n", __FUNCTION__);
	printf("The date is %s.\n", __DATE__);
	printf("The time is %s.\n", __TIME__);
	//printf("The version is %ld.\n", __STDC_VERSION__);
	printf("This is lien %d.\n", __LINE__);

	why_me();

	system("pause");
	return 0;
}

void why_me(void)
{
	printf("This function is %s\n", __FUNCTION__);
	printf("This is lien %d.\n", __LINE__);

}


