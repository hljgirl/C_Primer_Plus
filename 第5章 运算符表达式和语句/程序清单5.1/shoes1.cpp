// �����嵥5.1.cpp : �������̨Ӧ�ó������ڵ㡣
//��һ˫Ь�ĳ���ת��ΪӢ��

#include "stdafx.h"


#define ADJUST 7.64
#define SCALE  0.325

int _tmain(int argc, _TCHAR* argv[])
{
	double shoe, foot;

	shoe = 9.0;
	foot = shoe * SCALE + ADJUST;

	printf("Shoe size(men's) foot length\n");
	printf("%10.1f %15.2f inches\n", shoe, foot);

	system("pause");
	return 0;
}

