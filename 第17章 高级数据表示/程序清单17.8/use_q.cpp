// 程序清单17.8.cpp : 定义控制台应用程序的入口点。
//测试Queue接口的驱动程序

#include "stdafx.h"
#include <Windows.h>
#include "queue.h"

void showItem(Item item);

int _tmain(int argc, _TCHAR* argv[])
{
	Queue line;
	Item temp;
	char ch;

	InitializeQueue(&line);

	puts("Testing the Queue interface. Type a to add a value, ");
	puts("type d to delete a value, type s to showItem, and type q to quit.");

	while ((ch = getchar()) != 'q')
	{
		if (ch != 'a' && ch != 'd' && ch != 's')
			continue;

		switch (ch)
		{
		case 'a':
			printf("Integer to add: ");
			scanf("%d", &temp);
			if (!QueueIsFull(&line))
			{
				printf("Putting %d into queue\n", temp);
				EnQueue(temp, &line);
			}else
				puts("Queue is full!");

			break;
		case 'd':
			if (QueueIsEmpty(&line))
				puts("Nothing to delete!");
			else
			{
				DeQueue(&temp, &line);
				printf("Removing %d from queue\n", temp);
			}

			break;

		case 's':
			Traverse(&line, showItem);
			break;
		default:
			break;
		}

		printf("%d items in queue\n", QueueItemCount(&line));
		puts("Type a to add, s to show, d to delete, q to quit: ");
	}

	EmptyTheQueue(&line);

	puts("Bye!");

	system("pause");
	return 0;
}

void showItem(Item item)
{
	printf("The list is: %d\n", item);
}