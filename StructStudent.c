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
	strcpy(s.name, "김미진");
	s.grade = 4.5;

	printf("학번 : %d\n", s.num);
	printf("이름 : %s\n", s.name);
	printf("학점 : %lf\n", s.grade);

	printf("구조체의 사이즈 : %u\n", sizeof(s));

	printf("학번 : %u\n", &s.num);
	printf("이름 : %u\n", &s.name);
	printf("학점 : %u\n", &s.grade);
}

int main(void)
{
	printStudent();
	return 0;
}
