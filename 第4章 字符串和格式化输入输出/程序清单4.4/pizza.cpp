// 程序清单4.4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <limits.h>
#include <float.h>

#define PI 3.14159

int _tmain(int argc, _TCHAR* argv[])
{

	float area, circum, radius;

	printf("What is the radius of your pizza?\n");
	scanf("%f", &radius);

	area = PI * radius * radius;
	circum = 2 * PI * radius;

	printf("Your basic pizza parameters are as follows: \n");
	printf("circumference = %1.2f, area = %1.2f\n", circum, area);

	system("pause");
	return 0;

}

