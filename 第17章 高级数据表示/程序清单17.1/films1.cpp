// 程序清单17.1.cpp : 定义控制台应用程序的入口点。
//使用结构数组

#include "stdafx.h"
#include <Windows.h>

#define TSIZE 45
#define FMAX  5

typedef struct film
{
	char title[TSIZE];
	int rating;

}FILM;

int _tmain(int argc, _TCHAR* argv[])
{
	FILM movies[FMAX];
	int i = 0;

	puts("Enter first movie title: ");
	while (i < FMAX && gets(movies[i].title) != NULL && movies[i].title[0] != '\0')
	{
		puts("Enter your rating<0-10>: ");
		scanf("%d", &movies[i++].rating);
		while (getchar() != '\n')
			continue;
		puts("Enter next movie title(empty line to stop): ");
	}


	if (i == 0)
		printf("No data entered. ");
	else
		printf("Here is the movie list: \n");

	for (int j = 0; j < i; j++)
		printf("Movie: %s Rating: %d\n", movies[j].title, movies[j].rating);


	printf("Bye!\n");


	system("pause");
	return 0;
}

