#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else if(a < b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

int min(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else if(a < b)
	{
		return a;
	}
	else
	{
		return a;
	}
}

int get_int()
{
	int a;
	printf("������ �Է��ϼ���.\n");
	scanf("%d", &a);
	
	return a;
}

int main(void)
{
	int a = get_int();
	int b = get_int();

	printf("�� ���� �� : %d\n", add(a, b));
	printf("�ִ밪 : %d\n", max(a, b));
	printf("�ּڰ� : %d\n", min(a, b));
	
	return 0;
}
