#include <stdio.h>

void variableAddress()
{

	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i�� �ּ� : %u\n", &i);
	printf("c�� �ּ� : %u\n", &c);
	printf("f�� �ּ� : %u\n", &f);

}

int main(void)
{
	variableAddress();
	return 0;
}