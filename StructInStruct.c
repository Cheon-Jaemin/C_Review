#include <stdio.h>
#include <math.h>

struct point
{
	int x, y; 
};

struct rect
{
	struct point p1, p2;
};

void printRect()
{
	struct rect r;
	int w, h, area, peri;

	while (1)
	{
		printf("���� ����� ��ǥ�� �Է��Ͻÿ�. : ");
		scanf("%d %d", &r.p1.x, &r.p1.y);
		
		printf("������ �ϴ��� ��ǥ�� �Է��Ͻÿ�. : ");
		scanf("%d %d", &r.p2.x, &r.p2.y);

		w = r.p2.x - r.p1.x;
		h = r.p1.y - r.p2.y;

		if (r.p1.x == r.p2.x || r.p1.y == r.p2.y)
		{
			printf("�����Դϴ�. �ٽ� �Է��ϼ���.\n");
			continue;
		}
		/*if (r.p1.x > r.p2.x || r.p2.y > r.p1.y)
		{
			printf("���� ��ܰ� ������ �ϴ� ��ǥ�� �ٽ� Ȯ���ϼ���.\n");
			continue;
		}*/

		if (w < 0)
		{
			w = abs(w);
		}
		if (h < 0)
		{
			h = abs(h);
		}
		
		area = w * h;
		peri = 2 * w + 2 * h;
		printf("������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, peri);
	}
}


int main(void)
{
	printRect();
	return 0;
}
