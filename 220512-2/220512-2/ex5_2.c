#include <stdio.h>
#include "stackL.h"

int main(void)
{
	element item;
	top = NULL;
	printf("\n**���� ���� ����**\n");
	printStack();

	push(1); printStack();
	push(2); printStack();
	push(3); printStack();

	item = peek();
	printStack();
	printf("peek => %d", item);

	item = pop();
	printStack();
	printf("\tpop => %d", item);

	item = pop();
	printStack();
	printf("\tpop => %d", item);

	item = pop();
	printStack();
	printf("\tpop => %d", item);

	return 0;
}