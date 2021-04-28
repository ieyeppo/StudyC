#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <Windows.h>

void cardMaker(int cardNum) 
{
	int img = cardNum / 13;
	int num = cardNum % 13;

	//printf("cardNum : %d\n", cardNum);
	//printf("img : %d\n", img);
	//printf("num : %d\n", num);

	switch (img) 
	{
		case 0: printf("◆"); break;
		case 1: printf("♥"); break;
		case 2: printf("♣"); break;
		case 3: printf("♠"); break;
	}

	switch (num)
	{
		case 0: printf("A\n"); break;
		case 10: printf("J\n"); break;
		case 11: printf("Q\n"); break;
		case 12: printf("K\n"); break;
		default: printf("%d\n", num + 1); break;
	}
	printf("\n");
}

int main(void) {
	srand(time(NULL));

	int card[52];
	int money = 10000;
	int bettingMoney = 0;
	int turn = 5;
	int input;
	int comNum;
	int rightAnswer = 1;
	int answerCount = 0;

	//카드 숫자 입력
	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}

	//카드 숫자 셔플
	for (int i = 0; i < 1000; i++) 
	{
		int dest = rand() % 52;
		int sour = rand() % 52;
		int temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}

	while (1)
	{
		system("cls");

		if (turn <= 0 || money < 1000)
		{
			printf("[게임 종료]\n");
			printf("정답 카드 수 : %d", answerCount);
			Sleep(1000);
			break;
		}

		cardMaker(card[rand() % 52]);

		printf("<??>\n");
		printf("사용한 카드 갯수 : %d\n", turn);
		printf("치트 : ");
		cardMaker(card[turn]);

		printf("소지금 : %d원\n", money);
		printf("배팅금 입력 : ");
		scanf("%d", &bettingMoney);

		if (bettingMoney < 1000 || bettingMoney > money)
		{
			printf("[배팅금액 입력 오류]\n");
			printf("1000원 이상 소지금 이하로 입력해주세요!\n");
			continue;
		}

		printf("1.LOW | 2. HIGH | 3. SEVEN\n");
		printf("입력 : ");
		scanf("%d", &input);

		comNum = (card[turn] % 13) + 1;

		switch (input)
		{
		case 1:
			if (comNum < 7)
				rightAnswer = 1;
			else
				rightAnswer = 0;
			break;
		case 2:
			if (comNum > 7)
				rightAnswer = 1;
			else
				rightAnswer = 0;
			break;
		case 3:
			if (comNum == 7)
				rightAnswer = 1;
			else
				rightAnswer = 0;
			break;
		default:
			printf("[선택 입력 오류]\n");
			printf("1-3번 중에서 선택해주세요!\n");
			Sleep(1000);
			continue;
		}

		if (rightAnswer == 1) {
			money += bettingMoney;
			printf("정답!\n");
			answerCount++;
		}
		else {
			money -= bettingMoney;
			printf("오답!\n");
		}
		Sleep(1000);
		turn--;
	}

	return 0;
}
