#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

//문자를 입력 받아 역출력
void strReverse()
{
	char inReverseOrder[100];
	int length;

	printf("문자를 입력하면 역출력 합니다.\n");
	printf("입력 : ");
	scanf("%s", inReverseOrder);

	length = strlen(inReverseOrder);

	printf("역출력 : ");
	for (int i = length  - 1; i >= 0; i--)
	{
		printf("%c", inReverseOrder[i]);
	}
	printf("\n\n\n");
}

//짝수에 있는 문자만 거꾸로 출력
void evenNumReverse()
{
	char evenNum[100];
	int length;

	printf("배열의 짝수 자리 문자만 거꾸로 출력합니다.\n");
	printf("입력 : ");
	scanf("%s", evenNum);

	length = strlen(evenNum);

	for (int i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			printf("%c", evenNum[i+1]);
	}
	printf("\n\n\n");
}

//주민번호 '-'기호를 제외하여 출력
void residentNum()
{
	char allStr[20];
	char firstStr[20];
	char lastStr[20];
	char excludeSymbol[20];

	printf("주민번호를 '-' 포함하여 입력하세요.\n");
	printf("입력 : ");
	gets(allStr);

	//주민번호 앞과 뒤 분리
	//firstStr = strtok(allStr, "-");
	//lastStr = strock(allStr, firstStr + "-");
	//excludeSymbol = strcat_s(firstStr, lastStr);

	printf("주민번호 : ");
	puts(allStr);
	printf("기호 제거 후 : %s\n", excludeSymbol);
}

int main(void)
{
	strReverse();
	evenNumReverse();
	//residentNum();

	return 0;
}