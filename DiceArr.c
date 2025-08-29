#include <stdio.h>
#include <time.h>

void dicefreq()
{
	int dice[6] = { 0 };

	for (int i = 0; i < 10000; i++)
	{
		++dice[rand() % 6];
	}

	printf("============\n");
	printf(" ¼ýÀÚ ºóµµ\n");
	printf("============\n");

	for (int i = 0; i < 6; i++)
	{
		printf("%3d   %3d\n", i + 1, dice[i]);
	}
}

int main(void)
{
	srand((unsigned)time(NULL));
	dicefreq();
	return 0;
}