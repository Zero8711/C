#include <stdio.h>
#pragma pack(1);

struct student//����ü ����
{
	int num;//int�� ���
	double grade;//double�� ���
};//�����ݷ� ������ ���

int main(void)
{
	struct student s1;//struct student���� ���� ����

	s1.num = 2;//s1�� num����� 2����
	s1.grade = 2.7;//s1�� grade����� 2.7����
	printf("�й� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);
	printf("struct size : %d", sizeof(s1));

	return 0;
}