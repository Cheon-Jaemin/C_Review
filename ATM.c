#include <stdio.h>

void Balance(int money)
{
	printf("�ܾ� : %d\n", money);
}

int deposit(int money)
{
	int Plus;
	printf("�Ա� �ݾ��� �Է��Ͻÿ� : ");
	scanf("%d", &Plus);
	money += Plus;
	
	printf("�ܾ� : %d\n", money);
	return money;
}

int withdraw(int money)
{
	int Minus;
	printf("��� �ݾ��� �Է��Ͻÿ� : ");
	scanf("%d", &Minus);
	
	if (money >= Minus)
	{
		money -= Minus;
		printf("�ܾ� : %d\n", money);
	}
	else
	{
		printf("�ܾ��� �����մϴ�.\n");
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
		printf("<1> �ܾ�\n");
		printf("<2> �Ա�\n");
		printf("<3> ���\n");
		printf("<4> ����\n");
		printf("�޴��� �����Ͻÿ� : ");
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
			printf("�߸��� �Է��Դϴ�.\n");
			break;
		}
	}
}

int main(void)
{
	menu();
	return 0;
}