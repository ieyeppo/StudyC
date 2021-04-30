/*
	- 타일맵 그리기 -
	1. 사용자의 입력을 받아 가로 세로 숫자만큼의 타일맵을 출력
	2. 출력된 타일맵의 랜덤좌표에 별을 2개 출력
	3. 텍스트로 현재 ☆ 좌표 출력
	4. 실행시 타일맵안에서 매번 ★ㅇ의 위치가 바뀌는 버전 1개
	5. 실행시 타일맵안에서 ★의 위치는 고정이지만 ★의 좌표만 바뀌는 버전 1개
	6. 시작점은 0,0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

struct TileMap
{
	int rowSize1;	//행 사이즈		가로
	int columnSize1;//열 사이즈		세로
	int rowSize2;	//행 사이즈		가로
	int columnSize2;//열 사이즈		세로
	int rowStar1;	//별1 행 좌표
	int columnStar1;//별1 열 좌표
	int rowStar2;	//별2 행 좌표
	int columnStar2;//별2 열 좌표
	int rowStar3;	//별3 행 좌표
	int columnStar3;//별3 열 좌표
	int rowStar4;	//별4 행 좌표
	int columnStar4;//별4 열 좌표
	int isFirst;		//0:0, 1:1
};

void print(struct TileMap* tm, int row, int column, int rowStar1, int columnStar1, int rowStar2, int columnStar2) {
	for (int i = 0; i < column; i++) {		//세로
		for (int j = 0; j < row; j++) {		//가로
			if (i == columnStar1 && j == rowStar1) {
				printf("★");
			}
			else if (i == columnStar2 && j == rowStar2) {
				printf("★");
			}
			else printf("□");
		}
		printf("\n");
	}
	printf("\n");
}

void randStar1(struct TileMap* tm) {
	while (1) {
		tm->rowStar1 = rand() % tm->rowSize1;
		tm->columnStar1 = rand() % tm->columnSize1;
		tm->rowStar2 = rand() % tm->rowSize1;
		tm->columnStar2 = rand() % tm->columnSize1;

		if (tm->rowStar1 == tm->columnStar1 == tm->rowStar2 == tm->columnStar2) {
			continue;
		}
		else break;
	}
}

void randStar2(struct TileMap* tm) {
	while (1) {
		tm->rowStar3 = rand() % tm->rowSize2;
		tm->columnStar3 = rand() % tm->columnSize2;
		tm->rowStar4 = rand() % tm->rowSize2;
		tm->columnStar4 = rand() % tm->columnSize2;

		if (tm->rowStar3 == tm->columnStar3 == tm->rowStar4 == tm->columnStar4) {
			continue;
		}
		else break;
	}
}

void version1(struct TileMap* tm) {
	printf("좌표를 입력 받습니다.\n");
	printf("가로 : ");
	scanf("%d", &tm->rowSize1);
	printf("세로 : ");
	scanf("%d", &tm->columnSize1);

	printf("version1 가로 :  %d, 세로 :  %d\n", tm->rowSize1, tm->columnSize1);
	randStar1(tm);
	printf("Star1(  %d,  %d  )\n", tm->columnStar1, tm->rowStar1);
	printf("Star1(  %d,  %d  )\n", tm->columnStar2, tm->rowStar2);

	print(tm, tm->rowSize1, tm->columnSize1, tm->rowStar1, tm->columnStar1, tm->rowStar2, tm->columnStar2);
}

void version2(struct TileMap* tm) {
	printf("좌표를 입력 받습니다.\n");
	printf("가로 : ");
	scanf("%d", &tm->rowSize2);
	printf("세로 : ");
	scanf("%d", &tm->columnSize2);
	printf("version2 가로 :  %d, 세로 :  %d\n", tm->rowSize2, tm->columnSize2);

	if (tm->isFirst == 1) {
		tm->rowStar3 = 3;
		tm->columnStar3 = 6;
		tm->rowStar4 = 1;
		tm->columnStar4 = 4;
		printf("Star3(  %d,  %d  )\n", tm->columnStar3, tm->rowStar3);
		printf("Star4(  %d,  %d  )\n", tm->columnStar4, tm->rowStar4);
		print(tm, tm->rowSize2, tm->columnSize2, tm->rowStar3, tm->columnStar3, tm->rowStar4, tm->columnStar4);
		tm->isFirst = 0;
	}
	else {
		randStar2(tm);
		printf("Star3(  %d,  %d  )\n", tm->columnStar3, tm->rowStar3);
		printf("Star4(  %d,  %d  )\n", tm->columnStar4, tm->rowStar4);
		print(tm, tm->rowSize2, tm->columnSize2, tm->rowStar3, tm->columnStar3, tm->rowStar4, tm->columnStar4);
	}
}

int main() {
	srand(time(NULL));
	struct TileMap tm;
	tm.isFirst = 1;

	while (1) {
		version1(&tm);
		version2(&tm);
		Sleep(10000);
		system("cls");
	}

	return 0;
}