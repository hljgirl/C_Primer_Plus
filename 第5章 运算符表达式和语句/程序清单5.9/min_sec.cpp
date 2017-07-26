// 程序清单5.9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#define SEC_PER_MIN 60

int _tmain(int argc, _TCHAR* argv[])
{
	int sec, min, left;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds(<=0 to quit):\n");

	scanf("%d", &sec);

	while (sec > 0)
	{

		min  = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;

		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf("%d", &sec);

	}

	printf("Done!\n");

	system("pause");
	return 0;
}

