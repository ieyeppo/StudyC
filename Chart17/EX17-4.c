#include <stdio.h>

struct student
{
	int id;
	char name[20];
	double grade;
};

int main(void)
{
	struct student std[3] = { {315, "ȫ�浿", 2.4 }, {316, "�̼���", 3.7}, {317, "�������", 4.4} };
	struct student max;

	max = std[0];
	if (std[1].grade > max.grade) max = std[1];
	if (std[2].grade > max.grade) max = std[2];

	printf("�й� : %d\n", max.id);
	printf("�̸� : %s\n", max.name);
	printf("���� : %.1lf\n", max.grade);

	return 0;
}