// 程序清单13.7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

#define ARSIZE 1000

int _tmain(int argc, _TCHAR* argv[])
{
	double number[ARSIZE];
	double value;
	const char * file = "number.txt";
	long pos;
	int index;
	FILE *iofile;

	for (int i = 0; i < ARSIZE; i++)
	{
		number[i] = 100.0 * i + 1.0 / (i + 1);
	}

	if ((iofile = fopen(file, "wb")) == NULL)
	{
		fprintf(stderr, "Could not open %s for output.\n", file);
		exit(1);
	}

	fwrite(number, sizeof(double), ARSIZE, iofile);
	fclose(iofile);

	if ((iofile = fopen(file, "rb")) == NULL)
	{
		fprintf(stderr, "Could not open %s for random access.\n", file);
		exit(1);
	}

	printf("Enter an index in the range 0--%d.\n", ARSIZE - 1);
	scanf("%d", &index);

	while (index >= 0 && index < ARSIZE)
	{
		pos = (long)index * sizeof(double);
		fseek(iofile, pos, SEEK_SET);
		fread(&value, sizeof(double), 1, iofile);

		printf("The value there is %f.\n", value);
		printf("Next index (out of range to quit): \n");
		scanf("%d", &index);
	}

	fclose(iofile);
	puts("Bye!");
	system("pause");
	return 0;
}

