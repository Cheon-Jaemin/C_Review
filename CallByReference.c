#include <stdio.h>

int get_average(int scores[], int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += scores[i];
	}

	return sum / n;
}

int main(void)
{
	int scores[5] = { 1, 2, 3, 4, 5 };
	int avg;

	avg = get_average(scores, 5);
	printf("평균은 %d입니다.\n", avg);
	
	return 0;
}
