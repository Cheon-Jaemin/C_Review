#include <stdio.h>
#include <stdlib.h>

void print_mallocArr()
{
	int* list;
	list = (int*)malloc(sizeof(int) * 3);
	if (list == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	for (int i = 0; i < 3; i++)
	{
		list[i] = (i + 1) * 10;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("배열로 동적메모리 할당 출력 = %d\n", list[i]);
	}

	free(list);
}

int main(void)
{
	print_mallocArr();
	return 0;
}
