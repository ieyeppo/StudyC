#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char input[10];
    int length, isPalindrome = 1;

    printf("단어를 입력하세요. : ");
    scanf("%s", input);

    length = strlen(input);


    for (int i = 0; i < length / 2; i++)
    {
        if (input[i] != input[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome == 1)
        printf("회문입니다.\n");
    else 
        printf("회문이 아닙니다.\n");

    return 0;
}