#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("������ ������ϴ�\n")

int main(void)
{
	double radius, area;

	printf("�������� �Է��ϼ���.(100����) : ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	if (radius > LIMIT) ERR_PRN;
	else printf("���� ���� : %.2lf(%s)\n", area, MSG);

	return 0;
}