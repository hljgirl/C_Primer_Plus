// �����嵥12.7.cpp : �������̨Ӧ�ó������ڵ㡣
//����rand0��������

#include "stdafx.h"
#include <Windows.h>

int rand0(void);

int _tmain(int argc, _TCHAR* argv[])
{
	for (int count = 0; count < 5; count++)
	{
		printf("%hd\n", rand0());
	}

	system("pause");
	return 0;
}

