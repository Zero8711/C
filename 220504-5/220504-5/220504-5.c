#include <stdio.h>

struct profile //�Ż�� ����ü ����
{
	int age;
	double height;
};

struct student
{
	struct profile pf;//profile ����ü�� ����� ���
	int id;
	double grade;
};

int main(void)
{
	struct student grains01;//student ����ü ���� ����

	grains01.pf.age = 27;
	grains01.pf.height = 170;
	grains01.id = 315;
	grains01.grade = 4.3;

	printf("���� : %d\n", grains01.pf.age);
	printf("Ű : %.1lf\n", grains01.pf.height);
	printf("�й� : %d\n", grains01.id);
	printf("���� : %.1lf\n", grains01.grade);

	return 0;
}