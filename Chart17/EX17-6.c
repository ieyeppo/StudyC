#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score sc = { 90,80,70 };
	struct score* ps = &sc;

	printf("국어 : %d\n", (*ps).kor);
	printf("영어 : %d\n", ps->eng);
	printf("수학 : %d\n", ps->math);
}