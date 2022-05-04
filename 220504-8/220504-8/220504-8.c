#include <stdio.h>

struct address //주소록 구조체 선언
{
	//구조체 멤버 (이름, 나이, 전화번호, 주소)
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

int main(void)
{
	struct address list[5] = {//요소가 5개인 구조체 배열 선언
		{"김대웅 교수님", 35, "111-1111", "강서구 화곡동"},
		{"강시형", 26, "222-2222", "강서구 화곡동"},
		{"강현구", 27, "333-3333", "강서구 화곡동"},
		{"이지훈", 29, "444-4444", "강서구 화곡동"},
		{"김지호", 26, "555-5555", "강서구 화곡동"},
	};
	int i;

	for (i = 0; i < 5; i++)//배열 요소 만큼 반복
	{
		printf("%10s%5d%15s%20s\n",
			list[i].name, list[i].age, list[i].tel, list[i].addr);//이름, 나이, 전화번호, 주소 출력
	}

	return 0;
}