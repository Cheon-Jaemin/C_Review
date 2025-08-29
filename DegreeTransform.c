#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932384626433832795

double sin_degree(double degree)
{
	return sin((PI * degree) / 180.0);
}

void print_sin()
{
	for (int i = 0; i <= 180; i = i + 10)
	{
		printf("degree : %d = radian : %lf\n", i, sin_degree(i));
	}
}

int main(void)
{
	print_sin();
	return 0;
}
