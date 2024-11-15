#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node
{
	unsigned int dada;
	struct Node* next;
} Node;

typedef struct LinkedList
{
	Node* head;
} LinkedList;

void addToList(LinkedList* list, unsigned int value);
void cleanLinkedList(LinkedList* list);

#endif // LINKEDLIST_H