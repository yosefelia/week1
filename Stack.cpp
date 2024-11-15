#include <iostream>
#include "Stack.h"
using namespace std;

void push(Stack* s, unsigned int element)
{
	addToList(&s->list, element);
}
int pop(Stack* s)// Return -1 if stack is empty
{
	if (s->list.head == nullptr)
	{
		return -1;
	}
	Node* temp = s->list.head;
	unsigned int value = temp->dada;
	s->list.head = temp->next;
	delete temp;
	return value;
}
void initStack(Stack* s)
{
	s->list.head = nullptr;
}
void cleanStack(Stack* s)
{
	cleanLinkedList(&s->list);
}
bool isEmpty(Stack* s)
{
	return s->list.head == nullptr;
}
bool isFull(Stack* s)
{
	return false;
}