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
		printf("\t   계산기\n");
		printf("===========================\n");
		printf("\t1. 더하기\n");
		printf("\t2. 빼기\n");
		printf("\t3. 곱하기\n");
		printf("\t4. 나누기\n");
		printf("\t5. 종료\n");
		printf("===========================\n");
		printf("선택 : ");
		scanf("%d", &input);

		if (input == 5)
		{
			printf("프로그램을 종료합니다.\n");
			Sleep(2000);
			return;
		}
		else if (input > 5 || input < 1)
		{
			printf("입력오류!! 1-5번 중에서 선택해주세요.\n");
			Sleep(2000);
			continue;
		}

		system("cls");

		printf("첫번째 수를 입력하세요.\n");
		printf("입력 : ");
		scanf("%d", &num1);
		printf("두번째 수를 입력하세요.\n");
		printf("입력 : ");
		scanf("%d", &num2);

		switch (input)
		{
		case 1:
			printf("[결과] %d + %d = %d\n", num1, num2, num1 + num2);
			break;
		case 2:
			printf("[결과] %d - %d = %d\n", num1, num2, num1 - num2);
			break;
		case 3:
			printf("[결과] %d x %d = %d\n", num1, num2, num1 * num2);
			break;
		case 4:
			if (num2 == 0)
				printf("잘못된 연산입니다. 다시입력하세요.\n");
			else
				printf("[결과] %d / %d = %lf\n", num1, num2, (double)(num1 / num2));
			break;
		}
		Sleep(3000);
	}
	return 0;
}