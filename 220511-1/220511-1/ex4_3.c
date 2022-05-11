#include "CircularLinkedList.h"

int main(void)
{
	LinkedList_h* CL;
	listNode* p;

	CL = createLinkedList_h();
	printf("(1) ���� ���Ḯ��Ʈ �����ϱ�! \n");
	printList(CL);

	printf("\n(2) ���� ���Ḯ��Ʈ�� [��] ��� �����ϱ�! \n");
	insertFirstNode(CL, "��");
	printList(CL);

	printf("\n(3) ���� ���Ḯ��Ʈ�� [��] ��� �ڿ� [��] ��� �����ϱ�! \n");
	p = searchNode(CL, "��");
	insertMiddleNode(CL, p, "��");
	printList(CL);

	printf("\n(4) ���� ���Ḯ��Ʈ�� [��] ��� �ڿ� [��] ��� �����ϱ�! \n");
	p = searchNode(CL, "��");
	insertMiddleNode(CL, p, "��");
	printList(CL);

	printf("\n(5) ���� ���Ḯ��Ʈ���� [��] ��� �����ϱ�! \n");
	p = searchNode(CL, "��");
	deleteNode(CL, p);
	printList(CL);


	return 0;
}