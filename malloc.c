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
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}

	*pi = 100;
	*pf = 3.14;
	*pc = 'a';

	printf("pi�� ��� = %d\n", *pi);
	printf("pf�� ��� = %lf\n", *pf);
	printf("pc�� ��� = %c\n", *pc);

	free(pi);
	free(pf);
	free(pc);
}

int main(void)
{
	print_mallocsize();
	return 0;
}
