#include <stdio.h>

void arrMean()
{
	int sum = 0;
	double mean;
	int student[5];

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 학생의 성적을 입력하시오. : ", i + 1);
		scanf("%d", &student[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		sum += student[i];
	}

	mean = (double)sum / 5;

	printf("성적 평균 = %lf\n", mean);
}

int main(void)
{
	arrMean();
	return 0;
}