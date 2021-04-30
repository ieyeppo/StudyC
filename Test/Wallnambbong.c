#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

struct Card
{
	int allCard[52];		//카드 52장
	int shape[3];		//카드 이미지
	int number[3];		//카드 번호
};

//월남뽕게임 간판 CSS
void css()
{
	printf("=========================================\n");
	printf("====                                 ====\n");
	printf("====       월  남  뽕   게  임       ====\n");
	printf("====                                 ====\n");
	printf("=========================================\n");
	printf("====    카드 2장을 지급 받습니다.    ====\n");
}

//카드 초기화+셔플
void cardInit(struct Card* card)
{
	//카드 초기화
	for (int i = 0; i < 52; i++)
	{
		card->allCard[i] = i;
	}

	//카드 셔플
	for (int i = 0; i < 1000; i++)
	{
		int dest = rand() % 52;
		int sour = rand() % 52;
		int temp = card->allCard[dest];
		card->allCard[dest] = card->allCard[sour];
		card->allCard[sour] = temp;
	}
}

//카드 얻기
void getCard(struct Card* c, int turn)
{
	//화면에 보여줄 카드 2장, 내가 배팅하는 카드 1장 총 3장을 보여준다. 
	for (int i = 0; i < 3; i++)
	{
		if (i == 2) printf("\n                 [치트키]\n");
		printf("====               ");

		//카드 3장 출력
		c->shape[i] = c->allCard[turn + i] / 13;	//0 ~ 3
		c->number[i] = c->allCard[turn + i] % 13;	//0 ~ 12


		//카드 이미지 ♠◆♣♥
		switch (c->shape[i])
		{
			case 0: printf("♠"); break;
			case 1: printf("◆"); break;
			case 2: printf("♣"); break;
			case 3: printf("♥"); break;
		}
		//숫자세팅
		switch (c->number[i])
		{
			case 0: printf("A"); break;
			case 10: printf("J"); break;
			case 11: printf("Q"); break;
			case 12: printf("K"); break;
			default: printf("%d", c->number[i]);
		}
		printf("\t\t     ====\n");
	}
	printf("=========================================\n");
	printf("\n");
}

//배팅금액 입력
int inputBettingMoney(int* bettingMoney, int* money) 
{
	printf("\n=========================================\n\n");
	printf("보유금액 : %d\n", *money);
	printf("배팅금액 : ");
	scanf("%d", &*bettingMoney);

	//예외처리
	if (*bettingMoney < 100 || *bettingMoney > *money)
	{
		*bettingMoney = 0;
		printf("[금액 입력 오류]\n");
		printf("100원 이상 보유금액 이하로 입력하세요!\n");
		printf("\n=========================================\n\n");
		return 0;
	}
	else 
	{
		*money -= *bettingMoney;
		printf("보유금액 : %d\n", *money);
		printf("\n=========================================\n\n");
		return 1;
	}
}

//지급 받은 카드 2장의 숫자 사이에 추가 카드 숫자가 있어야 이긴다.
//a < c < b, a > c > b
//그 외에는 돈을 잃는다.
void result(struct Card* c, int* money, int* bettingMoney, int* turn, int* gameCount)
{
	*turn += 3;			//카드 3장을 버린다.
	*gameCount += 1;	//게임 카운트 1증가

	printf("추가 카드 숫자 : %d\n", c->number[2] + 1);

	if ((c->number[0] < c->number[2] && c->number[2] < c->number[1]) ||
		(c->number[0] > c->number[2] && c->number[2] > c->number[1]))
	{
		*money += *bettingMoney * 2;
		printf("[결과] : WIN %d원 획득!\n", *bettingMoney * 2);
	}
	else
	{
		printf("[결과] : LOSER!\n");
	}
	printf("보유금액 : %d\n", *money);
	printf("\n=========================================\n\n");
	Sleep(5000);
}

//게임 종료 조건 확인
int isReturn(int gameCount, int money)
{
	if (gameCount == 17)
	{
		printf("카드를 모두 소진하였습니다.\n");
		printf("3초 후 게임을 종료합니다.\n");
		Sleep(3000);
		return 1;
	}
	else if (money < 100)
	{
		printf("거지가 되셨습니다.\n");
		printf("게임을 더 이상 진행할 수 없습니다.\n");
		printf("3초 후 게임을 종료합니다.\n");
		Sleep(3000);
		return 1;
	}
	else 
		return 0;
}

//월남뽕 게임
void Wallnambbong()
{
	srand(time(NULL));
	struct Card card;			//카드
	int bettingMoney = 0;		//배팅금액
	int money = 10000;			//보유금액
	int turn = 0;				//사용한 카드 버릴 변수, 한 게임당 3씩 턴을 증가
	int gameCount = 0;			//카운트 17 되면 종료(52/3)

	cardInit(&card);

	while (1)
	{
		system("cls");

		if (isReturn(gameCount, money) == 1) return;

		css();
		getCard(&card, turn);
		
		if (inputBettingMoney(&bettingMoney, &money) == 0) 
		{
			Sleep(2000);
			continue;
		}

		result(&card, &money, &bettingMoney, &turn, &gameCount);
	}
}

int main(void)
{
	Wallnambbong();

	return 0;
}