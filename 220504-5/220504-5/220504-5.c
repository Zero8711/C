#include <stdio.h>

struct profile //신상명세 구조체 선언
{
	int age;
	double height;
};

struct student
{
	struct profile pf;//profile 구조체를 멤버로 사용
	int id;
	double grade;
};

int main(void)
{
	struct student grains01;//student 구조체 변수 선언

	grains01.pf.age = 27;
	grains01.pf.height = 170;
	grains01.id = 315;
	grains01.grade = 4.3;

	printf("나이 : %d\n", grains01.pf.age);
	printf("키 : %.1lf\n", grains01.pf.height);
	printf("학번 : %d\n", grains01.id);
	printf("학점 : %.1lf\n", grains01.grade);

	return 0;
}