// 程序清单4.1.cpp : 定义控制台应用程序的入口点。
//一个能为您提供一些信息的对话程序

#include "stdafx.h"

#define DENSITY 62.4

int _tmain(int argc, _TCHAR* argv[])
{

	//测试空字符
	char ch[5];
	scanf("%s", ch);
	printf("%s\n", ch);


	system("pause");
	return 0;


	//教材中例子
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);

	size = sizeof name;
	letters = strlen(name);

	volume = weight / DENSITY;

	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters, \n", letters);
	printf("and we have %d bytes to store it in.\n", size);

	system("pause");
	return 0;
}

