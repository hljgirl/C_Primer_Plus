// �����嵥6.14.cpp : �������̨Ӧ�ó������ڵ㡣
//���еĺ�

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int t_ct;
	double time, x;
	int limit;

	printf("Enter the mumber of terms you want : ");
	scanf("%d", &limit);

	for (t_ct = 1, time = 0, x = 1; t_ct <= limit; t_ct++, x *= 2.0)
	{
		time += 1.0/x;
		printf("time = %lf when terms = %d\n", time, t_ct);
	}
	
	system("pause");
	return 0;
}

