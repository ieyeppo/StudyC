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
		printf("              ��   ��   ��\n");
		printf("       �� �� �������� ����ұ��?\n");
		printf("         ** '0'�Է½� ����. **\n");
		printf("==========================================\n");
		printf("�Է� : ");
		scanf("%d", &input);
		printf("==========================================\n");

		if (input == 0)
		{
			printf("���α׷��� �����մϴ�.");
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