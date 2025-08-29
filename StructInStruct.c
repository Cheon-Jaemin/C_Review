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
		printf("왼쪽 상단의 좌표를 입력하시오. : ");
		scanf("%d %d", &r.p1.x, &r.p1.y);
		
		printf("오른쪽 하단의 좌표를 입력하시오. : ");
		scanf("%d %d", &r.p2.x, &r.p2.y);

		w = r.p2.x - r.p1.x;
		h = r.p1.y - r.p2.y;

		if (r.p1.x == r.p2.x || r.p1.y == r.p2.y)
		{
			printf("선분입니다. 다시 입력하세요.\n");
			continue;
		}
		/*if (r.p1.x > r.p2.x || r.p2.y > r.p1.y)
		{
			printf("왼쪽 상단과 오른쪽 하단 좌표를 다시 확인하세요.\n");
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
		printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);
	}
}


int main(void)
{
	printRect();
	return 0;
}
