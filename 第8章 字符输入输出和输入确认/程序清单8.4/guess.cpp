// �����嵥8.4.cpp : �������̨Ӧ�ó������ڵ㡣
//һ����Ч�Ҵ���Ĳ�������

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{

	char response;
	int guess = 1;

	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with ");
	printf("\nan n if it is wrong.\n");
	printf("Uh...is your number %d?\n", guess);
	
	while ((response = getchar()) != 'y')
	{
		if(response == 'n'){
			printf("Well, then, is it %d?\n", ++guess);
		}else{
			printf("Sorry, I understand only y or n.\n");
		}

		while (getchar() != '\n')
		{
			continue;
		}
	}

	printf("I knew I could do it!\n");



	system("pause");
	return 0;
}

