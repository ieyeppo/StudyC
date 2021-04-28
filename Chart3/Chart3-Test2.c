#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//*****a에 입력된 동시에 다음 scanf에 자동으로 \n이 들어가기 때문에 b : \n이 들어가게 된다.
	// 
	int a;
	char b;
	printf("정수하나를 입력하세요. : $");
	scanf("%d", &a);
	printf("\n");
	printf("문자하나를 입력하세요. : $");
	scanf(" %c", &b);
	printf("입력된 값은 %d, %c 입니다.\n", a, b);


	//--------------------------------------------------

	int c;
	char d[5];
	printf("정수하나를 입력하세요. : $");
	scanf("%d", &c);
	printf("\n");
	printf("문자하나를 입력하세요. : $");
	scanf("%s", &d);
	printf("입력된 값은 %d, %s 입니다.\n", c, d);

	return 0;
}