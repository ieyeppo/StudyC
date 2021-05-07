#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	5명의 사원 아이디, 사원이름, 한달 급여를 입력받아 출력한 뒤
	5명의 사원의 급여 총액과 평균 급여액을 구하시오.
	(이름은 동적할당에 저장한다.)
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
		printf("<  %d번 사원  >\n", i + 1);
		printf("사원 아이디 입력 : ");
		scanf("%d", &em[i].id);
		printf("사원 이름 입력 : ");
		scanf("%s", name);
		em[i].name = (char*)malloc(strlen(name) + 1);
		if (em[i].name != NULL) strcpy(em[i].name, name);
		printf("사원 급여 입력 : ");
		scanf("%d", &em[i].salary);
	}
}

void print_data(Employee* em)
{
	printf("\n\n==============================\n\n");
	for (int i = 0; i < 5; i++)
	{
		printf("<  %d번 사원  >\n", i + 1);
		printf("아이디 : %d\n", em[i].id);
		printf("이  름 : %s\n", em[i].name);
		printf("급  여 : %d\n", em[i].salary);
	}

	printf("\n");
	printf("사원 평균 급여 : %.2lf\n", get_average(em));
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