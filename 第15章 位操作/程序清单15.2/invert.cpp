// 程序清单15.2.cpp : 定义控制台应用程序的入口点。
//使用位运算显示二进制

#include "stdafx.h"
#include <Windows.h>

char * itobs(int, char *);
void show_bstr(const char *);
int invert_end(int num, int bits);

int _tmain(int argc, _TCHAR* argv[])
{
	char bin_str[8 * sizeof(int) + 1];
	int number;

	puts("Enter integers and see them in binary.");
	puts("Non-numbic input terminates program.");

	while (scanf("%d", &number) == 1)
	{
		itobs(number, bin_str);
		printf("%d is\n", number);
		show_bstr(bin_str);
		putchar('\n');


		number = invert_end(number, 4);
		printf("Inverting the last 4 bits gives\n");
		show_bstr(itobs(number, bin_str));
		putchar('\n');
	}


	puts("Bye!");
	system("pause");
	return 0;
}

char * itobs(int n, char * ps)
{
	static int size = 8 * sizeof(int);

	for (int i = size - 1; i >= 0; i--)
	{
		ps[i] = (0x0001 & n) + '0';
		n >>= 1;
	}
	ps[size] = '\0';

	return ps;
}

void show_bstr(const char * str)
{

	int i = 0;
	while (str[i])
	{
		putchar(str[i]);

		i++;

		if (i % 4 == 0)
		{
			putchar(' ');
		}
	}
}

int invert_end(int num, int bits)
{
	int mask = 0;
	int bitval = 1;

	while (bits > 0)
	{
		mask |= bitval;
		bitval <<= 1;

		bits--;
	}

	return num ^ mask;

}