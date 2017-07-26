// 程序清单14.11.cpp : Defines the entry point for the console application.
//复合文字

#include "stdafx.h"
#include <Windows.h>

#define MAXTITL 41
#define MAXAUTL 31

typedef struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main()
{
	book readfirst;
	int score;

	printf("Enter test score:\n");
	scanf("%d", &score);

	if (score > 84)
	{
		//readfirst = (struct book) {"Crime and Punishment", "Fyodor Dostoyevsky", 9.99};
	}
	else {
		//readfirst = (struct book) {"Mr. Bouncy's Nice Hat", "Fred Winsome", 5.99};
	}

	printf("%s by %s: $%.2f", readfirst.title, readfirst.author, readfirst.value);

	system("pause");
    return 0;
}

