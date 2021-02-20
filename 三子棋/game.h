#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#define ROW 3
#define COL 3
//º¯ÊýÉùÃ÷
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
