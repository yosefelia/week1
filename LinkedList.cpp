#include <iostream>
#include "LinkedList.h"
using namespace std;

void addToList(LinkedList* list, unsigned int value)
{
	Node* newNode = new Node;
	newNode->dada = value;
	newNode->next = list->head;
	list->head = newNode;
}
void cleanLinkedList(LinkedList* list)
{
	Node* current = list->head;
	while (current != NULL)
	{
		Node* temp = current;
		current = current->next;
		delete temp;
	}
	list->head = NULL;
}