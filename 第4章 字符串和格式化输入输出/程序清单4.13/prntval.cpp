// �����嵥4.13.cpp : �������̨Ӧ�ó������ڵ㡣
//����printf()�����ķ���ֵ

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int bph2o = 212;
	int rv;

	rv = printf("%d F is water's boiling poing.\n", bph2o);
	printf("The Printf() function printed %d characters.\n", rv);

	system("pause");
	return 0;
}

