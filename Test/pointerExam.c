#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

//10���� ������ �Է¹޾� �迭�� �����Ѵ�.
void input_ary(int* ary)
{
	for (int i = 0; i < 10; i++)
	{
		printf("�Է� : ");
		scanf("%d", ary + i);
	}
}

//�迭�� ����� ���� 9<->0 ���·� ����� ���� ��ȯ�Ѵ�.
//������ �ΰ��� ����Ͽ� 0����, 9������ ����Ų��.
void swap_ary(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

//�迭�� ����Ѵ�.
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

