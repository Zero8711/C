#include <stdio.h> //음수가 들어올 때 까지 저장공간이 무한증식한다
#include <stdlib.h>

int main(void)
{
	int* pi;
	int size = 5;
	int count = 0;
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("양수만 입력하세요 => ");
		scanf_s("%d", &num);
		if (num <= 0) break;
		if (count == size)//저장공간을 모두 사용하면
		{
			size = size + 5;//크기를 늘려 재할당한다
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}

	free(pi);//동적할당 저장공간 반납

	return 0;
}