// �����嵥11.12.cpp : �������̨Ӧ�ó������ڵ㡣
//�û��Զ�����������

#include "stdafx.h"
#include <Windows.h>

void put1(const char*);   //����ӻ��з���ӡһ���ַ���
int put2(const char*);    //��ӡһ���ַ�������ͳ�����е��ַ�����

int _tmain(int argc, _TCHAR* argv[])
{
	put1("If I'd as much money");
	put1(" as I could spend, \n");

	printf("I count %d characters.\n", put2("I never would cry old chairs to mend."));

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