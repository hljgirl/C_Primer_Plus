// �����嵥1.1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	//while (true)
	//{
		float weight;
		float value;

		printf("Are you worth your weight in rhodium ?\n");
		printf("Let's check it out.\n");
		printf("Please enter your weight in pounds: ");

		scanf("%f", &weight);

		value = 770 * weight * 14.5833;

		printf("Your weight in rhodium is worth $%.2f .\n", value);
		printf("You are easily worth that! If rhodium prices drop, \n");
		printf("eat more to maintain your value. \n\n\n");
	//}
	

	system("pause");
	return 0;
}

