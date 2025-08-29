#include <stdio.h>

void variableAddress()
{

	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i狼 林家 : %u\n", &i);
	printf("c狼 林家 : %u\n", &c);
	printf("f狼 林家 : %u\n", &f);

}

int main(void)
{
	variableAddress();
	return 0;
}