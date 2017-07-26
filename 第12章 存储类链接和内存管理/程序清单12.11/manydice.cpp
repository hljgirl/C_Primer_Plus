// �����嵥12.11.cpp : �������̨Ӧ�ó������ڵ㡣
//��������ӵ�ģ�����

#include "stdafx.h"
#include <Windows.h>
#include <time.h>

#include "diceroll.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int dice, roll;
	int sides;

	srand((unsigned int)time(0));

	printf("Enter the number of sides per die, 0 to stop.\n");

	while (scanf("%d", &sides) == 1 && sides > 0)
	{
		printf("How many dice?\n");
		scanf("%d", &dice);

		roll = roll_n_dice(dice, sides);

		printf("You have rolled a %d using %d %d - sided dice.\n", roll, dice, sides);

		printf("How many dice? Enter 0 to stop.\n");
	}

	printf("The rollen() function was called %d times.\n", roll_count);

	printf("GOOD FORTUNE TO YOU!\n");

	system("pause");
	return 0;
}

