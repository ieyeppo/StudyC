#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(void)
{
	int* students[5][4];
	//�л����� ���, ����, ����, ����, ü�� ���� ���� ���
	int* average[4];
	int input;

	for (int i = 0; i < 4; i++)
	{
		average[i] = 0;
	}

	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d�� �л��� ������ ����, ����, ����, ü�� ������� �Է����ּ���.\n", i + 1);
			printf("���� : ");
			scanf("%d", &input);
			students[i][j] = input;
			average[j] += input;
		}
		printf("\n");
	}

	printf("����\t����\t����\tü��\n");
	for (int i = 0; i < 4; i++)
	{
		int avg = average[i];
		printf("%.2lf\t", ((double)avg / 5));
	}
	printf("\n");

	


	return 0;
}