#include "cQueueS.h"

int main(void)
{
	QueueType* cQ = createCQueue();
	element data;
	printf("\n *****���� ť ����*****\n");

	printf("\n ���� A>>");
	enQueue(cQ, 'A');
	printCQ(cQ);

	printf("\n ���� B>>");
	enQueue(cQ, 'B');
	printCQ(cQ);

	printf("\n ���� C>>");
	enQueue(cQ, 'C');
	printCQ(cQ);

	data = peekCQ(cQ);
	printf("peek item : %c \n", data);

	printf("\n ���� >>");
	data = deCQueue;
	printCQ(cQ);
	printf("\t���������� : %c", data);

	printf("\n ���� >>");
	data = deCQueue;
	printCQ(cQ);
	printf("\t���������� : %c", data);

	printf("\n ���� >>");
	data = deCQueue;
	printCQ(cQ);
	printf("\t\t���������� : %c", data);

	printf("\n ���� D>>");
	enCQueue(cQ, 'D');
	printCQ(cQ);

	printf("\n ���� E>>");
	enCQueue(cQ, 'E');
	printCQ(cQ);

	return 0;
}