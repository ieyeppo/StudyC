#include <stdio.h>

struct profile
{
	int age;
	double height;
};

struct student 
{
	struct profile pf;
	int id;
	double grade;
};

int main(void)
{
	struct student std;

	std.pf.age = 27;
	std.pf.height = 158.3;
	std.id = 777;
	std.grade = 5.0;

	printf("나이\t: %d\n", std.pf.age);
	printf("키\t: %.2lf\n", std.pf.height);
	printf("학번\t: %.d\n", std.id);
	printf("학점\t: %.2lf\n", std.grade);

	return 0;
}