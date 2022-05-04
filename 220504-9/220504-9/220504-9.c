#include <stdio.h>

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void print_list(struct address* lp);

int main(void)
{
	struct address list[4] = {
		{"강시형", 26, "111-1111", "강서구 화곡동"},
		{"강현구", 27, "222-2222", "강서구 화곡동"},
		{"김지호", 26, "333-3333", "강서구 화곡동"},
		{"이지훈", 29, "444-4444", "강서구 화곡동"}
	};

	print_list(list);

	return 0;
}

void print_list(struct address* lp)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%10s%5d%15s%20s\n",
			(lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}