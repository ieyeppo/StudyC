#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//�̸�, ����, �ּ� �Է� �޾� ����ϴ� ���α׷�

	char name[20];
	int age;
	char address[50];

	printf("�̸��� �Է��ϼ���. : ");
	scanf("%s", &name);
	printf("���̸� �Է��ϼ���. : ");
	scanf("%d", &age);
	printf("�ּҸ� �Է��ϼ���. : ");
	scanf("%s", &address);

	printf("[���] �̸� : %s / ���� : %d / �ּ� : %s", name, age, address);

	return 0;
}