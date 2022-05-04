#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int)); //저장공간 20바이트 할당
	
	if (pi == NULL) // 메모리가 부족할 때 예외처리
	{
		printf("메모리가 부족합니다.\n");
		exit(1);
	}

	printf("다섯명의 나이를 입력하세요 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum = sum + pi[i];
	}

	printf("다섯명의 평균나이 : %.1lf\n", (sum / 5.0));
	free(pi);

	return 0;
}
