// 程序清单17.12.cpp : 定义控制台应用程序的入口点。
//使用二叉搜索树

#include "stdafx.h"
#include <Windows.h>

#include "tree.h"

char menu(void);
void addpet(Tree* pt);
void droppet(Tree* pt);
void showpets(const Tree* pt);
void findpet(const Tree* pt);
void printitem(Item item);
void uppercase(char * str);

int _tmain(int argc, _TCHAR* argv[])
{
	Tree pets;
	char choice;

	InitializeTree(&pets);


	//a l f n d
	while ((choice = menu()) != 'q')
	{
		switch (choice)
		{
		case 'a':
			addpet(&pets);
			break;
		case 's':
			showpets(&pets);
			break;
		case 'f':
			findpet(&pets);
			break;
		case 'n':
			printf("%d pets in club.\n", TreeItemCount(&pets));
			break;
		case 'd':
			droppet(&pets);
			break;
		default:
			printf("Switching error!\n");
			break;
		}
	}

	DeleteTree(&pets);


	puts("Bye!");

	system("pause");
	return 0;
}



char menu(void)
{
	int ch;
	puts("Nerfville Pet Club Membership Program");
	puts("Enter the letter corresponding to your choice: ");
	puts("a) add a pet       s) show list of pets ");
	puts("n) number of pets  f) find pets");
	puts("d) delete a pet    q) quit");

	while ((ch = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;

		ch = tolower(ch);

		if (strchr("asfndq", ch) == NULL)
			puts("Please enter an a, s, f, n, d, or q: ");
		else
			break;
	}

	if (ch == EOF)
		ch = 'q';

	return ch;
}


void addpet(Tree* pt)
{
	Item temp;

	if (TreeIsFull(pt))
	{
		puts("No room in the club.");
		return ;
	}

	puts("Please enter name of pet: ");
	gets(temp.petname);

	puts("Please enter pet kind: ");
	gets(temp.petkind);

	uppercase(temp.petname);
	uppercase(temp.petkind);

	AddItem(&temp, pt);
	
}



void droppet(Tree* pt)
{
	Item temp;

	if (TreeIsEmpty(pt))
	{
		puts("No entries!");
		return ;
	}

	puts("Please enter name of pet you wish to delete: ");
	gets(temp.petname);

	puts("Please enter pet kind: ");
	gets(temp.petkind);

	uppercase(temp.petname);
	uppercase(temp.petkind);

	printf("%s the %s ", temp.petname, temp.petkind);

	if (DeleteItem(&temp, pt))
		printf("is dropped from thr club.\n");
	else
		printf("is not a member.\n");
}

void showpets(const Tree* pt)
{
	if (TreeIsEmpty(pt))
		puts("No entries!");
	else
		Traverse(pt, printitem);
}


void findpet(const Tree* pt)
{
	Item temp;

	if (TreeIsEmpty(pt))
	{
		puts("No entries!");
		return ;
	}

	puts("Please enter name of pet you wish to find: ");
	gets(temp.petname);

	puts("Please enter pet kind: ");
	gets(temp.petkind);

	uppercase(temp.petname);
	uppercase(temp.petkind);

	printf("%s the %s ", temp.petname, temp.petkind);

	if (InTree(&temp, pt))
		printf("is a member.\n");
	else
		printf("is not a member.\n");

}

void printitem(Item item)
{
	printf("Pet: %-19s Kind: %-19s\n", item.petname, item.petkind);
}


void uppercase(char * str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}