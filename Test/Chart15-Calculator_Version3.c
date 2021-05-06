#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <Windows.h>

int main(void)
{
	int *num1 = 0, *num2 = 0;
	char* op;

	while (1)
	{
		system("cls");

		input(*num1, *op, *num2);
		result(*num1, *op, *num2);

		Sleep(3000);
	}

	return 0;
}

void input(int* num1, char* op, int* num2)
{
	printf("============================\n");
	printf("\t   계산기\n");
	printf("============================\n");
	printf("    계산문을 입력하세요.\n");
	printf("       Ex) 1 + 1  \n");
	printf("  0+0 입력시 프로그램 종료.\n");
	printf("============================\n");
	printf("입력 : ");
	scanf("%d%c%d", &num1, &op, &num2);
}

void result(int* num1, char* op, int* num2) 
{
	if (*op == '+' && *num1 == 0 && *num2 == 0)
	{
		printf("프로그램 종료.");
		return;
	}

	printf("========================================================\n");
	printf("[결과] | ");

	switch (*op)
	{
	case '+':sum(*num1, *num2); break;
	case '-':minus(*num1, *num2); break;
	case '*':mul(*num1, *num2); break;
	case '/':div(*num1, *num2); break;
	}
	printf("========================================================\n");
}

void sum(int* num1, int* num2)
{
	printf("%d + %d = %d 입니다.\n", *num1, *num2, (*num1 + *num2));
}

void minus(int* num1, int* num2)
{
	printf("%d - %d = %d 입니다.\n", *num1, *num2, (*num1 - *num2));
}

void mul(int* num1, int* num2)
{
	printf("%d * %d = %d 입니다.\n", *num1, *num2, (*num1 * *num2));
}

void div(int* num1, int* num2)
{
	if (*num2 == 0)
		printf("잘못된 연산입니다. 다시입력하세요.\n");
	else
		printf("%d / %d = 몫 : %d, 나머지 : %d 입니다.\n", *num1, *num2, *num1 / *num2, *num1 % *num2);
}