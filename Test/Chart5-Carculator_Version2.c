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
		printf("\t   ����\n");
		printf("============================\n");
		printf("    ��깮�� �Է��ϼ���.\n");
		printf("       Ex) 1 + 1  \n");
		printf("  0+0 �Է½� ���α׷� ����.\n");
		printf("============================\n");
		printf("�Է� : ");
		scanf("%d%c%d", &num1, &operator, &num2);

		if (operator == '+' && num1 == 0 && num2 == 0)
		{
			printf("���α׷� ����.");
			return;
		}

		printf("========================================================\n");
		printf("[���] | ");

		switch (operator)
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
		case '/' :
			if (num2 == 0) 
				printf("�߸��� �����Դϴ�. �ٽ��Է��ϼ���.\n");
			else 
				printf("%d / %d = �� : %d, ������ : %d �Դϴ�.\n", num1, num2, num1 / num2, num1 % num2);
			break;
		}
		printf("========================================================\n");
		Sleep(3000);
	}

	return 0;
}