// 程序清单7.7.cpp : 定义控制台应用程序的入口点。
//统计字符、单词和行

#include "stdafx.h"
#include <Windows.h>

#define STOP '|'

int _tmain(int argc, _TCHAR* argv[])
{
	char ch;
	char prev;
	long n_chars = 0L;
	int n_lines = 0;
	int n_words = 0;
	int p_lines =0;
	bool inword = false;

	printf("Enter text to be analyzed(| to terminate):\n");
	prev = '\n';

	while ((ch = getchar()) != STOP)
	{
		n_chars++;
		if (ch == '\n')
		{
			n_lines++;
		}

		if (!isspace(ch) && !inword)
		{
			inword = true;
			n_words++;
		}

		if (isspace(ch) && inword)
		{
			inword = false;
		}

		prev = ch;
	}

	if (prev != '\n')
	{
		p_lines = 1;
	}

	printf("characters = %ld, words = %d, lines = %d\n", n_chars, n_words, n_lines);
	printf("partial lines = %d\n", p_lines);

	system("pause");
	return 0;
}

