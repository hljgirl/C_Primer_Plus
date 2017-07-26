// 程序清单17.9.cpp : 定义控制台应用程序的入口点。
//使用Queue接口模拟商业街建议摊队列的完整代码

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

	int hours;				//模拟的小时数
	int perhours;			//每小时顾客的平均数

	long cyclelimit;		//循环计数器的上限
	long turnaways = 0;		//因队列已满而被拒绝的顾客数
	long customers = 0;		//被加入队列的顾客数
	long served = 0;		//在模拟期间得到服务的顾客数
	long sum_line = 0;		//累计的队列长度
	int wait_time = 0;		//从当前到Sigmund空闲所需时间
	double min_per_cust;	//顾客到来的平均间隔时间
	long line_wait = 0;		//队列累计等待时间


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