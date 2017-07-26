// �����嵥15.1.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��λ������ʾ������

#include "stdafx.h"
#include <Windows.h>

char * itobs(int, char *);
void show_bstr(const char *);

int _tmain(int argc, _TCHAR* argv[])
{
	char bin_str[8 * sizeof(int) + 1];
	int number;

	puts("Enter integers and see them in binary.");
	puts("Non-numbic input terminates program.");

	while (scanf("%d", &number) == 1)
	{
		itobs(number, bin_str);
		printf("%-10d is ", number);
		show_bstr(bin_str);
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