#include <stdio.h>

void movieReserve()
{
	char c;
	int choice;
	int movie[10] = { 0 };
	while (1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�?(y or n)");
		scanf(" %c", &c);

		if (c == 'n')
		{
			break;
		}
		else if (c == 'y') 
		{
			printf("========================\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("========================\n");
			for (int i = 0; i < 10; i++)
			{
				printf("%d ", movie[i]);
			}
			printf("\n");
			printf("�� ��° �¼��� �����Ͻðڽ��ϱ�?");
			scanf("%d", &choice);

			if (movie[choice - 1] == 0)
			{
				printf("����Ǿ����ϴ�.\n");
				movie[choice - 1] = 1;
			}
			else
			{
				printf("�̹� ����� �ڸ��Դϴ�.\n");
			}
		}
	}
}

int main(void)
{
	movieReserve();
	return 0;
}