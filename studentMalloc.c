#include <stdio.h>
#include <stdlib.h>

void print()
{
	int* list;
	int students, sum = 0;

	printf("학생의 수 : ");
	scanf("%d", &students);

	list = (int*)malloc(sizeof(int) * students);
	if (list == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	for (int i = 0; i < students; i++)
	{
		printf("학생 #%d 성적 : ", i + 1);
		scanf("%d", &list[i]);
	}

	for (int i = 0; i < students; i++)
	{
		sum += list[i];
	}
	printf("성적 평균 = %.2f\n", (double)sum / students);

	free(list);
}

int main(void)
{
	print();
	return 0;
}
