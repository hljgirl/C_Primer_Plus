// 程序清单9.12.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void mikado(int);
int _tmain(int argc, _TCHAR* argv[])
{
	int pooh = 2, bah = 5;

	printf("In main(), pooh = %d and &pooh = %p\n",pooh, &pooh);

	printf("In main(), bah = %d and &bah = %p\n",bah, &bah);

	mikado(pooh);

	getchar();
	return 0;

}

void mikado(int bah)
{

	int pooh = 10;

	printf("In mikado(), pooh = %d and &pooh = %p\n",pooh, &pooh);

	printf("In mikado(), bah = %d and &bah = %p\n",bah, &bah);


}