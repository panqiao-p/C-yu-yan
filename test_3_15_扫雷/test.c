#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"


void Menu()
{
	printf("*********************\n");
	printf("*****  1.开始   *****\n");
	printf("*****  0.退出   *****\n");
	printf("*********************\n");
}



void Game()
{
	//创建埋雷棋盘
	char Mine[ROWS][COLS] = { 0 };
	//创建显示棋盘
	char Show[ROWS][COLS] = { 0 };
	//初始化棋盘   mine盘1表示雷，0表示无雷    show盘用*初始化
	InitBoard(Mine,ROWS,COLS,'0');
	InitBoard(Show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(Mine, ROW, COL);
	DisplayBoard(Show, ROW, COL);
	//在雷盘上布置雷
	SetMine(Mine, ROW, COL);
	//DisplayBoard(Mine, ROW, COL);
	//开始扫雷
	FindMind(Mine,Show,ROW,COL);
}

int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		Menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择:>\n");
			break;
		}
	} while (input);
	return 0;
}

