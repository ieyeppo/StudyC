#include <stdio.h>

int main(void)
{
	int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("---------------------------------------------------------------\n");
	printf("����\t\t������\t\t\t&����\t\t\t\t*����\t\t\t**����\n");
	printf("---------------------------------------------------------------\n");
	printf("  a\t\t%10d\t\t%u\n", a, &a);
	printf("  pi\t\t%10u\t\t%10u\t\t%10d\n", pi, &pi, *pi);
	printf("  ppi\t\t%10u\t\t%10u\t\t%10u\t\t%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("---------------------------------------------------------------\n");

	return 0;
}