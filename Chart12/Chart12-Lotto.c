#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 1000
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <memory.h>

//카드 초기화+셔플
void init_Lotto(char* lotto)
{
	//초기화
	for (int i = 0; i < 45; i++) {
		lotto[i] = i + 1;
	}
	//셔플
	for (int i = 0; i < 1000; i++) {
		int dest = (rand() % 45);
		int sour = (rand() % 45);
		int temp = lotto[dest];
		lotto[dest] = lotto[sour];
		lotto[sour] = temp;
	}
}

//로또번호 입력
void input_Lotto(char* lotto, char* myLotto)
{
	printf("=========================================\n");
	printf("====                                 ====\n");
	printf("====          L  O  T  T  O          ====\n");
	printf("====                                 ====\n");
	printf("=========================================\n");
	printf("====           치   트   키          ====\n");
	printf("=========================================\n");
	printf("====  ");
	for (int i = 0; i < 6; i++) {
		printf("%2d ", lotto[i]);
	}
	printf("BONUS : %2d", lotto[6]);
	printf("   ====\n");
	printf("=========================================\n");
	printf(" 1~45 숫자 중 로또번호를 7개 입력하세요.\n");
	printf("=========================================\n");

	for (int i = 0; i < 7; i++) {
		printf("%d번째 : ", i + 1);

		scanf("%d", &myLotto[i]);

		if (myLotto[i] < 1 || myLotto[i] > 45) {
			printf("입력오류!!\n");
			i--;
		}

		for (int j = 0; j < i; j++) {
			if (myLotto[j] == myLotto[i]) {
				printf("중복!!\n");
				i--;
			}
		}
	}
}

//로또 결과
void result_Lotto(char* lotto, char* myLotto, char* sameLotto, char* prize)
{
	int bonus = 0;

	printf("=========================================\n");
	printf("====       결과 3... "); Sleep(1000);
	printf("2... "); Sleep(1000);
	printf("1...       ====\n"); Sleep(1000);

	//보너스 제외 숫자 확인
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (lotto[i] == myLotto[j]) {
				sameLotto[i] = lotto[i];
				*prize += 1;
			}
			else sameLotto[i] = 0;
		}
	}

	//보너스 숫자 확인
	if (lotto[6] == myLotto[6]) {
		sameLotto[6] = lotto[6];
		bonus = 1;
	}

	printf("=========================================\n");
	printf("====               ");
	switch (*prize)
	{
		case 3: printf("5등"); *prize = 5; break;
		case 4: printf("4등"); *prize = 4; break;
		case 5: 
			if (bonus == 1) {
				printf("2등"); *prize = 2;
			}
			else {
				printf("3등"); *prize = 3;
			}
			break;
		case 6: printf("1등"); *prize = 1; break;
		default: printf("꽝!"); *prize = 0; break;
	}
	printf("               ====\n");
	printf("=========================================\n");

}

//결과 저장
void save_Lotto(char* lotto, char* myLotto, char* sameLotto, char* prize)
{
	FILE* fp;
	char buffer[BUFFER_SIZE + 1];
	

	if ((fp = fopen("Lotto_Result.txt", "a")) != NULL)
	{
		memset(buffer, 0, sizeof(buffer));

		strcat(buffer, "==================================================\n");
		strcat(buffer, "      당첨 번호 : ");
		for (int i = 0; i < 7; i++)
		{
			strcat(buffer, lotto[i]);
			strcat(buffer, " ");
			if (i == 6) strcat(buffer, '/0');
		}

		strcat(buffer, "===================================================\n");
		strcat(buffer, "      나의 번호 : ");
		for (int i = 0; i < 7; i++)
		{
			strcat(buffer, (myLotto[i] + " "));
			if (i == 6) strcat(buffer, '/0');
		}

		strcat(buffer, "===================================================\n");
		strcat(buffer, "      맞춘 번호 : ");
		for (int i = 0; i < 7; i++)
		{
			strcat(buffer, (sameLotto[i] + " "));
			if (i == 6) strcat(buffer, '/0');
		}

		strcat(buffer, "===================================================\n");
		strcat(buffer, "      당첨 결과 : " + *prize);
		strcat(buffer, "===================================================\n\n\n");


		fwrite(buffer, 1, strlen(buffer), fp);
		fclose(fp);
	}
}

//불러오기
void load_Lotto()
{
	FILE* fp;
	char buffer[BUFFER_SIZE + 1];

	if ((fp = fopen("Lotto_Result.txt", "r+")) != NULL) {
		memset(buffer, 0, sizeof(buffer));
		while (fread(buffer, 1, BUFFER_SIZE, fp) != 0)
			printf("%s\n", buffer);
		fclose(fp);
	}
}

int main(void) 
{
	int lotto[45], myLotto[7], sameLotto[7], prize = 0;

	srand(time(NULL));

	init_Lotto(lotto);
	input_Lotto(lotto, myLotto);
	result_Lotto(lotto, myLotto, sameLotto, &prize);
	save_Lotto(lotto, myLotto, sameLotto, &prize);
	return 0;
}