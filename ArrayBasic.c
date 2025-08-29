#include <stdio.h>

void ArrBasic()
{
	int scores[5];

	for (int i = 0; i < 5; i++)
	{
		scores[i] = 10 * (i + 1);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("scores[%d] = %d\n", i, scores[i]);
	}
}

int main(void)
{
	ArrBasic();
	return 0;
}