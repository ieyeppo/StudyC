#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <Windows.h>

int main(void) {
	int input;

	while (1)
	{
		system("cls");
		printf("==========================================\n");
		printf("             Make the Stars\n");
		printf("       몇 줄 피라미드를 만들까요?\n");
		printf("         ** '0'입력시 종료. **\n");
		printf("==========================================\n");
		printf("입력 : ");
		scanf("%d", &input);

		if (input == 0) return;

		printf("-------  피라미드  -------\n");
		for (int i = 0; i < input; i++)
		{
			for (int j = input - 1; j > i; j--)
			{
				printf(" ");
			}
			for (int j = 0; j < 2 * i + 1; j++) 
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n\n");
		printf("-------  역 피라미드  -------\n");
		for (int i = 0; i < input; i++) 
		{
			for (int j = 0; j < i; j++) 
			{
				printf(" ");
			}
			for (int j = 2 * input - 1; j > 2 * i; j--) 
			{
				printf("*");
			}
			printf("\n");
		}
		printf("\n\n");
		
		Sleep(5000);
	}
}