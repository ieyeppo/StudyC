#include <stdio.h>

struct student
{
	int num;
	double grade;
};

typedef struct student STD;
void print_data(STD* std);

int main(void)
{
	STD std = { 315,4.2 };

	print_data(&std);

	return 0;
}

void print_data(STD* std)
{
	printf("학번 : %d\n", std->num);
	printf("학점 : %.1lf\n", std->grade);
}