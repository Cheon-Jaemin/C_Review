#include <stdio.h>
#define FLOOR 4
#define LAKE 2

void SomangVilla()
{
	int Somang[FLOOR][LAKE];
	int floorSum[FLOOR] = { 0 };

	for (int i = 0; i < FLOOR; i++)
	{
		for (int j = 0; j < LAKE; j++)
		{
			printf("%d층 %d호 인구입력 : ", i + 1, j + 1);
			scanf("%d", &Somang[i][j]);
			floorSum[i] += Somang[i][j];
		}
	}

	for (int i = 0; i < FLOOR; i++)
	{
		printf("%d층의 전체 인구 : %d\n", i + 1, floorSum[i]);
	}
}

int main(void)
{
	SomangVilla();
	return 0;
}
