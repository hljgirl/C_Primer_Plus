// �����嵥11.3.cpp : �������̨Ӧ�ó������ڵ㡣
//ָ����ַ���

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	char *mesg = "Don't be a fool!";
	char *copy;

	copy = mesg;

	printf("%s\n", copy);
	printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
	printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);

	system("pause");
	return 0;
}

