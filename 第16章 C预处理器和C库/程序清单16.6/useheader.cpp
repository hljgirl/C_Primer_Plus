// �����嵥16.6.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��names_st�ṹ

#include "stdafx.h"
#include "names_st.h"

int _tmain(int argc, _TCHAR* argv[])
{
	names candidate;

	get_names(&candidate);
	printf("Let's welcome ");

	show_names(&candidate);
	printf(" to this program!\n");


	system("pause");
	return 0;
}

