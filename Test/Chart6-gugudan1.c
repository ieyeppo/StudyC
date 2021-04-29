#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(void)
{
	int input;
	
	while (1)
	{
		system("cls");
		printf("==========================================\n");
		printf("              구   구   단\n");
		printf("       몇 단 구구단을 출력할까요?\n");
		printf("         ** '0'입력시 종료. **\n");
		printf("==========================================\n");
		printf("입력 : ");
		scanf("%d", &input);
		printf("==========================================\n");

		if (input == 0)
		{
			printf("프로그램을 종료합니다.");
			Sleep(2000);
			return;
		}

		for (int i = 1; i < 10; i++)
		{
			printf("%d x %d = %d\n", input, i, input * i);
		}
		printf("==========================================\n");
		Sleep(5000);
	}


	return 0;
}