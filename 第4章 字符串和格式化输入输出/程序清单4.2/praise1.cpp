// �����嵥4.2.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ�ò�ͬ�����ַ���

#include "stdafx.h"

#define PRAISE "What a super marvelous name!"

int _tmain(int argc, _TCHAR* argv[])
{

	char name[40];

		printf("What's your name?\n");
		scanf("%s", name);
		printf("Hello, %s. %s\n", name, PRAISE);

	system("pause");
	return 0;
}

