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
		printf("           몇 줄로 만들까요?\n");
		printf("         ** '0'입력시 종료. **\n");
		printf("==========================================\n");
		printf("(홀수만)입력 : ");
		scanf("%d", &input);

		if (input == 0) return;
		else if (input % 2 == 0)
		{
			printf("홀수만 입력하세요.\n");
			Sleep(2000);
			continue;
		}

		input /= 2;
		input++;

		printf("==========================================\n\n");
		printf("-------  다이아몬드  -------\n");
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
		
		printf("-------  모래시계  -------\n");
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