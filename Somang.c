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
			printf("%d�� %dȣ �α��Է� : ", i + 1, j + 1);
			scanf("%d", &Somang[i][j]);
			floorSum[i] += Somang[i][j];
		}
	}

	for (int i = 0; i < FLOOR; i++)
	{
		printf("%d���� ��ü �α� : %d\n", i + 1, floorSum[i]);
	}
}

int main(void)
{
	SomangVilla();
	return 0;
}
