#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//strcopy ��� �����
int main(void)
{
	char inputStr[100], copyStr[100];

	printf("���ڿ��� �Է��ϼ���.\n");
	printf("inputStr �Է� : ");
	scanf("%s", inputStr);

	for (int i = 0; i < strlen(inputStr); i++)
	{
		copyStr[i] = inputStr[i];
		if (inputStr[i] == '/0')
		{
			copyStr[i] = '/0';
			break;
		}
	}
	printf("copyStr : %s\n", copyStr);
}