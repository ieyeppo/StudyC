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
	printf("\t   ����\n");
	printf("============================\n");
	printf("    ��깮�� �Է��ϼ���.\n");
	printf("       Ex) 1 + 1  \n");
	printf("  0+0 �Է½� ���α׷� ����.\n");
	printf("============================\n");
	printf("�Է� : ");
}

void isReturn(char op, int num1, int num2)
{
	if (op == '+' && num1 == 0 && num2 == 0)
	{
		printf("���α׷� ����.\n");
		return;
	}
}

void result(char op, int num1, int num2)
{
	printf("========================================================\n");
	printf("[���] | ");

	switch (op)
	{
	case '+':
		printf("%d + %d = %d �Դϴ�.\n", num1, num2, (num1 + num2));
		break;
	case '-':
		printf("%d - %d = %d �Դϴ�.\n", num1, num2, (num1 - num2));
		break;
	case '*':
		printf("%d * %d = %d �Դϴ�.\n", num1, num2, (num1 * num2));
		break;
	case '/':
		if (num2 == 0)
			printf("�߸��� �����Դϴ�. �ٽ��Է��ϼ���.\n");
		else
			printf("%d / %d = �� : %d, ������ : %d �Դϴ�.\n", num1, num2, num1 / num2, num1 % num2);
		break;
	}
	printf("========================================================\n");

	Sleep(3000);
}