// �����嵥11.14.cpp : �������̨Ӧ�ó������ڵ㡣
//���������ַ���

#include "stdafx.h"
#include <Windows.h>

#define SIZE 80

int _tmain(int argc, _TCHAR* argv[])
{
	char flower[SIZE];
	char addon[] = "s smell like old shoes.";

	puts("What is your favorite flower?");
	gets(flower);

	strcat(flower, addon);

	puts(flower);
	puts(addon);

	system("pause");
	return 0;
}

