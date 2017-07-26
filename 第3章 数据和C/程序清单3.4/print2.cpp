// 程序清单3.4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{

goto f;

	//整数溢出试验
	//2147483647	
	printf("INT_MAX = %d\n", INT_MAX);
	printf("INT_MIN = %d\n", INT_MIN);

	printf("INT_MAX + 1 = %d\n", INT_MAX + 1);
	printf("INT_MIN - 1 = %d\n", INT_MIN - 1);
	

	int i = 2147483647;
	unsigned int j = 4294967295;
	
	printf("%d %d %d\n", i, i+1, i+2);
	printf("%u %u %u\n", j, j+1, j+2);

	system("pause");
	return 0;

c:

	//查看各个整数类型的长度
	int size;

	//32
	size = sizeof(int);
	printf("sizeof(int) = %d\n", size * 8);

	//16
	size = sizeof(short);
	printf("sizeof(short) = %d\n", size * 8);

	//32
	size = sizeof(long);
	printf("sizeof(long) = %d\n", size * 8);

	//64
	size = sizeof(long long);
	printf("sizeof(long long) = %d\n", size * 8);

	//32
	size = sizeof(unsigned int);
	printf("sizeof(unsigned int) = %d\n", size * 8);

	//16
	size = sizeof(unsigned short);
	printf("sizeof(unsigned short) = %d\n", size * 8);

	//32
	size = sizeof(unsigned long);
	printf("sizeof(unsigned long) = %d\n", size * 8);

	//64
	size = sizeof(unsigned long long);
	printf("sizeof(unsigned long long) = %d\n", size * 8);

	system("pause");
	return 0;

b:	
	
	//试验各种Print格式
	unsigned int un = 3000000000;   //1011 0010 1101 0000 0101 1110 0000 0000

	short end  = 200;

	long big = 65547;

	long long verybig = 12345678908642; //1011 0011 1010    0111 0011 1100 1110 0100 1100 1110 0010

	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig = %lld and not %ld\n", verybig, verybig);


	system("pause");
	return 0;


a:
	//各种打印格式
	int ia = INT_MAX;

	printf("%%d = %d \n", ia);
	printf("%%x = %x \n", ia);
	printf("%%o = %o \n", ia);
	printf("%%#x = %#x \n", ia);
	printf("%%#o = %#o \n", ia);

	printf("%%u = %u \n", ia);
	printf("%%hd = %hd \n", ia);

	system("pause");
	return 0;


d:
	//查看char类型长度
	int ch = sizeof(char);
	printf("sizeof(char) = %d\n", ch * 8);

	system("pause");
	return 0;

e:
	//试验char类型的赋值
	char cha1 = 'A';
	printf("%%d = %d  %%c = %c\n", cha1, cha1);

	char cha2 = 'FATE';
	printf("%%d = %d  %%c = %c\n", cha2, cha2);

	system("pause");
	return 0;

f:

	//查看ascii编码
	char been = 0;

	for (been = 0; been < 128; been++)
	{
		printf("%c\n", been);
	}
	

	system("pause");
	return 0;

}

