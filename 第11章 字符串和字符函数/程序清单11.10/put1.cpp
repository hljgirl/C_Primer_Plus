// �����嵥11.10.cpp : �������̨Ӧ�ó������ڵ㡣
//����ӻ��з���ӡһ���ַ���

#include "stdafx.h"
#include <Windows.h>

void put1(const char*);
int _tmain(int argc, _TCHAR* argv[])
{

	const char * string = "alskjflasjdfaslfjasldf";

	put1(string);

	system("pause");
	return 0;
}

void put1(const char* string)
{
	while (*string != '\0')
	{
		putchar(*string++);
	}

}