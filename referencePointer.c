#include <stdio.h>

void pointerDirec()
{
	int i = 10;
	int* pi = &i;

	printf("i = %d, pi = %u\n", i, pi);
	(*pi)++;
	printf("i = %d, pi = %u\n", i, pi);

	printf("i = %d, pi = %u\n", i, pi);
	*pi++;
	printf("i = %d, pi = %u\n", i, pi);
	printf("i = %d", *pi);
}

int main(void)
{
	pointerDirec();
	return 0;
}
