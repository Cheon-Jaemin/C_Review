#include <stdio.h>

void arrPointerIdx()
{
	int a[] = { 10, 20, 30, 40, 50 };
	printf("a = %u\n", a);
	printf("a + 1 = %u\n", a + 1);
	printf("*a = %d\n", *a);
	printf("*(a + 1) = %d\n", *(a + 1));
}

int main(void)
{
	arrPointerIdx();
	return 0;
}
