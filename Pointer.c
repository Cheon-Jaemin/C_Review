#include <stdio.h>

void Pointer()
{
	int i = 3000;
	int* p = &i;

	printf("p = %u\n", p);
	printf("&i = %u\n\n", &i);
	printf("i = %d\n", i);
	printf("*p = %d\n", *p);
}

int main(void)
{
	Pointer();
	return 0;
}