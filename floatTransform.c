#include <stdio.h>

int round(double f)
{
	double a = (f + 0.5);
	return (int)a;
}

int main(void)
{
	printf("%d", round(6.99));
	return 0;
}