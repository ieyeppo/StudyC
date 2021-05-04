#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//strcopy 기능 만들기
int main(void)
{
	char inputStr[100], copyStr[100];

	printf("문자열을 입력하세요.\n");
	printf("inputStr 입력 : ");
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