#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//*****a�� �Էµ� ���ÿ� ���� scanf�� �ڵ����� \n�� ���� ������ b : \n�� ���� �ȴ�.
	// 
	int a;
	char b;
	printf("�����ϳ��� �Է��ϼ���. : $");
	scanf("%d", &a);
	printf("\n");
	printf("�����ϳ��� �Է��ϼ���. : $");
	scanf(" %c", &b);
	printf("�Էµ� ���� %d, %c �Դϴ�.\n", a, b);


	//--------------------------------------------------

	int c;
	char d[5];
	printf("�����ϳ��� �Է��ϼ���. : $");
	scanf("%d", &c);
	printf("\n");
	printf("�����ϳ��� �Է��ϼ���. : $");
	scanf("%s", &d);
	printf("�Էµ� ���� %d, %s �Դϴ�.\n", c, d);

	return 0;
}