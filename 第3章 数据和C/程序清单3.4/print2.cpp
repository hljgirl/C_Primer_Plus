// �����嵥3.4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{

goto f;

	//�����������
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

	//�鿴�����������͵ĳ���
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
	
	//�������Print��ʽ
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
	//���ִ�ӡ��ʽ
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
	//�鿴char���ͳ���
	int ch = sizeof(char);
	printf("sizeof(char) = %d\n", ch * 8);

	system("pause");
	return 0;

e:
	//����char���͵ĸ�ֵ
	char cha1 = 'A';
	printf("%%d = %d  %%c = %c\n", cha1, cha1);

	char cha2 = 'FATE';
	printf("%%d = %d  %%c = %c\n", cha2, cha2);

	system("pause");
	return 0;

f:

	//�鿴ascii����
	char been = 0;

	for (been = 0; been < 128; been++)
	{
		printf("%c\n", been);
	}
	

	system("pause");
	return 0;

}

