// 程序清单7.11.cpp : 定义控制台应用程序的入口点。
//使用switch语句

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{	
	char ch;

	printf("Give me a letter of the alphabet, and I will give ");
	printf("an animal name\nbeginning with that letter.\n");
	printf("Please type in a letter; type # to end my act.\n");

	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
		{
			continue;
		}

		if (islower(ch))
		{
			switch (ch)
			{
			case 'a':
				printf("argali, a wild sheep of Asia\n");
				break;
			case 'b':
				printf("babirusa, a wild pig of Malay\n");
				break;
			case 'c':
				printf("coati, racoonlike mammal\n");
				break;
			case 'd':
				printf("desman, aquatic, molelike critter\n");
				break;
			case 'e':
				printf("echidna, the spiny anteater\n");
				break;
			case 'f':
				printf("fisher, brownish marten\n");
				break;
			default:
				printf("That's a stumper!\n");
				break;
			}
		}else
		{
			printf("I recognize only lowercase letters.\n");
		}

		while (getchar() != '\n')
		{
			continue;
		}

		printf("Please type another letter or a #.\n");
	}


	printf("Bye!\n");
	system("pause");
	return 0;
}

