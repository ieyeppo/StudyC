#include <stdio.h>

struct student
{
	int id;
	char name[20];
	double grade;
};

int main(void)
{
	struct student std[3] = { {315, "홍길동", 2.4 }, {316, "이순신", 3.7}, {317, "세종대왕", 4.4} };
	struct student max;

	max = std[0];
	if (std[1].grade > max.grade) max = std[1];
	if (std[2].grade > max.grade) max = std[2];

	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학점 : %.1lf\n", max.grade);

	return 0;
}