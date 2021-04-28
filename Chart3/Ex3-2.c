#include <stdio.h>

int main(void) {

	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);


	//-----------------------------------------

	char ch1 = 'A';
	char ch2 = 65;

	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);
	printf("아스크코드 %d의 문자 값 : %c\n", ch2, ch2);

	return 0;
}