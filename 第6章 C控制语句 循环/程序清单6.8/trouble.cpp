// �����嵥6.8.cpp : �������̨Ӧ�ó������ڵ㡣
//���� ����������ѭ��

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	long num;
	long sum = 0L;

	int status;

	printf("Please enter an integer to be summed.");
	printf("q to quit): ");

	status = scanf("%d", &num);

	while (status = 1)
	{
		sum = sum + num;

		printf("Please enter next integer (q to quit): ");

		status = scanf("%d", &num);
	}

	printf("Those integer sum to %d.\n", sum);

	system("pause");
	return 0;
}

