#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int c = 10, d = 20;

	//전위 연산자
	++a;	//11			
	--b;	//19

	//후위 연산자
	c++;	//11
	d--;	//19

	printf("a : %d\tb : %d\n", a, b);
	printf("c : %d\td : %d\n", c, d);

	return 0;
}