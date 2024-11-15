#include <iostream>
#include "Utils.h"
#include "Stack.h"
using namespace std;
#define SIZE 10

void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack stack;
	initStack(&stack);

	for (i = 0; i < size; i++)
	{
		push(&stack, nums[i]);
	}

	for (i = 0; i < size; i++)
	{
		nums[i] = pop(&stack);
	}

	cleanStack(&stack);
}
int* reverse10()
{
	int* nums = new int[SIZE];
	int i = 0;

	cout << "Enter 10 integers:";
	for (i = 0; i < SIZE; i++)
	{
		cin >> nums[i];
	}

	reverse(nums, SIZE);

	return nums;
}