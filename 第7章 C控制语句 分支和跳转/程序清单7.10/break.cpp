// �����嵥7.10.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��break�˳�ѭ��

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	float length, width;

	printf("Enter the length of the rectangle: \n");

	while (scanf("%f", &length) == 1)
	{
		printf("Length = %0.2f;\n", length);
		printf("Enter its width:\n");

		if (scanf("%f", &width) != 1)
		{
			break;
		}
		printf("Width = %0.2f;\n", width);
		printf("Area = %0.2f;\n", length * width);
		printf("Ennter the length of the rectangle:\n");
	}


	printf("Done.\n");

	system("pause");
	return 0;
}

