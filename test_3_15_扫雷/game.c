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
	for (i = 0; i <= row; i++)//打印行号
	{
		printf("%d ", i);
	}
	printf("\n");
	
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印列号
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
		printf("请输入坐标:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (Mine[x][y]!='1')
			{
				//显示周边雷的数量
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
					printf("坐标已被占用，请重新输入:>\n");
				}
		    }
			else
			{
				Sleep(300);
				printf("很遗憾，你被炸死了！！!\n");
				DisplayBoard(Mine, ROW, COL);
				break;
			}
		}
		else
		{
			printf("坐标非法，请重新输入:>\n");
		}
		if (count == 0)
		{
			Sleep(300);
			printf("恭喜你，排雷成功！！！\n");
		}
	}
}
