#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d | %d", i, j);
		}
		printf("\n");
	}
	printf("\n\n");

	int input;

	while (1)
	{
		printf("0 : break | 1 : continue | �� �� ���� : �ݺ������");
		printf("�Է� : ");
		scanf("%d", &input);
		if (input == 0)  break;
		else if (input == 1) continue;
		printf("�Է��� ���� : %d\n", input);
	}

	return 0;
}