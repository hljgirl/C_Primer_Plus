// �����嵥6.16.cpp : �������̨Ӧ�ó������ڵ㡣
//�������ѭ��

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	const int secret_code = 13;
	int code_entered;

	//do
	//{

	//	printf("To enter the triskaidekaphobia therapy club, \n");
	//	printf("please enter the secret code number: ");
	//	scanf("%d", &code_entered);

	//} while (code_entered != secret_code);

	printf("To enter the triskaidekaphobia therapy club, \n");
	printf("please enter the secret code number: ");
	scanf("%d", &code_entered);

	while (code_entered != secret_code)
	{
		printf("To enter the triskaidekaphobia therapy club, \n");
		printf("please enter the secret code number: ");
		scanf("%d", &code_entered);
	}

	printf("Congratulations! You are cured!\n");

	system("pause");
	return 0;
}

