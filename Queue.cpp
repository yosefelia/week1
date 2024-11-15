#include <iostream>
#include "Queue.h"
using namespace std;

void initQueue(Queue* q, unsigned int size)
{
	q->arr = new int[size];
	q->maxValue = size;
	q->size = 0;
	q->rear = -1;
	q->front = 0;
}
void cleanQueue(Queue* q)
{
	delete[] q->arr;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
	{
		cout << "Queue is full!";
		return;
	}
	q->rear = (q->rear + 1) % q->maxValue;
	q->arr[q->rear] = newValue;
	q->size++;
}
int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	if (isEmpty(q))
	{
		cout << "Queue is empty!";
	}
	int value = q->arr[q->front];
	q->front = (q->front + 1) % q->maxValue;
	q->size--;
	return value;
}
bool isEmpty(Queue* s)
{
	return s->size == 0;
}
bool isFull(Queue* s)
{
	return s->size == s->maxValue;
}