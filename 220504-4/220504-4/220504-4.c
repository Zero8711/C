/*������ �ٽ�(p.481)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile//����ü ����
{
	char name[20];//�̸��� ������ �迭 ���
	int age;//���̸� ������ ���
	double height;//Ű�� ������ ���
	char* intro;//�ڱ�Ұ��� ���� ������
};

int main(void)
{
	struct profile grains01;//profile����ü ���� ����

	strcpy_s(grains01.name, "������");//name�迭�� �̸� ����
	grains01.age = 27;//age����� ���� ����
	grains01.height = 170;//height����� Ű ����

	grains01.intro = (char*)malloc(80);//�ڱ�Ұ��� ������ ���� �Ҵ�
	printf("�ڱ�Ұ� : ");
	gets(grains01.intro);//�ڱ�Ұ� �Է�

	//�� ����� ������ ���
	printf("�̸� : %s\n", grains01.name);
	printf("���� : %d\n", grains01.age);
	printf("Ű : %.1lf\n", grains01.height);
	printf("�ڱ�Ұ� : %s\n", grains01.intro);

	free(grains01.intro);

	return 0;
}