#include <stdio.h>
#include <math.h>

struct point
{
	int x;
	int y;
};

void printPoint()
{
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;

	printf("���� ��ǥ�� �Է��Ͻÿ�(x y) : ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("���� ��ǥ�� �Է��Ͻÿ�(x y) : ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;

	dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff));

	printf("�� �� ������ �Ÿ��� %lf�Դϴ�.\n", dist);
}

int main(void)
{
	printPoint();
	return 0;
}
