#include <stdio.h>
#include <time.h>

void selectionSort()
{
	int list[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		list[i] = rand() % 10;
	}

	for (int i = 0; i < 10; i++)
	{
		int leastidx = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (list[j] < list[leastidx])
			{
				leastidx = j;
			}
		}
		int temp = list[i];
		list[i] = list[leastidx];
		list[leastidx] = temp;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");
}

int main(void)
{
	srand((unsigned)time(NULL));
	selectionSort();
	return 0;
}