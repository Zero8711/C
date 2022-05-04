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
		{"������", 26, "111-1111", "������ ȭ�"},
		{"������", 27, "222-2222", "������ ȭ�"},
		{"����ȣ", 26, "333-3333", "������ ȭ�"},
		{"������", 29, "444-4444", "������ ȭ�"}
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