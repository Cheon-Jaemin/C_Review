#include <stdio.h>

double get_double()
{
	double a;
	printf("��ǥ�� �Է��Ͻÿ�.\n");
	scanf("%lf", &a);
	return a;
}

void print_quadrant(double x, double y)
{
	if (x > 0 && y > 0)
	{
		printf("(%.2lf, %.2lf)�� 1��и� �Դϴ�.\n", x, y);
	}
	else if (x < 0 && y > 0)
	{
		printf("(%.2lf, %.2lf)�� 2��и� �Դϴ�.\n", x, y);
	}
	else if (x < 0 && y < 0)
	{
		printf("(%.2lf, %.2lf)�� 3��и� �Դϴ�.\n", x, y);
	}
	else if (x > 0 && y < 0)
	{
		printf("(%.2lf, %.2lf)�� 4��и� �Դϴ�.\n", x, y);
	}
	else if (x == 0 && y == 0)
	{
		printf("�����Դϴ�.\n");
	}
	else
	{
		printf("�ùٸ��� ���� ��ǥ�Դϴ�.\n");
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
