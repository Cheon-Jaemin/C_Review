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
	struct student s = { 20030502, "�����", 4.5 };
	
	s.dob = &d;

	printf("�й� : %d\n", s.num);
	printf("�̸� : %s\n", s.name);
	printf("�й� : %lf\n", s.grade);
	printf("������� : %d�� %d�� %d��\n", s.dob->year, s.dob->month, s.dob->day);
}

int main(void)
{
	print();
	return 0;
}
