// �����嵥4.1.cpp : �������̨Ӧ�ó������ڵ㡣
//һ����Ϊ���ṩһЩ��Ϣ�ĶԻ�����

#include "stdafx.h"

#define DENSITY 62.4

int _tmain(int argc, _TCHAR* argv[])
{

	//���Կ��ַ�
	char ch[5];
	scanf("%s", ch);
	printf("%s\n", ch);


	system("pause");
	return 0;


	//�̲�������
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Hi! What's your first name?\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);

	size = sizeof name;
	letters = strlen(name);

	volume = weight / DENSITY;

	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters, \n", letters);
	printf("and we have %d bytes to store it in.\n", size);

	system("pause");
	return 0;
}

