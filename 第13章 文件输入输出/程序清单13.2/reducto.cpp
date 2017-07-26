// 程序清单13.2.cpp : 定义控制台应用程序的入口点。
//把您的文件压缩为原来的1/3

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	FILE *in, *out;
	int ch;
	char *filename = "Boo.license_1.txt";
	char name[81];
	int count = 0;

	/*if (argc < 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}*/

	
	if ((in = fopen(filename, "r")) == NULL)
	{
		fprintf(stderr, "I couldn't open the file\"%s\"\n", filename);
		exit(1);
	}

	strcpy(name, filename);
	strcat(name, ".red");
	if ((out = fopen(name, "w")) == NULL)
	{
		fprintf(stderr, "Can't create output file\n");
		exit(2);
	}


	while ((ch = getc(in)) != EOF)
	{
		if (count % 3 == 0)
		{
			putc(ch, out);
		}

		count++;
	}


	if ((fclose(in) != 0) || (fclose(out) != 0))
		fprintf(stderr, "Error in closing file.\n");


	system("pause");
	return 0;
}

