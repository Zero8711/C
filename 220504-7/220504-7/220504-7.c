#include <stdio.h>

struct score
{
	int kor, eng, math;
};

int main(void)
{
	struct score grains01 = {90, 80, 70};
	struct score* ps = &grains01;

	printf("���� : %d\n", (*ps).kor); //����ü �����ͷ� ��� ����
	printf("���� : %d\n", ps->eng); //->������ ���
	printf("���� : %d\n", ps->math);

	return 0;
}