// �����嵥4.16.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ�ÿɱ��ȵ�����ֶ�

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	unsigned width, precision;

	int number = 256;
	double weight = 242.5;


	printf("What field width?\n");

	scanf("%d", &width);

	printf("The number is : %*d; \n", width, number);


	printf("Now enter a width and a precision: \n");

	scanf("%d %d", &width, &precision);

	printf("Weigth = %*.*f\n", width, precision, weight);

	system("pause");
	return 0;
}

