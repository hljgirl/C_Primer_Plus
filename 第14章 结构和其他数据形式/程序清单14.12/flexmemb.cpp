// 程序清单14.12.cpp : Defines the entry point for the console application.
//伸缩型数组成员

#include "stdafx.h"
#include <Windows.h>

struct flex
{
	int count;
	double average;
	double scores[];
};

void showflex(const struct flex *);

int main()
{
	struct flex *pf1, *pf2;
	int n = 5;
	int tot = 0;

	pf1 = (struct flex *)malloc(sizeof(struct flex) + n * sizeof(double));
	pf1->count = n;

	for (int i = 0; i < n; i++)
	{
		pf1->scores[i] = 20.0 - i;
		tot += pf1->scores[i];
	}

	pf1->average = tot / n;
	showflex(pf1);



	n = 9;
	tot = 0;
	pf2 = (struct flex *)malloc(sizeof(struct flex) + n * sizeof(double));
	pf2->count = n;
	for (int i = 0; i < n; i++)
	{
		pf2->scores[i] = 20.0 - i/2.0;
		tot += pf2->scores[i];
	}

	pf2->average = tot / n;
	showflex(pf2);


	free(pf1);
	free(pf2);
	system("pause");
    return 0;
}

void showflex(const struct flex * pf)
{
	printf("Score: ");

	for (int i = 0; i < pf->count; i++)
	{
		printf("%g ", pf->scores[i]);
	}

	printf("\nAverage: %g\n", pf->average);
}