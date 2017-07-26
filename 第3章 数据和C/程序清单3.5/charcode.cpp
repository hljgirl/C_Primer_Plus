// 程序清单3.5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>
#include <limits.h>

int _tmain(int argc, _TCHAR* argv[])
{
	char ch;

	while (true)
	{

		printf("Please enter a character.\n");
		scanf("%c", &ch);
		printf("The code for %c is %d .\n\n\n\n\n", ch, ch);
	}

	system("pause");
	return 0;




	char ch1;

	for (;;)
	{

		printf("Please enter a character.\n");
		scanf("%c", &ch1);
		printf("The code for %c is %d .\n\n\n\n\n", ch1, ch1);
	}
	

	system("pause");
	return 0;
}

