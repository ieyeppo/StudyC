#include <stdio.h>

union student
{
	int num;
	double grade;
};

struct STD
{
	int num;
	double grade;
};

int main(void)
{
	union student u_Std = { 3.14 };
	printf("학번 : %d\n", u_Std.num);
	u_Std.grade = 4.4;
	printf("학점 : %.1lf\n", u_Std.grade);
	printf("학번 : %d\n", u_Std.num);


	struct STD s_Std = { 3.14 };
	printf("학번 : %d\n", s_Std.num);
	s_Std.grade = 4.4;
	printf("학점 : %.1lf\n", s_Std.grade);
	printf("학번 : %d\n", s_Std.num);

	return 0;
}

