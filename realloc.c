#include <stdio.h>
#include <stdlib.h>

void printRealloc()
{
	printf("���� 2���� ������ ������ �ʿ�\n");
	int* list = (int*)malloc(2 * sizeof(int));

	list[0] = 10;
	list[1] = 20;

	printf("���� 3���� ������ �������� Ȯ��\n");

	list = (int*)realloc(list, 3 * sizeof(int));
	list[2] = 30;

	for (int i = 0; i < 3; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");

	free(list);
}

int main(void)
{
	printRealloc();
	return 0;
}

