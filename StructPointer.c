#include <stdio.h>

struct student
{
	int num;
	char name[20];
	double grade;
};

void structPointer()
{
	struct student s = { 20030502 ,"�����", 4.3 };
	struct student* p;

	p = &s;

	printf("�й� = %d, �̸� = %s, ���� = %lf\n", s.num, s.name, s.grade);
	printf("�й� = %d, �̸� = %s, ���� = %lf\n", p->num, p->name, p->grade);
}

int main(void)
{
	structPointer();
	return 0;
}
