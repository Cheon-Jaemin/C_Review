#include <stdio.h>
#include <time.h>

void arrRand()
{
	int scores[5];

	for (int i = 0; i < 5; i++)
	{
		scores[i] = rand() % 100;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("scores[%d] = %d\n", i, scores[i]);
	}
}

int main(void)
{
	srand((unsigned)time(NULL));
	arrRand();
	return 0;
}