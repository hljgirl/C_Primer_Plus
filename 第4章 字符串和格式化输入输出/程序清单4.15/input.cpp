// �����嵥4.15.cpp : �������̨Ӧ�ó������ڵ㡣
//ʲô�����ʹ��&

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int age;
	float assets;
	char pet[30];

	printf("Enter your age, assets, and favorite pet.\n");

	scanf("%d %f", &age, &assets);
	scanf("%s", pet);

	printf("%d $%.2f %s\n", age, assets, pet );


	system("pause");
	return 0;
}

