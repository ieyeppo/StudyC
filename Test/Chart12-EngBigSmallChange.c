#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(void)
{
	//�빮�� : 65~90 / �ҹ��� : 97~122
    char input[100];
    int isEng = 1;


    while (1)
    {
        system("cls");

        printf("===========================================================\n");
        printf("��ҹ��ڸ� �ٲ㼭 ����մϴ�.\n");
        printf("===========================================================\n");
        printf("�Է� : ");
        scanf("%s", input);
        printf("===========================================================\n");

        for (int i = 0; input[i]; i++)
        {
            //�ҹ���
            if ((input[i] >= 'a') && (input[i] <= 'z'))
                input[i] = input[i] - 'a' + 'A';
            //�빮��
            else if ((input[i] >= 'A') && (input[i] <= 'Z'))
                input[i] = input[i] - 'A' + 'a';
            //�׿ܹ���
            else {
                printf("������ �Է����ּ���.\n");
                isEng = 0;
                break;
            }
         }
        if(isEng == 1)
            printf("��ȯ ��: %s\n", input);
        printf("===========================================================\n");
        Sleep(5000);
    }

    return 0;
}