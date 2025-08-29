#include <stdio.h>

struct date
{
	int month, day, year;
};

struct student
{
	int num;
	char name[20];
	double grade;
	struct date* dob;
};

void print(void)
{
	struct date d = { 05, 02, 2003 };
	struct student s = { 20030502, "김미진", 4.5 };
	
	s.dob = &d;

	printf("학번 : %d\n", s.num);
	printf("이름 : %s\n", s.name);
	printf("학번 : %lf\n", s.grade);
	printf("생년월일 : %d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);
}

int main(void)
{
	print();
	return 0;
}
