// �����嵥3.10.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��ת������

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{

	float salary;

	printf("\aEnter your desired monthly salary: ");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a monty is $%.2f a year.", salary, salary * 12);
	printf("\rGee!\n");

	system("pause");
	return 0;
}

