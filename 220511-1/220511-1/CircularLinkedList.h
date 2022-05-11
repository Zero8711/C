#pragma once

typedef struct ListNode
{
	char data[4];
	struct ListNode* link;
}listNode;

typedef struct
{
	listNode* head;
}LinkedList_h;

LinkedList_h* createLinkedList_h(void);
void printList(LinkedList_h* CL);
void insertFirstNode(LinkedList_h* CL, char* x);
void insertMiddleNode(LinkedList_h* CL, listNode* pre, char* x);
void deleteNode(LinkedList_h* CL, listNode* old);
listNode* searchNode(LinkedList_h* CL, char* x);