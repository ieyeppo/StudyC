#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char input[10];
    int length, isPalindrome = 1;

    printf("�ܾ �Է��ϼ���. : ");
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
        printf("ȸ���Դϴ�.\n");
    else 
        printf("ȸ���� �ƴմϴ�.\n");

    return 0;
}