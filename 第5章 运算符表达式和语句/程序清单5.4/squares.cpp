// �����嵥5.4.cpp : �������̨Ӧ�ó������ڵ㡣
//����ǰ20��������ƽ����

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int num = 1;

	while (num < 21)
	{
		printf("%4d %6d\n", num, num * num);
		num += 1;
	}

	system("pause");
	return 0;
}

