#include <stdio.h>

struct student
{
	int num;
	char name[10];
	double grade;
};

void printStudent()
{
	struct student s;
	
	printf("�й��� �Է��Ͻÿ�. : ");
	scanf("%d", &s.num);

	printf("�̸��� �Է��Ͻÿ�. : ");
	scanf("%s", s.name);

	printf("������ �Է��Ͻÿ�. : ");
	scanf("%lf", &s.grade);

	printf("�й� : %d\n", s.num);
	printf("�̸� : %s\n", s.name);
	printf("���� : %lf\n", s.grade);
}

int main(void)
{
	printStudent();
	return 0;
}
