#include <stdio.h> //������ ���� �� ���� ��������� ���������Ѵ�
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
		printf("����� �Է��ϼ��� => ");
		scanf_s("%d", &num);
		if (num <= 0) break;
		if (count == size)//��������� ��� ����ϸ�
		{
			size = size + 5;//ũ�⸦ �÷� ���Ҵ��Ѵ�
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}

	free(pi);//�����Ҵ� ������� �ݳ�

	return 0;
}