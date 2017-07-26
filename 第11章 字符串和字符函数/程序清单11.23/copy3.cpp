// 程序清单11.23.cpp : 定义控制台应用程序的入口点。
////strncpy()示例程序

#include "stdafx.h"
#include <Windows.h>

#define TARGSIZE	7
#define LIM			5
#define SIZE		40

int _tmain(int argc, _TCHAR* argv[])
{
	char qwords[LIM][TARGSIZE];
	char temp[SIZE];

	int i = 0;

	printf("Enter %d words beginning with q: \n", LIM);

	while (i < LIM && gets(temp))
	{
		if (temp[0] != 'q')
		{
			printf("%s doesn't begin with q!\n", temp);
		}else{
			strncpy(qwords[i], temp, TARGSIZE - 1);
			qwords[i][TARGSIZE - 1] = '\0';
			i++;
		}
	}

	puts("Here are the words accepted:");
	for (int j = 0;  j < LIM;  j++)
	{
		puts(qwords[j]);
	}

	system("pause");
	return 0;
}

