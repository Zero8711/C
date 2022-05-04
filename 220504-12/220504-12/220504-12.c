#include <stdio.h>

enum season {SPRING, SUMMER, FALL, WINTER};

int main(void)
{
	enum season ss;//열거형 변수 선언
	char* pc = NULL;//문자열을 저장할 포인터 NULL로 초기화

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

	printf("나의 레저 활동 : %s\n", pc);

	return 0;
}