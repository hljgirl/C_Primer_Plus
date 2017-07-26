// �����嵥17.9.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��Queue�ӿ�ģ����ҵ�ֽ���̯���е���������

#include "stdafx.h"
#include <Windows.h>
#include <time.h>
#include "queue.h"

#define MIN_PER_HR  60.0

bool newcustomer(double x);
Item customertime(long when);

int _tmain(int argc, _TCHAR* argv[])
{
	Queue line;
	Item temp;

	int hours;				//ģ���Сʱ��
	int perhours;			//ÿСʱ�˿͵�ƽ����

	long cyclelimit;		//ѭ��������������
	long turnaways = 0;		//��������������ܾ��Ĺ˿���
	long customers = 0;		//��������еĹ˿���
	long served = 0;		//��ģ���ڼ�õ�����Ĺ˿���
	long sum_line = 0;		//�ۼƵĶ��г���
	int wait_time = 0;		//�ӵ�ǰ��Sigmund��������ʱ��
	double min_per_cust;	//�˿͵�����ƽ�����ʱ��
	long line_wait = 0;		//�����ۼƵȴ�ʱ��


	InitializeQueue(&line);
	srand(time(0));

	puts("Case Study: Sigmund Lander's Advice Booth");
	puts("Enter the number of simulation hours: ");
	scanf("%d", &hours);

	cyclelimit = MIN_PER_HR * hours;

	puts("Enter the average number of customers per hour: ");
	scanf("%d", &perhours);

	min_per_cust = perhours / MIN_PER_HR;

	
	for (int i = 0; i < cyclelimit; i++)
	{
		if (newcustomer(min_per_cust))
		{
			if (QueueIsFull(&line))
				turnaways++;
			else
			{
				customers++;
				temp = customertime(i);
				EnQueue(temp, &line);
			}
		}

		if (wait_time <= 0 && !QueueIsEmpty(&line))
		{
			DeQueue(&temp, &line);
			wait_time = temp.processtime;
			line_wait += i - temp.arrive;
			served++;
		}

		if (wait_time > 0)
			wait_time--;

		sum_line += QueueItemCount(&line);
	}

	if(customers > 0)
	{
		printf("customers accepted: %ld\n", customers);
		printf("  customers served: %ld\n", served);
		printf("         turnaways: %ld\n", turnaways);
		printf("average queue size: %.2f\n", (double)sum_line / cyclelimit);
		printf(" average wait time: %.2f\n", (double)line_wait / served);
	}else
		puts("No customers!");

	EmptyTheQueue(&line);

	system("pause");
	return 0;
}


bool newcustomer(double x)
{
	if (rand() * x / RAND_MAX < 1)
		return true;
	else
		return false;
}

Item customertime(long when)
{
	Item temp;

	temp.processtime = rand() % 3 + 1;
	temp.arrive = when;

	return temp;
}