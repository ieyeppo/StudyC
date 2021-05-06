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
	printf("\t   ����\n");
	printf("============================\n");
	printf("    ��깮�� �Է��ϼ���.\n");
	printf("       Ex) 1 + 1  \n");
	printf("  0+0 �Է½� ���α׷� ����.\n");
	printf("============================\n");
	printf("�Է� : ");
	scanf("%d%c%d", &num1, &op, &num2);
}

void result(int* num1, char* op, int* num2) 
{
	if (*op == '+' && *num1 == 0 && *num2 == 0)
	{
		printf("���α׷� ����.");
		return;
	}

	printf("========================================================\n");
	printf("[���] | ");

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
	printf("%d + %d = %d �Դϴ�.\n", *num1, *num2, (*num1 + *num2));
}

void minus(int* num1, int* num2)
{
	printf("%d - %d = %d �Դϴ�.\n", *num1, *num2, (*num1 - *num2));
}

void mul(int* num1, int* num2)
{
	printf("%d * %d = %d �Դϴ�.\n", *num1, *num2, (*num1 * *num2));
}

void div(int* num1, int* num2)
{
	if (*num2 == 0)
		printf("�߸��� �����Դϴ�. �ٽ��Է��ϼ���.\n");
	else
		printf("%d / %d = �� : %d, ������ : %d �Դϴ�.\n", *num1, *num2, *num1 / *num2, *num1 % *num2);
}