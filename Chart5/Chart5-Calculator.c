#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <Windows.h>

int main(void)
{
	int num1, num2;
	int input;

	while (1) 
	{
		system("cls");

		printf("===========================\n");
		printf("\t   ����\n");
		printf("===========================\n");
		printf("\t1. ���ϱ�\n");
		printf("\t2. ����\n");
		printf("\t3. ���ϱ�\n");
		printf("\t4. ������\n");
		printf("\t5. ����\n");
		printf("===========================\n");
		printf("���� : ");
		scanf("%d", &input);

		if (input == 5)
		{
			printf("���α׷��� �����մϴ�.\n");
			Sleep(2000);
			return;
		}
		else if (input > 5 || input < 1)
		{
			printf("�Է¿���!! 1-5�� �߿��� �������ּ���.\n");
			Sleep(2000);
			continue;
		}

		system("cls");

		printf("ù��° ���� �Է��ϼ���.\n");
		printf("�Է� : ");
		scanf("%d", &num1);
		printf("�ι�° ���� �Է��ϼ���.\n");
		printf("�Է� : ");
		scanf("%d", &num2);

		switch (input)
		{
		case 1:
			printf("[���] %d + %d = %d\n", num1, num2, num1 + num2);
			break;
		case 2:
			printf("[���] %d - %d = %d\n", num1, num2, num1 - num2);
			break;
		case 3:
			printf("[���] %d x %d = %d\n", num1, num2, num1 * num2);
			break;
		case 4:
			if (num2 == 0)
				printf("�߸��� �����Դϴ�. �ٽ��Է��ϼ���.\n");
			else
				printf("[���] %d / %d = %lf\n", num1, num2, (double)(num1 / num2));
			break;
		}
		Sleep(3000);
	}
	return 0;
}