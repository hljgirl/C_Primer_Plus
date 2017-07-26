// 程序清单11.1.cpp : 定义控制台应用程序的入口点。
//使用字符串和用户交互

#include "stdafx.h"
#include <Windows.h>

#define MSG		"You must have many talents. Tell me some."
#define LIM		5
#define LINELEN 81

int _tmain(int argc, _TCHAR* argv[])
{
	char name[LINELEN];
	char talents[LINELEN];

	const char m1[40] = "Limit yourself to one line's worth.";
	const char m2[] = "If you can't think of anything, fake it.";
	const char *m3 = "\nEnough about me - what's your name?";
	const char *mytal[LIM] = {"Adding numbers swiftly",
		"Multiplying accurately",
		"Stashing data",
		"Following instructions to the letter",
		"Understanding the C lanuage"};


	printf("Hi! I'm Clyde the Computer." "I have many talents.\n");
	printf("Let me tell you some of them.\n");

	puts("What were they? Ah, yes, here's a partial list.");

	for (int i = 0; i < LIM; i++)
	{
		puts(mytal[i]);
	}

	puts(m3);
	gets(name);

	printf("Well, %s, %s\n", name, MSG);
	printf("%s\n%s\n", m1, m2);

	gets(talents);
	puts("Let's see if I've got that list:");
	puts(talents);

	printf("Thanks for the information, %s.\n", name);

	system("pause");
	return 0;
}

