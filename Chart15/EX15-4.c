#include <stdio.h>

int main(void)
{
	int ary[5];

	printf("  ary의 값\t: %u\n", ary);
	printf("  ary의 주소\t: %u\n", &ary);
	printf("  ary + 1\t: %u\n", ary + 1);
	printf("  &ary + 1\t: %u\n", &ary + 1);

	return 0;
}