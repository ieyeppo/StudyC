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

	strcpy(hyun.name, "최현화");
	hyun.age = 27;
	hyun.height = 158.3;

	hyun.intro = (char*)malloc(80);
	printf("자기소개 : ");
	gets(hyun.intro);

	printf("이름\t\t: %s\n", hyun.name);
	printf("나이\t\t: %d\n", hyun.age);
	printf("키\t\t: %.2lf\n", hyun.height);
	printf("자기소개\t: %s\n", hyun.intro);
	free(hyun.intro);

	return 0;
}