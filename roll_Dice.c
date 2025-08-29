#include <stdio.h>
#include <time.h>

int roll_dice()
{
	int dice = (rand() % 6) + 1;

	return dice;
}

int Player()
{
	int a, b, c, sum = 0;
	a = roll_dice();
	printf("�÷��̾� ù��° : %d\n", a);
	b = roll_dice();
	printf("�÷��̾� �ι�° : %d\n", b);
	c = roll_dice();
	printf("�÷��̾� ����° : %d\n", c);
	sum = a + b + c;

	return sum;
}

int COM()
{
	int a, b, c, sum = 0;
	a = roll_dice();
	printf("��ǻ�� ù��° : %d\n", a);
	b = roll_dice();
	printf("��ǻ�� �ι�° : %d\n", b);
	c = roll_dice();
	printf("��ǻ�� ����° : %d\n", c);
	sum = a + b + c;

	return sum;
}

void roll_result()
{
	int P, C;
	P = Player();
	C = COM();

	if (P > C)
	{
		printf("�÷��̾� : %d, COM : %d\n", P, C);
		printf("�÷��̾� �¸�!\n");
	}
	else if (P < C)
	{
		printf("�÷��̾� : %d, COM : %d\n", P, C);
		printf("��ǻ�� �¸�!\n");
	}
	else
	{
		printf("�÷��̾� : %d, COM : %d\n", P, C);
		printf("�����ϴ�!\n");
	}
}

int main(void)
{
	srand((unsigned)time(NULL));
	roll_result();

	return 0;
}
