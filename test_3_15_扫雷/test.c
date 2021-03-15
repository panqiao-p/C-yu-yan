#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


void Menu()
{
	printf("*********************\n");
	printf("*****  1.��ʼ   *****\n");
	printf("*****  0.�˳�   *****\n");
	printf("*********************\n");
}



void Game()
{
	//������������
	char Mine[ROWS][COLS] = { 0 };
	//������ʾ����
	char Show[ROWS][COLS] = { 0 };
	//��ʼ������   mine��1��ʾ�ף�0��ʾ����    show����*��ʼ��
	InitBoard(Mine,ROWS,COLS,'0');
	InitBoard(Show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(Mine, ROW, COL);
	DisplayBoard(Show, ROW, COL);
	//�������ϲ�����
	SetMine(Mine, ROW, COL);
	//DisplayBoard(Mine, ROW, COL);
	//��ʼɨ��
	FindMind(Mine,Show,ROW,COL);
}

int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��:>\n");
			break;
		}
	} while (input);
	return 0;
}

