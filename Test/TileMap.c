/*
	- Ÿ�ϸ� �׸��� -
	1. ������� �Է��� �޾� ���� ���� ���ڸ�ŭ�� Ÿ�ϸ��� ���
	2. ��µ� Ÿ�ϸ��� ������ǥ�� ���� 2�� ���
	3. �ؽ�Ʈ�� ���� �� ��ǥ ���
	4. ����� Ÿ�ϸʾȿ��� �Ź� �ڤ��� ��ġ�� �ٲ�� ���� 1��
	5. ����� Ÿ�ϸʾȿ��� ���� ��ġ�� ���������� ���� ��ǥ�� �ٲ�� ���� 1��
	6. �������� 0,0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

struct TileMap
{
	int rowSize1;	//�� ������		����
	int columnSize1;//�� ������		����
	int rowSize2;	//�� ������		����
	int columnSize2;//�� ������		����
	int rowStar1;	//��1 �� ��ǥ
	int columnStar1;//��1 �� ��ǥ
	int rowStar2;	//��2 �� ��ǥ
	int columnStar2;//��2 �� ��ǥ
	int rowStar3;	//��3 �� ��ǥ
	int columnStar3;//��3 �� ��ǥ
	int rowStar4;	//��4 �� ��ǥ
	int columnStar4;//��4 �� ��ǥ
	int isFirst;		//0:0, 1:1
};

void print(struct TileMap* tm, int row, int column, int rowStar1, int columnStar1, int rowStar2, int columnStar2) {
	for (int i = 0; i < column; i++) {		//����
		for (int j = 0; j < row; j++) {		//����
			if (i == columnStar1 && j == rowStar1) {
				printf("��");
			}
			else if (i == columnStar2 && j == rowStar2) {
				printf("��");
			}
			else printf("��");
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
	printf("��ǥ�� �Է� �޽��ϴ�.\n");
	printf("���� : ");
	scanf("%d", &tm->rowSize1);
	printf("���� : ");
	scanf("%d", &tm->columnSize1);

	printf("version1 ���� :  %d, ���� :  %d\n", tm->rowSize1, tm->columnSize1);
	randStar1(tm);
	printf("Star1(  %d,  %d  )\n", tm->columnStar1, tm->rowStar1);
	printf("Star1(  %d,  %d  )\n", tm->columnStar2, tm->rowStar2);

	print(tm, tm->rowSize1, tm->columnSize1, tm->rowStar1, tm->columnStar1, tm->rowStar2, tm->columnStar2);
}

void version2(struct TileMap* tm) {
	printf("��ǥ�� �Է� �޽��ϴ�.\n");
	printf("���� : ");
	scanf("%d", &tm->rowSize2);
	printf("���� : ");
	scanf("%d", &tm->columnSize2);
	printf("version2 ���� :  %d, ���� :  %d\n", tm->rowSize2, tm->columnSize2);

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