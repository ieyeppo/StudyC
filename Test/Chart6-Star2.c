#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(void)
{
	int input, start = 0;

	while (1)
	{
		system("cls");
		printf("==========================================\n");
		printf("             Make the Stars\n");
		printf("           �� �ٷ� ������?\n");
		printf("         ** '0'�Է½� ����. **\n");
		printf("==========================================\n");
		printf("(Ȧ����)�Է� : ");
		scanf("%d", &input);

		if (input == 0) return;
		else if (input % 2 == 0)
		{
			printf("Ȧ���� �Է��ϼ���.\n");
			Sleep(2000);
			continue;
		}

		input /= 2;
		input++;

		printf("==========================================\n\n");
		printf("-------  ���̾Ƹ��  -------\n");
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
		for (int i = 1; i < input; i++)
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
		
		printf("-------  �𷡽ð�  -------\n");
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
		for (int i = 1; i < input; i++)
		{
			for (int j = input-1; j > i; j--)
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

		Sleep(5000);
	}
}