#include <stdio.h>

int main(void)
{
	int ary[5];

	printf("  ary�� ��\t: %u\n", ary);
	printf("  ary�� �ּ�\t: %u\n", &ary);
	printf("  ary + 1\t: %u\n", ary + 1);
	printf("  &ary + 1\t: %u\n", &ary + 1);

	return 0;
}