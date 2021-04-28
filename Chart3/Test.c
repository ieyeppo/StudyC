#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//이름, 나이, 주소 입력 받아 출력하는 프로그램

	char name[20];
	int age;
	char address[50];

	printf("이름을 입력하세요. : ");
	scanf("%s", &name);
	printf("나이를 입력하세요. : ");
	scanf("%d", &age);
	printf("주소를 입력하세요. : ");
	scanf("%s", &address);

	printf("[결과] 이름 : %s / 나이 : %d / 주소 : %s", name, age, address);

	return 0;
}