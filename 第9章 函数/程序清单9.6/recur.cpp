// �����嵥9.6.cpp : �������̨Ӧ�ó������ڵ㡣
//�ݹ����

#include "stdafx.h"


void up_and_down(int n);

int main(void){

	up_and_down(1);

	getchar();
	return 0;
}


void up_and_down(int n)
{

	printf("Level %d: n location %p\n", n, &n);

	if (n < 4)
		up_and_down(n + 1);

	printf("Level %d: n location %p\n", n, &n);
}
