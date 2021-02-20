#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


//����������

void menu()
{
	printf("**************************\n");
	printf("**1.��ʼ  2.����  0.�˳�**\n");
	printf("**************************\n");
}


void game()
{
	char ret = ' ';
	char board[ROW][COL] = { 0 };               //�������飬��������߳�����Ϣ
	InitBoard(board, ROW, COL);                 //�ÿո��ʼ������
	DisplayBoard(board,ROW,COL);                //��ӡ����
	while (1)
	{
		PlayerMove(board, ROW, COL);                 //�������
		Sleep(200);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);                      //�ж���Ӯ             
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);               //��������
		Sleep(3000);
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);                      //�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��ϲ�㣬��Ӯ��!!!\n");
	}
	else if (ret == '#')
	{
		printf("���ź���������");
	}
	else
	{
		printf("ƽ��\n");
	}
}


void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 2:
			printf("��Ϸ�����ü����������꣬�����м��ÿո������Ȼ��س�ȷ�ϡ�\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}