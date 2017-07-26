// 程序清单4.15.cpp : 定义控制台应用程序的入口点。
//什么情况下使用&

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

