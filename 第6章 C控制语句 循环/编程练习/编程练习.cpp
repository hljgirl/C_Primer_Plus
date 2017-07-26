// 编程练习.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{



	//1
	const int n = 26;
	char ch = 'a';
	char arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = ch + i;
		printf("%2c", arr[i]);
	}


	//2
	const int row = 5;
	char ch2 = '$';

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("%c", ch2);
		}
		printf("\n");
	}


	//3
	const int row1 = 6;
	char ch3 = 'F';

	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("%c", ch3 - j);
		}
		
		printf("\n");

	}




	system("pause");
	return 0;
}

