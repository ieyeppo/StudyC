#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	5���� ��� ���̵�, ����̸�, �Ѵ� �޿��� �Է¹޾� ����� ��
	5���� ����� �޿� �Ѿװ� ��� �޿����� ���Ͻÿ�.
	(�̸��� �����Ҵ翡 �����Ѵ�.)
*/

typedef struct employee
{
	int id;
	char* name;
	int salary;
}Employee;

void input_Info(Employee* em);
void print_data(Employee* em);
double get_average(Employee* em);

int main(void)
{
	Employee em[5];

	input_Info(&em);
	print_data(&em);

	return 0;
}

void input_Info(Employee* em)
{
	char name[20] = { '/0'};

	for (int i = 0; i < 5; i++)
	{
		printf("<  %d�� ���  >\n", i + 1);
		printf("��� ���̵� �Է� : ");
		scanf("%d", &em[i].id);
		printf("��� �̸� �Է� : ");
		scanf("%s", name);
		em[i].name = (char*)malloc(strlen(name) + 1);
		if (em[i].name != NULL) strcpy(em[i].name, name);
		printf("��� �޿� �Է� : ");
		scanf("%d", &em[i].salary);
	}
}

void print_data(Employee* em)
{
	printf("\n\n==============================\n\n");
	for (int i = 0; i < 5; i++)
	{
		printf("<  %d�� ���  >\n", i + 1);
		printf("���̵� : %d\n", em[i].id);
		printf("��  �� : %s\n", em[i].name);
		printf("��  �� : %d\n", em[i].salary);
	}

	printf("\n");
	printf("��� ��� �޿� : %.2lf\n", get_average(em));
}


double get_average(Employee* em)
{
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		sum += em[i].salary;
	}

	return (double)sum / 5;
}