#include <stdio.h>
#include <stdlib.h>

void printRealloc()
{
	printf("정수 2개를 저장할 공간이 필요\n");
	int* list = (int*)malloc(2 * sizeof(int));

	list[0] = 10;
	list[1] = 20;

	printf("정수 3개를 저장할 공간으로 확장\n");

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

