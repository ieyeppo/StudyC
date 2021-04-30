#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

//10개의 정수를 입력받아 배열에 저장한다.
void input_ary(int* ary)
{
	for (int i = 0; i < 10; i++)
	{
		printf("입력 : ");
		scanf("%d", ary + i);
	}
}

//배열에 저장된 값을 9<->0 형태로 저장된 값을 교환한다.
//포인터 두개를 사용하여 0번방, 9번방을 가리킨다.
void swap_ary(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

//배열을 출력한다.
void print_ary(int* ary)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", ary[i]);
	}
}
int main(void)
{
	int ary[10];

	input_ary(ary);
	
	for (int i = 0; i < 5; i++)
	{
		swap_ary(&ary[i], &ary[9 - i]);
	}

	print_ary(ary);

	return 0;
}

