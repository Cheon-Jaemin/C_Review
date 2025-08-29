#include <stdio.h>
#include <stdlib.h>

void print_mallocsize()
{
	int* pi;
	double* pf;
	char* pc;

	pi = (int*)malloc(sizeof(int));
	pf = (double*)malloc(sizeof(double));
	pc = (char*)malloc(sizeof(char));

	if (pi == NULL || pf == NULL || pc == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	*pi = 100;
	*pf = 3.14;
	*pc = 'a';

	printf("pi의 출력 = %d\n", *pi);
	printf("pf의 출력 = %lf\n", *pf);
	printf("pc의 출력 = %c\n", *pc);

	free(pi);
	free(pf);
	free(pc);
}

int main(void)
{
	print_mallocsize();
	return 0;
}
