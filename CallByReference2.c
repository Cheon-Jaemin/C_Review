#include <stdio.h>

void square_array(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = a[i] * a[i];
	}
}

void print_array(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%3d ", a[i]);
	}
	printf("\n");
}

int main(void)
{
	int list[7] = { 1, 2, 3, 4, 5, 6, 7 };

	print_array(list, 7);
	square_array(list, 7);
	print_array(list, 7);
	
	return 0;
}
