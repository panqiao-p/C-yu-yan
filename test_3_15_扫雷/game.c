#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}


void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)//��ӡ�к�
	{
		printf("%d ", i);
	}
	printf("\n");
	
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}


void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = Mine_Count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


int Cal_mine_count(char Mine[ROWS][COLS], char Show[ROWS][COLS],int x,int y)
{
	return (Mine[x - 1][y - 1] +
		Mine[x - 1][y] +
		Mine[x - 1][y + 1] +
		Mine[x][y - 1] +
		Mine[x][y + 1] +
		Mine[x + 1][y - 1] +
		Mine[x + 1][y] +
		Mine[x + 1][y + 1] + 8 * '0');
}

FindMind(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = row * col - Mine_Count;
	while (count)
	{
		printf("����������:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (Mine[x][y]!='1')
			{
				//��ʾ�ܱ��׵�����
				if (Show[x][y] == '*')
				{
					int ret = Cal_mine_count(Mine, Show, x, y);
					Show[x][y] = ret + '0';
					count--;
					Sleep(500);
					DisplayBoard(Show, ROW, COL);
				}
				else
				{
					printf("�����ѱ�ռ�ã�����������:>\n");
				}
		    }
			else
			{
				Sleep(300);
				printf("���ź����㱻ը���ˣ���!\n");
				DisplayBoard(Mine, ROW, COL);
				break;
			}
		}
		else
		{
			printf("����Ƿ�������������:>\n");
		}
		if (count == 0)
		{
			Sleep(300);
			printf("��ϲ�㣬���׳ɹ�������\n");
		}
	}
}
