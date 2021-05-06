#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(void)
{
	int* students[5][4];
	//학생개인 평균, 국어, 영어, 수학, 체육 과목 각각 평균
	int* average[4];
	int input;

	for (int i = 0; i < 4; i++)
	{
		average[i] = 0;
	}

	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d번 학생의 성적을 국어, 영어, 수학, 체육 순서대로 입력해주세요.\n", i + 1);
			printf("성적 : ");
			scanf("%d", &input);
			students[i][j] = input;
			average[j] += input;
		}
		printf("\n");
	}

	printf("국어\t영어\t수학\t체육\n");
	for (int i = 0; i < 4; i++)
	{
		int avg = average[i];
		printf("%.2lf\t", ((double)avg / 5));
	}
	printf("\n");

	


	return 0;
}