//队列接口

#include "stdafx.h"

#ifndef _QUEUE_H_
#define _QUEUE_H_

//typedef int Item;
typedef struct MyStruct
{
	long arrive;
	int processtime;
}Item;

#define MAXQUEUE 10

typedef struct node
{
	Item item;
	struct node * next;
}Node;

typedef struct queue
{
	Node * front;
	Node * rear;
	int items;
}Queue;

void InitializeQueue(Queue* pq);

bool QueueIsFull(const Queue* pq);

bool QueueIsEmpty(const Queue* pq);

int QueueItemCount(const Queue* pq);

bool EnQueue(Item item, Queue* pq);

bool DeQueue(Item *item, Queue* pq);

void Traverse(const Queue * pq, void (* pfun)(Item item));

void EmptyTheQueue(Queue* pq);

#endif