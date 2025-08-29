#include <stdio.h>
#include <time.h>

void arrAdd()
{
	int A[3][3];
	int B[3][3];
	int C[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%02d ", C[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	srand((unsigned)time(NULL));
	arrAdd();
	return 0;
}