#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "CircularLinkedList.h"

LinkedList_h* createLinkedList_h(void)
{
	LinkedList_h* CL;
	CL = (LinkedList_h*)malloc(sizeof(LinkedList_h));
	CL->head = NULL;
	return CL;
}

void printList(LinkedList_h* CL)
{
	listNode* p;
	printf(" CL = (");
	p = CL->head;
	if (p == NULL)
	{
		printf(") \n"); return;
	}

	do
	{
		printf("%s", p->data);
		p = p->link;
		if (p != CL->head) printf(", ");
	} while (p != CL->head);
	printf(") \n");
}

void insertFirstNode(LinkedList_h* CL, char* x)
{
	listNode* newNode, * temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (CL->head == NULL)
	{
		CL->head = newNode;
		newNode->link = newNode;
	}

	else
	{
		temp = CL->head;
		while (temp->link != CL->head)
			temp = temp->link;
		newNode->link = temp->link;
		temp->link = newNode;
		CL->head = newNode;
	}
}

void insertMiddleNode(LinkedList_h* CL, listNode* pre, char* x)
{
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (CL->head == NULL)
	{
		CL->head = newNode;
		newNode->link = newNode;
	}

	else
	{
		newNode->link = pre->link;
		pre->link = newNode;
	}
}

void deleteNode(LinkedList_h* CL, listNode * old)
{
	listNode* pre;
	if (CL->head == NULL) return;
	if (CL->head->link == CL->head)
	{
		free(CL->head);
		CL->head = NULL;
		return;
	}

	else if (old == NULL) return;
	else
	{
		pre = CL->head;
		while (pre->link != old)
		{
			pre = pre->link;
		}
		pre->link = old->link;
		if (old == CL->head)
		{
			CL->head = old->link;
		}
		free(old);
	}	
}

listNode* searchNode(LinkedList_h* CL, char* x)
{
	listNode* temp;
	temp = CL->head;
	if (temp == NULL) return NULL;
	do
	{
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->link;
	} while (temp != CL->head);
	return NULL;
}