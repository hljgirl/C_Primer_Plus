// 程序清单17.2.cpp : 定义控制台应用程序的入口点。
//使用结构链表

#include "stdafx.h"
#include <Windows.h>

#define TSIZE 45

typedef struct film
{
	char title[TSIZE];
	int rating;
	struct film * next;
}FILM;

int _tmain(int argc, _TCHAR* argv[])
{
	FILM * head = NULL;
	FILM * prev, *current;

	char input[TSIZE];

	puts("Enter first movie title: ");

	while (gets(input) != NULL && input[0] != '\0')
	{
		//1
		current = (FILM *)malloc(sizeof FILM);

		//2
		if (head == NULL)
		{
			head = current;
		}else{
			prev->next = current;
		}

		//3
		current->next = NULL;

		//4
		strcpy(current->title, input);

		puts("Enter your rating<0-10>: ");
		scanf("%d", &current->rating);
		while (getchar() != '\n')
			continue;

		puts("Enter next movie title(empty line to stop): ");

		//5
		prev = current;
	}


	if (head == NULL)
		printf("No data entered. ");
	else
		printf("Here is the movie list: \n");

	current = head;

	while (current != NULL)
	{
		printf("Movie: %s Rating: %d\n", current->title, current->rating);
		current = current->next;
	}

	//current = head;
	while (current != NULL)
	{
		current = prev;
		prev--;
		free(current);

	}

	printf("Bye!\n");

	system("pause");
	return 0;
}

