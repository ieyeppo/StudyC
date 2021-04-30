#include <stdio.h>

int main(void)
{
	int arr[5] = { 10,20,30,40,50 };
	int size = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	printf("\n[역순 출력]\n");

	for (int i = size-1; i >= 0; i--) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}