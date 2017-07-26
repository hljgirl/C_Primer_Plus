// �����嵥7.1.cpp : �������̨Ӧ�ó������ڵ㡣
//����¶ȵ�����ȵ������İٷ���

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	const int FREEZING = 0;
	float temperature;
	int total_day = 0;
	int cold_day = 0;

	printf("Enter the list of daily low temperature.\n");
	printf("Use Celsius, and enter q to quit.\n");

	while (scanf("%f", &temperature) == 1)
	{
		total_day++;
		if (temperature < FREEZING)
		{
			cold_day++;
		}
	}

	if (total_day != 0){
		printf("%d days total: %.2f%% were below freezing.\n", total_day, 100.00 * (float)cold_day / total_day);
	}else{
		printf("No data entered!\n");
	}


	system("pause");
	return 0;
}

