#include <stdio.h>

enum season {SPRING, SUMMER, FALL, WINTER};

int main(void)
{
	enum season ss;//������ ���� ����
	char* pc = NULL;//���ڿ��� ������ ������ NULL�� �ʱ�ȭ

	ss = SPRING;
	switch (ss)
	{
	case SPRING://0
		pc = "Flower Festival";
		break;

	case SUMMER://1
		pc = "Vacation";
		break;

	case FALL://2
		pc = "Camping";
		break;

	case WINTER://3
		pc = "Snowball Fight";
		break;
	}

	printf("���� ���� Ȱ�� : %s\n", pc);

	return 0;
}