// �����嵥11.28.cpp : �������̨Ӧ�ó������ڵ㡣
//�������в���ת��Ϊ����

#include "stdafx.h"
#include <stdlib.h>

int _tmain(int argc, char* argv[])
{
	int times;

	if (argc < 2 || (times = atoi(argv[1])) < 1)
	{
		printf("Usage: %s positive - number \n", argv[0]);
	}else{
		for (int i = 0; i < times; i++)
		{
			puts("Hello, good looking!");
		}

	}




	return 0;
}

