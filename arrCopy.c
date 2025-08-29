#include <stdio.h>
#define SIZE 5

void array_copy(int a[], int b[], int size)
{
	for (int i = 0; i < size; i++)
	{
		b[i] = a[i];
	}
}

void array_print(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
}

int main(void)
{
	int a[SIZE] = { 1, 2, 3, 4, 5 };
	int b[SIZE] = { 0 };

	array_print(a, SIZE);
	printf("\n");
	array_print(b, SIZE);
	printf("\n");

	array_copy(a, b, SIZE);
	
	array_print(a, SIZE);
	printf("\n");
	array_print(b, SIZE);

	return 0;
}

