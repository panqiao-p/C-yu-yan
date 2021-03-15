#pragma once
#define ROWS 9      //真实棋盘大小
#define COLS 9
#define COL COLS-2   //可视棋盘大小
#define ROW ROWS-2
#define Mine_Count 10    //雷的数量

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char arr[ROWS][COLS], int rows , int col);
void SetMine(char mine[ROWS][COLS], int row, int col);
FindMind(char Mine[ROWS][COLS],char Show[ROWS][COLS], int row, int col);

