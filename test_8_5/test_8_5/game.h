#pragma once
#include <stdio.h>

//符号的定义
#define  row 3  //行
#define  col 3  //列

//函数的声明
// 
//初始化棋盘
void initboard(char board[row][col], int row1, int col1);

//打印棋盘的函数
void displayboard(char board[row][col], int row1, int col1);