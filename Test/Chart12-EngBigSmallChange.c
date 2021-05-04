#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(void)
{
	//대문자 : 65~90 / 소문자 : 97~122
    char input[100];
    int isEng = 1;


    while (1)
    {
        system("cls");

        printf("===========================================================\n");
        printf("대소문자를 바꿔서 출력합니다.\n");
        printf("===========================================================\n");
        printf("입력 : ");
        scanf("%s", input);
        printf("===========================================================\n");

        for (int i = 0; input[i]; i++)
        {
            //소문자
            if ((input[i] >= 'a') && (input[i] <= 'z'))
                input[i] = input[i] - 'a' + 'A';
            //대문자
            else if ((input[i] >= 'A') && (input[i] <= 'Z'))
                input[i] = input[i] - 'A' + 'a';
            //그외문자
            else {
                printf("영문만 입력해주세요.\n");
                isEng = 0;
                break;
            }
         }
        if(isEng == 1)
            printf("변환 후: %s\n", input);
        printf("===========================================================\n");
        Sleep(5000);
    }

    return 0;
}