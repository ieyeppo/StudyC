#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <Windows.h>

void print();
void calculator();
void isReturn(char, int, int);
void result(char, int, int);

int main(void)
{
	calculator();

	return 0;
}

void calculator()
{
	int num1 = 0, num2 = 0;
	char op;

	while (1)
	{
		print();

		scanf("%d%c%d", &num1, &op, &num2);

		isReturn(op, num1, num2);

		result(op, num1, num2);
	}
}

void print()
{
	system("cls");

	printf("============================\n");
	printf("\t   계산기\n");
	printf("============================\n");
	printf("    계산문을 입력하세요.\n");
	printf("       Ex) 1 + 1  \n");
	printf("  0+0 입력시 프로그램 종료.\n");
	printf("============================\n");
	printf("입력 : ");
}

void isReturn(char op, int num1, int num2)
{
	if (op == '+' && num1 == 0 && num2 == 0)
	{
		printf("프로그램 종료.\n");
		return;
	}
}

void result(char op, int num1, int num2)
{
	printf("========================================================\n");
	printf("[결과] | ");

	switch (op)
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
	case '/':
		if (num2 == 0)
			printf("잘못된 연산입니다. 다시입력하세요.\n");
		else
			printf("%d / %d = 몫 : %d, 나머지 : %d 입니다.\n", num1, num2, num1 / num2, num1 % num2);
		break;
	}
	printf("========================================================\n");

	Sleep(3000);
}