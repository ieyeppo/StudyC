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
		case 0: printf("��"); break;
		case 1: printf("��"); break;
		case 2: printf("��"); break;
		case 3: printf("��"); break;
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

	//ī�� ���� �Է�
	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}

	//ī�� ���� ����
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
			printf("[���� ����]\n");
			printf("���� ī�� �� : %d", answerCount);
			Sleep(1000);
			break;
		}

		cardMaker(card[rand() % 52]);

		printf("<??>\n");
		printf("����� ī�� ���� : %d\n", turn);
		printf("ġƮ : ");
		cardMaker(card[turn]);

		printf("������ : %d��\n", money);
		printf("���ñ� �Է� : ");
		scanf("%d", &bettingMoney);

		if (bettingMoney < 1000 || bettingMoney > money)
		{
			printf("[���ñݾ� �Է� ����]\n");
			printf("1000�� �̻� ������ ���Ϸ� �Է����ּ���!\n");
			continue;
		}

		printf("1.LOW | 2. HIGH | 3. SEVEN\n");
		printf("�Է� : ");
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
			printf("[���� �Է� ����]\n");
			printf("1-3�� �߿��� �������ּ���!\n");
			Sleep(1000);
			continue;
		}

		if (rightAnswer == 1) {
			money += bettingMoney;
			printf("����!\n");
			answerCount++;
		}
		else {
			money -= bettingMoney;
			printf("����!\n");
		}
		Sleep(1000);
		turn--;
	}

	return 0;
}
