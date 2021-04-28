#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void cardMaker(int cardNum) 
{
	int img = cardNum / 13;
	int num = cardNum % 13;

	switch (img) 
	{
		case 0: printf("¡ß"); break;
		case 1: printf("¢¾"); break;
		case 2: printf("¢À"); break;
		case 3: printf("¢¼"); break;
	}

	switch (num)
	{
		case 0: printf("A"); break;
		case 10: printf("J"); break;
		case 11: printf("Q"); break;
		case 12: printf("K"); break;
		default: printf(num + 1); break;
	}
}

int main(void) {



	return 0;
}