#include <stdio.h>
// ���߿� �Է��� �����Դϴ�.

int main(void)
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);              
	
	printf("�Էµ� ���ڿ��� %s�Դϴ�\n", str);  

	return 0;
}