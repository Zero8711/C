#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int)); //������� 20����Ʈ �Ҵ�
	
	if (pi == NULL) // �޸𸮰� ������ �� ����ó��
	{
		printf("�޸𸮰� �����մϴ�.\n");
		exit(1);
	}

	printf("�ټ����� ���̸� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum = sum + pi[i];
	}

	printf("�ټ����� ��ճ��� : %.1lf\n", (sum / 5.0));
	free(pi);

	return 0;
}
