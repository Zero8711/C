/*집에서 다시(p.481)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile//구조체 선언
{
	char name[20];//이름을 저장할 배열 멤머
	int age;//나이를 저장할 멤버
	double height;//키를 저장할 멤버
	char* intro;//자기소개를 위한 포인터
};

int main(void)
{
	struct profile grains01;//profile구조체 변수 선언

	strcpy_s(grains01.name, "강현구");//name배열에 이름 복사
	grains01.age = 27;//age멤버에 나이 저장
	grains01.height = 170;//height멤버에 키 저장

	grains01.intro = (char*)malloc(80);//자기소개를 저장할 동적 할당
	printf("자기소개 : ");
	gets(grains01.intro);//자기소개 입력

	//각 멤버의 데이터 출력
	printf("이름 : %s\n", grains01.name);
	printf("나이 : %d\n", grains01.age);
	printf("키 : %.1lf\n", grains01.height);
	printf("자기소개 : %s\n", grains01.intro);

	free(grains01.intro);

	return 0;
}