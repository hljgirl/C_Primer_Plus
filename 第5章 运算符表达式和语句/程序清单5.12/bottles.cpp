// �����嵥5.12.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#define MAX 100

int _tmain(int argc, _TCHAR* argv[])
{
	int count = MAX + 1;

	while (--count > 0)
	{
		printf("%d bottles of spring water on the wall, %d bottles of spring water!\n", count, count);
		printf("Take one down and pass it around, \n");
		printf("%d bottles of spring water!\n\n", count - 1);

		
	}


	system("pause");
	return 0;
}

