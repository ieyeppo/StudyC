#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>

struct Card
{
	int allCard[52];		//ī�� 52��
	int shape[3];		//ī�� �̹���
	int number[3];		//ī�� ��ȣ
};

//�����Ͱ��� ���� CSS
void css()
{
	printf("=========================================\n");
	printf("====                                 ====\n");
	printf("====       ��  ��  ��   ��  ��       ====\n");
	printf("====                                 ====\n");
	printf("=========================================\n");
	printf("====    ī�� 2���� ���� �޽��ϴ�.    ====\n");
}

//ī�� �ʱ�ȭ+����
void cardInit(struct Card* card)
{
	//ī�� �ʱ�ȭ
	for (int i = 0; i < 52; i++)
	{
		card->allCard[i] = i;
	}

	//ī�� ����
	for (int i = 0; i < 1000; i++)
	{
		int dest = rand() % 52;
		int sour = rand() % 52;
		int temp = card->allCard[dest];
		card->allCard[dest] = card->allCard[sour];
		card->allCard[sour] = temp;
	}
}

//ī�� ���
void getCard(struct Card* c, int turn)
{
	//ȭ�鿡 ������ ī�� 2��, ���� �����ϴ� ī�� 1�� �� 3���� �����ش�. 
	for (int i = 0; i < 3; i++)
	{
		if (i == 2) printf("\n                 [ġƮŰ]\n");
		printf("====               ");

		//ī�� 3�� ���
		c->shape[i] = c->allCard[turn + i] / 13;	//0 ~ 3
		c->number[i] = c->allCard[turn + i] % 13;	//0 ~ 12


		//ī�� �̹��� ���ߢ���
		switch (c->shape[i])
		{
			case 0: printf("��"); break;
			case 1: printf("��"); break;
			case 2: printf("��"); break;
			case 3: printf("��"); break;
		}
		//���ڼ���
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

//���ñݾ� �Է�
int inputBettingMoney(int* bettingMoney, int* money) 
{
	printf("\n=========================================\n\n");
	printf("�����ݾ� : %d\n", *money);
	printf("���ñݾ� : ");
	scanf("%d", &*bettingMoney);

	//����ó��
	if (*bettingMoney < 100 || *bettingMoney > *money)
	{
		*bettingMoney = 0;
		printf("[�ݾ� �Է� ����]\n");
		printf("100�� �̻� �����ݾ� ���Ϸ� �Է��ϼ���!\n");
		printf("\n=========================================\n\n");
		return 0;
	}
	else 
	{
		*money -= *bettingMoney;
		printf("�����ݾ� : %d\n", *money);
		printf("\n=========================================\n\n");
		return 1;
	}
}

//���� ���� ī�� 2���� ���� ���̿� �߰� ī�� ���ڰ� �־�� �̱��.
//a < c < b, a > c > b
//�� �ܿ��� ���� �Ҵ´�.
void result(struct Card* c, int* money, int* bettingMoney, int* turn, int* gameCount)
{
	*turn += 3;			//ī�� 3���� ������.
	*gameCount += 1;	//���� ī��Ʈ 1����

	printf("�߰� ī�� ���� : %d\n", c->number[2] + 1);

	if ((c->number[0] < c->number[2] && c->number[2] < c->number[1]) ||
		(c->number[0] > c->number[2] && c->number[2] > c->number[1]))
	{
		*money += *bettingMoney * 2;
		printf("[���] : WIN %d�� ȹ��!\n", *bettingMoney * 2);
	}
	else
	{
		printf("[���] : LOSER!\n");
	}
	printf("�����ݾ� : %d\n", *money);
	printf("\n=========================================\n\n");
	Sleep(5000);
}

//���� ���� ���� Ȯ��
int isReturn(int gameCount, int money)
{
	if (gameCount == 17)
	{
		printf("ī�带 ��� �����Ͽ����ϴ�.\n");
		printf("3�� �� ������ �����մϴ�.\n");
		Sleep(3000);
		return 1;
	}
	else if (money < 100)
	{
		printf("������ �Ǽ̽��ϴ�.\n");
		printf("������ �� �̻� ������ �� �����ϴ�.\n");
		printf("3�� �� ������ �����մϴ�.\n");
		Sleep(3000);
		return 1;
	}
	else 
		return 0;
}

//������ ����
void Wallnambbong()
{
	srand(time(NULL));
	struct Card card;			//ī��
	int bettingMoney = 0;		//���ñݾ�
	int money = 10000;			//�����ݾ�
	int turn = 0;				//����� ī�� ���� ����, �� ���Ӵ� 3�� ���� ����
	int gameCount = 0;			//ī��Ʈ 17 �Ǹ� ����(52/3)

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