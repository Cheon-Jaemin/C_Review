#include <stdio.h>

void Balance(int money)
{
	printf("잔액 : %d\n", money);
}

int deposit(int money)
{
	int Plus;
	printf("입금 금액을 입력하시오 : ");
	scanf("%d", &Plus);
	money += Plus;
	
	printf("잔액 : %d\n", money);
	return money;
}

int withdraw(int money)
{
	int Minus;
	printf("출금 금액을 입력하시오 : ");
	scanf("%d", &Minus);
	
	if (money >= Minus)
	{
		money -= Minus;
		printf("잔액 : %d\n", money);
	}
	else
	{
		printf("잔액이 부족합니다.\n");
	}

	return money;
}

void menu()
{
	int money = 0;

	while (1)
	{
		int i;
		
		printf("************ATM************\n");
		printf("<1> 잔액\n");
		printf("<2> 입금\n");
		printf("<3> 출금\n");
		printf("<4> 종료\n");
		printf("메뉴를 선택하시오 : ");
		scanf("%d", &i);

		switch (i)
		{
		case 1:
			Balance(money);
			break;
		case 2:
			money = deposit(money);
			break;
		case 3:
			money = withdraw(money);
			break;
		case 4:
			return;
		default :
			printf("잘못된 입력입니다.\n");
			break;
		}
	}
}

int main(void)
{
	menu();
	return 0;
}