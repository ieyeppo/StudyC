#include <stdio.h>

void swap(int* pa, int* pb);

int main(void)
{
	int a = 10, b = 20;

	printf("[main] a: %d, b : %d\n", a, b);
	swap(a, b);
	printf("[main-swapÈÄ] a: %d, b : %d\n", a, b);

	return 0;
}

void swap(int a, int b)
{
	printf("[swap] a: %d, b : %d\n", a, b);
	int temp;

	temp = a;
	a = b;
	b = temp;

	printf("[swapÈÄ] a: %d, b : %d\n", a, b);
}