#include <stdio.h>

void ValueChange()
{
	int x = 10, y = 20;
	int* p;

	p = &x;
	printf("p = %u\n", p);
	printf("*p = %d\n\n", *p);

	p = &y;
	printf("p = %u\n", p);
	printf("*p = %d\n\n", *p);
}

int main(void)
{
	ValueChange();
	return 0;
}
