// �����嵥11.11.cpp : �������̨Ӧ�ó������ڵ㡣
//��ӡһ���ַ�������ͳ�����е��ַ�����

#include "stdafx.h"
#include <Windows.h>

int put2(const char*);
int _tmain(int argc, _TCHAR* argv[])
{
	
	const char * string = "1234567890";

	printf("count = %d", put2(string));

	system("pause");
	return 0;
}

int put2(const char* string)
{
	int count = 0;

	while (*string)
	{
		putchar(*string++);
		count++;
	}
	
	putchar('\n');

	return count;
}
