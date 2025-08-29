#include <stdio.h>
#include <time.h>

void twochanelarr()
{
	int arr[3][5];
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%02d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{	
	srand((unsigned)time(NULL));
	twochanelarr();
	return 0;
}
