#include <stdio.h>

int main(void)
{
	int arr[5];
	char arr2[5] = { 'a','b','c' };

	for (int i = 0; i < 3; i++)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("arr1[%d] = %d\n", i, arr[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("arr2[%d] = %c\n", i, arr2[i]);
	} 

	return 0;
}