// �����嵥9.3.cpp : �������̨Ӧ�ó������ڵ㡣
//�ҳ����������еĽ�С��

#include "stdafx.h"
#include <Windows.h>

int imin(int m, int n);

int _tmain(int argc, _TCHAR* argv[])
{
	int evil1, evil2;

	printf("Enter a pair of integers(q to quit):\n");

	while (scanf("%d %d", &evil1, &evil2) == 2)
	{
		printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
		printf("Enter a pair of integers(q to quit):\n");
	}

	printf("Bye!.\n");

	system("pause");
	return 0;
}

int imin(int m, int n)
{
	//int temp;

	//if (m > n)
	//{
	//	return n;
	//}else{

	//	return m;
	//}
	
	return m > n ? n : m;

}


