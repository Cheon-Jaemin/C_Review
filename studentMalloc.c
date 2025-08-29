#include <stdio.h>
#include <stdlib.h>

void print()
{
	int* list;
	int students, sum = 0;

	printf("�л��� �� : ");
	scanf("%d", &students);

	list = (int*)malloc(sizeof(int) * students);
	if (list == NULL)
	{
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}

	for (int i = 0; i < students; i++)
	{
		printf("�л� #%d ���� : ", i + 1);
		scanf("%d", &list[i]);
	}

	for (int i = 0; i < students; i++)
	{
		sum += list[i];
	}
	printf("���� ��� = %.2f\n", (double)sum / students);

	free(list);
}

int main(void)
{
	print();
	return 0;
}
