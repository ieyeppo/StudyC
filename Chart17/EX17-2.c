#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;
};

int main(void)
{
	struct profile hyun;

	strcpy(hyun.name, "����ȭ");
	hyun.age = 27;
	hyun.height = 158.3;

	hyun.intro = (char*)malloc(80);
	printf("�ڱ�Ұ� : ");
	gets(hyun.intro);

	printf("�̸�\t\t: %s\n", hyun.name);
	printf("����\t\t: %d\n", hyun.age);
	printf("Ű\t\t: %.2lf\n", hyun.height);
	printf("�ڱ�Ұ�\t: %s\n", hyun.intro);
	free(hyun.intro);

	return 0;
}