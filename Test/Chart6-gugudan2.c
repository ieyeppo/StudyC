#include <stdio.h>

int main(void)
{
	printf("==========================================\n");
	printf("              구   구   단\n");
	printf("         전체 구구단을 출력합니다.\n");
	printf("==========================================\n");
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%2d x %2d = %2d ", i, j, i * j);
		}
		printf("\n");
	}
	printf("==========================================\n");
}