// 程序清单13.5.cpp : 定义控制台应用程序的入口点。
//反序显示一个文件

#include "stdafx.h"
#include <Windows.h>

#define CNTL_Z '\032'
#define SLEN 50

int _tmain(int argc, _TCHAR* argv[])
{
	char file[SLEN];
	char ch;
	FILE *pf;
	long last;

	puts("Enter the name of the file to be processed: ");
	gets(file);

	if ((pf = fopen(file, "rb")) == NULL)
	{
		printf("reverse can't open %s\n", file);
		exit(1);
	}

	fseek(pf, 0L, SEEK_END);
	last = ftell(pf);

	for (int i = 1; i <= last; i++)
	{
		fseek(pf, -i, SEEK_END);
		ch = getc(pf);

		if (ch != CNTL_Z && ch != '\r')
		{
			putchar(ch);
		}

		/*if (ch == '\r')
		{
			putchar('\n');
		}else{
			putchar(ch);
		}*/
	}

	putchar('\n');
	fclose(pf);

	system("pause");
	return 0;
}

