#include <stdio.h>

void arrMean()
{
	int sum = 0;
	double mean;
	int student[5];

	for (int i = 0; i < 5; i++)
	{
		printf("%d��° �л��� ������ �Է��Ͻÿ�. : ", i + 1);
		scanf("%d", &student[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		sum += student[i];
	}

	mean = (double)sum / 5;

	printf("���� ��� = %lf\n", mean);
}

int main(void)
{
	arrMean();
	return 0;
}