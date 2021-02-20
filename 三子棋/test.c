#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


//测试三子棋

void menu()
{
	printf("**************************\n");
	printf("**1.开始  2.规则  0.退出**\n");
	printf("**************************\n");
}


void game()
{
	char ret = ' ';
	char board[ROW][COL] = { 0 };               //定义数组，存放棋盘走出的信息
	InitBoard(board, ROW, COL);                 //用空格初始化棋盘
	DisplayBoard(board,ROW,COL);                //打印棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);                 //玩家落子
		Sleep(200);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);                      //判断输赢             
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);               //电脑落子
		Sleep(3000);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);                      //判断输赢
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("恭喜你，你赢了!!!\n");
	}
	else if (ret == '#')
	{
		printf("很遗憾，你输了");
	}
	else
	{
		printf("平局\n");
	}
}


void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择>>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		case 2:
			printf("游戏规则：用键盘输入坐标，坐标中间用空格隔开，然后回车确认。\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}