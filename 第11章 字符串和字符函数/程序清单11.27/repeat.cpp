// �����嵥11.27.cpp : �������̨Ӧ�ó������ڵ㡣
//���в�����main()����

#include "stdafx.h"
#include <Windows.h>


int _tmain(int argc, char * argv[])
{
	
	printf("The command line has %d arguments: \n", argc - 1);

	for (int i = 1; i < argc; i++)
	{
		printf("%d : %10s\n", i, argv[i]);
	}

	printf("\n");

	system("pause");
	return 0;
}

