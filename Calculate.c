#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932384626433832795

void factorial()
{
	int n;
	int sum = 1;
	printf("정수를 입력하시오.\n");
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		sum *= (i + 1);
	}

	printf("결과 : %d\n", sum);
}

void sine()
{
	int degree;
	double radian;
	printf("각도를 입력하시오.\n");
	scanf("%d", &degree);

	radian = sin((PI * degree) / 180.0);

	printf("결과 : %lf\n", radian);
}

void logBase10()
{
	double x;
	double result;
	printf("실수를 입력하시오.");
	scanf("%lf", &x);
	
	result = log10(x);

	printf("결과 : %lf\n", result);
}

void squareRoot()
{
	double x;
	double result;
	printf("실수를 입력하세요.");
	scanf("%lf", &x);

	result = sqrt(x);

	printf("결과 : %lf\n", result);
}

void Menu()
{
	int i;

	while (1)
	{
		printf("1. 팩토리얼\n");
		printf("2. 싸인\n");
		printf("3. 로그(base 10)\n");
		printf("4. 제곱근\n");
		printf("5. 종료\n");
		printf("선택해주세요 : ");
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