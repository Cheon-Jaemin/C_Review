#include <stdio.h>

int binary_search(int list[], int n, int key)
{
	int low, high, middle;
	low = 0;
	high = n - 1;
	while (low <= high)
	{
		printf("[%d %d]\n", low, high);
		middle = (low + high) / 2;
		if (key == list[middle])
		{
			return middle;
		}
		else if (key > list[middle])
		{
			low = middle + 1;
		}
		else
		{
			high = middle - 1;
		}
	}
	return -1;
}

int main(void)
{
	int key;
	int grade[] = { 2, 6, 11, 14, 24, 27, 37, 44, 47, 55, 66, 88, 98, 101 };
	printf("탐색할 값을 입력하시오.");
	scanf("%d", &key);
	printf("탐색 결과 = grade[%d]\n", binary_search(grade, sizeof(grade) / sizeof(grade[0]), key));

	return 0;
}
