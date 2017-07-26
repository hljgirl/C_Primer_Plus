// 程序清单9.7.cpp : 定义控制台应用程序的入口点。
//使用循环和递归计算阶乘

#include "stdafx.h"

long fact(int);
long rfact(int);

int main(void){

	int num;


	printf("This program calculates factorials.\n");
	printf("Enter a value in the rang 0-12(q to quit);\n");

	while (scanf("%d", &num) == 1)
	{
		if (num < 0){

			printf("No negative numbers,Please.\n");

		}else if (num > 12){

			printf("Keep input under 13.\n");

		}else {

			printf("loop: %d factorial = %ld\n", num, fact(num));
			printf("recursion: %d factorial = %ld\n", num, rfact(num));

		}

		printf("Enter a value in the rang 0-12(q to quit);\n");
	}

	
	printf("Bye!");

	getchar();
	getchar();
	return 0;

}



long fact(int n)
{

	long ans;

	for (ans = 1; n > 1; n--)
	{
		ans *= n;
	}	

	return ans;
}


long rfact(int n)
{
	long ans;

	if (n > 0){
		
		ans = n * rfact(n - 1);

	}else{

		ans = 1;
	}

	return ans;
}