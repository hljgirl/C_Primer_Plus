// 程序清单7.12.cpp : 定义控制台应用程序的入口点。
//使用多重标签

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{

	char ch;

	int a_ct, e_ct, i_ct, o_ct, u_ct;

	a_ct = e_ct = i_ct = o_ct = u_ct = 0;

	printf("Enter some text; enter # to quit.\n");

	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case 'A':
		case 'a':
			a_ct++;
			break;
		case 'E':
		case 'e':
			e_ct++;
			break;
		case 'I':
		case 'i':
			i_ct++;
			break;
		case 'O':
		case 'o':
			o_ct++;
			break;
		case 'U':
		case 'u':
			u_ct++;
			break;
		default:
			break;
		}
	}

	printf("number of vowels: A    E    I    O    U\n");
	printf("               %4d %4d %4d %4d %4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);

	system("pause");
	return 0;
}

