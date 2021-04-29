#include <stdio.h>

int main(void)
{
	sum();

	return 0;
}

void sum()
{
	int a = 10, b = 20;
	int res;

	res = a + b;
	printf("res : %d\n", res);
}