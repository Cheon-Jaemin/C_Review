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
	printf("플레이어 첫번째 : %d\n", a);
	b = roll_dice();
	printf("플레이어 두번째 : %d\n", b);
	c = roll_dice();
	printf("플레이어 세번째 : %d\n", c);
	sum = a + b + c;

	return sum;
}

int COM()
{
	int a, b, c, sum = 0;
	a = roll_dice();
	printf("컴퓨터 첫번째 : %d\n", a);
	b = roll_dice();
	printf("컴퓨터 두번째 : %d\n", b);
	c = roll_dice();
	printf("컴퓨터 세번째 : %d\n", c);
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
		printf("플레이어 : %d, COM : %d\n", P, C);
		printf("플레이어 승리!\n");
	}
	else if (P < C)
	{
		printf("플레이어 : %d, COM : %d\n", P, C);
		printf("컴퓨터 승리!\n");
	}
	else
	{
		printf("플레이어 : %d, COM : %d\n", P, C);
		printf("비겼습니다!\n");
	}
}

int main(void)
{
	srand((unsigned)time(NULL));
	roll_result();

	return 0;
}
