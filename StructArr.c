#include <stdio.h>
#define SIZE 3

struct student
{
	int num;
	char name[20];
	double grade;
};

void StructArr()
{
	struct student arr[SIZE];
	
	for (int i = 0; i < SIZE; i++)
	{
		printf("학번을 입력하시오. : ");
		scanf("%d", &arr[i].num);
		printf("이름을 입력하시오. : ");
		scanf("%s", arr[i].name);
		printf("학점을 입력하시오. : ");
		scanf("%lf", &arr[i].grade);
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("학번 : %d, 이름 : %s, 학점 : %lf\n", arr[i].num, arr[i].name, arr[i].grade);
	}
}

int main(void)
{
	StructArr();
	return 0;
}
