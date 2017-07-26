// �����嵥12.5.cpp : �������̨Ӧ�ó������ڵ㡣
//���ִ洢��

#include "stdafx.h"
#include <Windows.h>

void report_count(void);
void accumulate(int k);

int count = 0;

int _tmain(int argc, _TCHAR* argv[])
{
	int value;
	register int i;

	printf("Enter a positive integer(0 to quit): ");

	while (scanf("%d", &value) == 1 && value > 0)
	{
		++count;
		for (i = value; i >= 0; i--)
			accumulate(i);

		printf("Enter a positive integer(0 to quit): ");
	}

	report_count();

	system("pause");
	return 0;
}

void report_count(void)
{
	printf("Loop executed %d times\n", count);

}