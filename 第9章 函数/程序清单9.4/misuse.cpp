// �����嵥9.4.cpp : �������̨Ӧ�ó������ڵ㡣
//����ȷ��ʹ�ú���

#include "stdafx.h"
#include <Windows.h>
#include <stdarg.h>

int imax(int i, ...);

int _tmain(int argc, _TCHAR* argv[])
{
	printf("The maximum of %d and %d is %d .\n", 3, 5, imax(2, 3 , 5));
	printf("The maximum of %d and %d is %d .\n", 3, 5, imax(2, 3.0, 5.0));

	system("pause");
	return 0;
}


int imax(int i, ...)
{
	va_list arg_ptr;  

	int j = 0; 

	
	va_start(arg_ptr, i);  

	j = va_arg(arg_ptr, int);

	va_end(arg_ptr);   

	printf("afsafs  %d %d\n", i, j);  

	return 0;

}
