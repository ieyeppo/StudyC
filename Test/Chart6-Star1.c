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
		printf("       �� �� �Ƕ�̵带 ������?\n");
		printf("         ** '0'�Է½� ����. **\n");
		printf("==========================================\n");
		printf("�Է� : ");
		scanf("%d", &input);

		if (input == 0) return;

		printf("-------  �Ƕ�̵�  -------\n");
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
		printf("-------  �� �Ƕ�̵�  -------\n");
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