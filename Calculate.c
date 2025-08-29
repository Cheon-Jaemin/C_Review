#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932384626433832795

void factorial()
{
	int n;
	int sum = 1;
	printf("������ �Է��Ͻÿ�.\n");
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		sum *= (i + 1);
	}

	printf("��� : %d\n", sum);
}

void sine()
{
	int degree;
	double radian;
	printf("������ �Է��Ͻÿ�.\n");
	scanf("%d", &degree);

	radian = sin((PI * degree) / 180.0);

	printf("��� : %lf\n", radian);
}

void logBase10()
{
	double x;
	double result;
	printf("�Ǽ��� �Է��Ͻÿ�.");
	scanf("%lf", &x);
	
	result = log10(x);

	printf("��� : %lf\n", result);
}

void squareRoot()
{
	double x;
	double result;
	printf("�Ǽ��� �Է��ϼ���.");
	scanf("%lf", &x);

	result = sqrt(x);

	printf("��� : %lf\n", result);
}

void Menu()
{
	int i;

	while (1)
	{
		printf("1. ���丮��\n");
		printf("2. ����\n");
		printf("3. �α�(base 10)\n");
		printf("4. ������\n");
		printf("5. ����\n");
		printf("�������ּ��� : ");
		scanf("%d", &i);

		switch (i)
		{
		case 1:
			factorial();
			break;
		case 2:
			sine();
			break;
		case 3:
			logBase10();
			break;
		case 4:
			squareRoot();
			break;
		case 5:
			return;
		}
	}
}

int main(void)
{
	Menu();
	return 0;
}