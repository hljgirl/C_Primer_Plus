// �����嵥3.7.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h>


int _tmain(int argc, _TCHAR* argv[])
{

goto b;

	//�̲��е�ʵ��
	float aboat = 32000.0f;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e \n", aboat, aboat);
	printf("%f can be written %e \n", abet, abet);
	printf("%f can be written %e \n", dip, dip);


	//�鿴�����͵ĳ���
	int size;

	printf("sizeof(float) = %d\n", sizeof(float) * 8);
	printf("sizeof(double) = %d\n", sizeof(double) * 8);
	printf("sizeof(long double) = %d\n", sizeof(long double) * 8);
	


	//����printf��ӡ��ʽ
	float pi = 3.1415926;
	double dou = 0.23234234234234234;
	long double ldou = 3242343927.2349237492374932749327492;

	printf("%f %e %a \n", pi, pi, pi);
	printf("%f %e %a \n", dou, dou, dou);
	printf("%lf %le %la \n", ldou, ldou, ldou);

	system("pause");
	return 0;

a:

	//����ֵ�����������
	float toobig = 3.4e38;
	printf("%e\n", toobig * 100.0f);

//1.#INF00e+000
//�밴���������. . .

	system("pause");
	return 0;


b:

	//�������������
	//��һ��������1 �ټ�ȥԭ�� �õ�������ܻ᲻һ��
	float a;
	float b = 2.0e20;
	b = b + 1.0;
	a = b - 2.0e20;

	printf("%f \n", a);

	system("pause");
	return 0;

}

