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

	s.num = 20030502;
	strcpy(s.name, "�����");
	s.grade = 4.5;

	printf("�й� : %d\n", s.num);
	printf("�̸� : %s\n", s.name);
	printf("���� : %lf\n", s.grade);

	printf("����ü�� ������ : %u\n", sizeof(s));

	printf("�й� : %u\n", &s.num);
	printf("�̸� : %u\n", &s.name);
	printf("���� : %u\n", &s.grade);
}

int main(void)
{
	printStudent();
	return 0;
}
