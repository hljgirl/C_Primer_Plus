// 程序清单14.16.cpp : Defines the entry point for the console application.
//使用函数指针

#include "stdafx.h"
#include <Windows.h>

char showmenu(void);
void eatline(void);
void show(void(*pf)(char *), char *);
void ToUpper(char *);
void ToLower(char *);
void Transpose(char *);
void dummy(char *);

int main()
{
	char line[81];
	char copy[81];
	char choice;
	void (*pf)(char *);

	puts("Enter a string (empty line to quit): ");
	while (gets_s(line) != NULL && line[0] != '\0')
	{
		while ((choice = showmenu()) != 'n')
		{
			switch (choice)
			{
			case 'u':
				pf = ToUpper;
				break;
			case 'l':
				pf = ToLower;
				break;
			case 't':
				pf = Transpose;
				break;
			case 'o':
				pf = dummy;
				break;
			default:
				break;
			}

			strcpy(copy, line);
			show(pf, copy);
		}

		puts("Enter a string (empty line to quit): ");
	}

	puts("Bye!/n");

	system("pause");
    return 0;
}

char showmenu(void)
{
	char ans;
	puts("Enter menu choice: ");
	puts("u) upper case      l) lower case");
	puts("t) transposed case o) original case");
	puts("n) next string");

	ans = getchar();
	ans = tolower(ans);
	eatline();
	while (strchr("ulton", ans) == NULL)
	{
		puts("Please enter a u, l, t, o, n:");
		ans = tolower(getchar());
		eatline();
	}

	return ans;
}

void eatline(void)
{
	while (getchar() != '\n')
		continue;
}


void ToUpper(char * str) 
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}

void ToLower(char * str)
{
	while (*str)
	{
		*str = tolower(*str);
		str++;
	}
}

void Transpose(char * str)
{
	while (*str)
	{
		if (islower(*str))
		{
			*str = toupper(*str);
		}
		else if (isupper(*str))
		 {
			*str = tolower(*str);
		}

		str++;
	}
}

void dummy(char *)
{
	//
}

void show(void (*pf)(char *), char * str)
{
	pf(str);

	puts(str);
}