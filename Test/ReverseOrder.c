#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

//���ڸ� �Է� �޾� �����
void strReverse()
{
	char inReverseOrder[100];
	int length;

	printf("���ڸ� �Է��ϸ� ����� �մϴ�.\n");
	printf("�Է� : ");
	scanf("%s", inReverseOrder);

	length = strlen(inReverseOrder);

	printf("����� : ");
	for (int i = length  - 1; i >= 0; i--)
	{
		printf("%c", inReverseOrder[i]);
	}
	printf("\n\n\n");
}

//¦���� �ִ� ���ڸ� �Ųٷ� ���
void evenNumReverse()
{
	char evenNum[100];
	int length;

	printf("�迭�� ¦�� �ڸ� ���ڸ� �Ųٷ� ����մϴ�.\n");
	printf("�Է� : ");
	scanf("%s", evenNum);

	length = strlen(evenNum);

	for (int i = 0; i < length; i++)
	{
		if (i % 2 == 0)
			printf("%c", evenNum[i+1]);
	}
	printf("\n\n\n");
}

//�ֹι�ȣ '-'��ȣ�� �����Ͽ� ���
void residentNum()
{
	char allStr[20];
	char firstStr[20];
	char lastStr[20];
	char excludeSymbol[20];

	printf("�ֹι�ȣ�� '-' �����Ͽ� �Է��ϼ���.\n");
	printf("�Է� : ");
	gets(allStr);

	//�ֹι�ȣ �հ� �� �и�
	//firstStr = strtok(allStr, "-");
	//lastStr = strock(allStr, firstStr + "-");
	//excludeSymbol = strcat_s(firstStr, lastStr);

	printf("�ֹι�ȣ : ");
	puts(allStr);
	printf("��ȣ ���� �� : %s\n", excludeSymbol);
}

int main(void)
{
	strReverse();
	evenNumReverse();
	//residentNum();

	return 0;
}