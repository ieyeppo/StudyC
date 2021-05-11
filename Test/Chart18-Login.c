#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct Login
{
	char* id;
	char* password;
}LOGIN;

void inputDatd(LOGIN* login)
{
	char id[20] = { '/0' }, password[20] = { '/0' };

	printf("ID : ");
	scanf("%s", id);
	login->id = (char*)malloc(strlen(id) + 1);
	strcpy(login->id, id);
	printf("Password : ");
	scanf("%s", password);
	login->password = (char*)malloc(strlen(password) + 1);
	strcpy(login->password, password);
}

void join()
{
	LOGIN* login = { '/0' };
	FILE* fp;

	fp = fopen("password.txt", "w");
	if (fp == NULL) return 1;

	printf("=====     1. JOIN     =====\n");
	inputDatd(&login);

	fputs(login->id, fp);
	fputc('\n', fp);
	fputs(login->password, fp);
	fputc('\n', fp);
	fclose(fp);
}

void isLogin()
{
	LOGIN login = { '/0' };
	char id[20], password[20];
	FILE* fp;

	fp = fopen("password.txt", "r");
	if (fp == NULL) return 1;

	printf("=====     2. LOGIN    =====\n");
	inputDatd(&login);

	//기존데이터
	fscanf(fp, "%s%s", id, password);
	fclose(fp);

	if (strcmp(login.id, id) == 0 && strcmp(login.password, password) == 0)
		printf("로그인 되었습니다.\n");
	else printf("로그인할 수 없습니다.\n");
}

int main(void)
{
	int input;

	while (1)
	{
		printf("===========================\n");
		printf("=====     1. JOIN     =====\n");
		printf("=====     2. LOGIN    =====\n");
		printf("=====     3. EXIT     =====\n");
		printf("===========================\n");
		printf("입력 : ");
		scanf("%d", &input);


		switch (input)
		{
		case 1: 
			join(); 
			break;
		case 2: 
			isLogin();
			break;
		case 3: 
			printf("프로그램을 종료합니다.\n");
			return;
		default : 
			printf("입력오류! 다시입력해주세요.\n");
			continue;
		}
	}

	return 0;
}