#include <stdio.h>

double get_double()
{
	double a;
	printf("좌표를 입력하시오.\n");
	scanf("%lf", &a);
	return a;
}

void print_quadrant(double x, double y)
{
	if (x > 0 && y > 0)
	{
		printf("(%.2lf, %.2lf)는 1사분면 입니다.\n", x, y);
	}
	else if (x < 0 && y > 0)
	{
		printf("(%.2lf, %.2lf)는 2사분면 입니다.\n", x, y);
	}
	else if (x < 0 && y < 0)
	{
		printf("(%.2lf, %.2lf)는 3사분면 입니다.\n", x, y);
	}
	else if (x > 0 && y < 0)
	{
		printf("(%.2lf, %.2lf)는 4사분면 입니다.\n", x, y);
	}
	else if (x == 0 && y == 0)
	{
		printf("원점입니다.\n");
	}
	else
	{
		printf("올바르지 않은 좌표입니다.\n");
	}
}

int main(void)
{
	double x, y;
	x = get_double();
	y = get_double();

	print_quadrant(x, y);

	return 0;
}
