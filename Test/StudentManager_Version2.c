#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

typedef struct STD
{
	char name[10];
	int grades[5];
}STD;

void input(struct STD* std)
{
	for (int i = 0; i < 5; i++)
	{
		printf("�л� �̸� : ");
		scanf("%s", &std[i].name);

		printf("�л� %s�� ������ �Է��ϼ���.\n", std[i].name);
		printf("����, ����, ����, ü�� ������� �Է����ּ���.\n");
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			printf("�Է� : ");
			scanf("%d", &std[i].grades[j]);
			sum += std[i].grades[j];
		}
		printf("\n");
		std[i].grades[4] = sum;
	}
}

void average(struct STD* std, double* avg)
{
	for (int i = 0; i < 4; i++)
	{
		avg[i] = 0.0;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++)
		{
			avg[j] += (double)std[i].grades[j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		avg[i] /= 5;
	}
}

void result(struct STD* std, double* avg)
{
	double stdAvg;

	printf("<�л� ��� ���� >\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d. �̸� : %s, ", (i + 1), std[i].name);
		for (int j = 0; j < 4; j++)
		{
			printf("%5d", std[i].grades[j]);
		}
		stdAvg = (double)std[i].grades[4] / 4;
		printf("   ��� : %.2lf\n", stdAvg);
	}
	printf("\n");
	printf("<���� ��� ���� >\n");
	printf("����\t\t����\t\t����\t\tü��\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%.2lf\t\t", avg[i]);
	}
	printf("\n");
}

int main(void)
{
	struct STD* std[5];
	double* avg[4];

	input(std);
	average(std, avg);
	result(std, avg);

	return 0;
}