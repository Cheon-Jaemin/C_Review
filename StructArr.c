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
		printf("�й��� �Է��Ͻÿ�. : ");
		scanf("%d", &arr[i].num);
		printf("�̸��� �Է��Ͻÿ�. : ");
		scanf("%s", arr[i].name);
		printf("������ �Է��Ͻÿ�. : ");
		scanf("%lf", &arr[i].grade);
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("�й� : %d, �̸� : %s, ���� : %lf\n", arr[i].num, arr[i].name, arr[i].grade);
	}
}

int main(void)
{
	StructArr();
	return 0;
}
