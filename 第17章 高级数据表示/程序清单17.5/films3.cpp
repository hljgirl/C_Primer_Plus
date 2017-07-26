// 程序清单17.5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

#include "list.h"

void showmovies(Item item);

int _tmain(int argc, _TCHAR* argv[])
{
	List movies;
	Item temp;

	InitializeList(&movies);

	if (ListIsFull(&movies))
	{
		fprintf(stderr, "No memory available! Bye!\n");
		exit(1);
	}

	puts("Enter first movie title: ");
	while (gets(temp.title) != NULL && temp.title[0] != '\0')
	{
		puts("Enter your rating<0-10>: ");
		scanf("%d", &temp.rating);
		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "Problem allocating memory\n");
			break;
		}

		if (ListIsFull(&movies))
		{
			puts("The list is now full.");
			break;
		}

		puts("Enter next movie title(empty line to stop): ");
	}

	if (ListIsEmpty(&movies))
	{
		printf("No data entered.");
	}else{
		printf("Here is the movie list: \n");
		Traverse(&movies, showmovies);
	}

	printf("You entered %d movies.\n", ListItemCount(&movies));
	EmptyTheList(&movies);

	printf("Bye!\n");

	system("pause");
	return 0;
}

void showmovies(Item item)
{
	printf("Movie: %s Rating: %d\n", item.title, item.rating);
}
