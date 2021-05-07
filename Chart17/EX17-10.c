#include <stdio.h>

union student
{
	int num;
	double grade;
};

int main(void)
{
	union student std = { 315 };

	printf("학번 : %d\n", std.num);
	std.grade = 4.4;
	printf("학점 : %.1lf\n", std.grade);
	printf("학번 : %d\n", std.num);

	return 0;
}

