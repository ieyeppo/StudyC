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

	printf("����\t: %d\n", std.pf.age);
	printf("Ű\t: %.2lf\n", std.pf.height);
	printf("�й�\t: %.d\n", std.id);
	printf("����\t: %.2lf\n", std.grade);

	return 0;
}