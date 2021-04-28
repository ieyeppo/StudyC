#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <Windows.h>

int main(void)
{
	int num1 = 0, num2 = 0;
	char operator;

	while (1)
	{
		system("cls");

		printf("============================\n");
		printf("\t   계산기\n");
		printf("============================\n");
		printf("    계산문을 입력하세요.\n");
		printf("       Ex) 1 + 1  \n");
		printf("연산문 미 입력시 프로그램 종료.\n");
		printf("============================\n");
		printf("입력 : ");
		scanf("%d%c%d", &num1, &operator, &num2);

		system("cls");

		//printf("%d | %c | %d\n", num1, operator, num2);

		printf("========================================================\n");
		printf("[결과] | ");

		switch (operator)
		{
		case '+':
			printf("%d + %d = %d 입니다.\n", num1, num2, (num1 + num2));
			break;
		case '-': 
			printf("%d - %d = %d 입니다.\n", num1, num2, (num1 - num2));
			break;
		case '*':
			printf("%d * %d = %d 입니다.\n", num1, num2, (num1 * num2));
			break;
		case '/' :
			if (num2 == 0) 
				printf("잘못된 연산입니다. 다시입력하세요.\n");
			else 
				printf("%d / %d = 몫 : %d, 나머지 : %d 입니다.\n", num1, num2, num1 / num2, num1 % num2);
			break;
		default: 
			return;
		}
		printf("========================================================\n");
		Sleep(3000);
	}

	return 0;
}