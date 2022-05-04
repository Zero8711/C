#include <stdio.h>
#pragma pack(1);

struct student//구조체 선언
{
	int num;//int형 멤버
	double grade;//double형 멤버
};//세미콜론 무조건 사용

int main(void)
{
	struct student s1;//struct student형의 변수 선언

	s1.num = 2;//s1의 num멤버에 2저장
	s1.grade = 2.7;//s1의 grade멤버에 2.7저장
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);
	printf("struct size : %d", sizeof(s1));

	return 0;
}