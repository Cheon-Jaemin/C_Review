#include <stdio.h>

struct student
{
	int num;
	char name[20];
	double grade;
};

void structPointer()
{
	struct student s = { 20030502 ,"김미진", 4.3 };
	struct student* p;

	p = &s;

	printf("학번 = %d, 이름 = %s, 학점 = %lf\n", s.num, s.name, s.grade);
	printf("학번 = %d, 이름 = %s, 학점 = %lf\n", p->num, p->name, p->grade);
}

int main(void)
{
	structPointer();
	return 0;
}
