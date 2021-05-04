#include <stdio.h>

char* my_strcpy(char* pd, char* ps);           // 함수 선언

int main(void)
{
	char str[80] = "strawberry";

	printf("바꾸기 전 문자열 : %s\n", str);
	my_strcpy(str, "apple");                   // 문자열 "apple" 복사
	printf("바꾼 후 문자열 : %s\n", str);
	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));   // 반환값으로 출력

	return 0;
}

char* my_strcpy(char* pd, char* ps) 
{
	char* po = pd;              

	while (*ps != '\0')      
	{
		*pd = *ps;                  
		pd++;                      
		ps++;                      
	}
	*pd = '\0';                   

	return po;                    
}