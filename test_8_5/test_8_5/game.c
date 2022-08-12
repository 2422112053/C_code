#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void initboard(char board[row][col], int row1, int col1)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col1; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//此代码无法自由变换棋盘，需优化
//void displayboard(char board[row][col], int row1, int col1)
//{
//	int i = 0;
//	for (i = 0; i < row1; i++)
//	{
//		printf(" %c | %c | %c | \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row1 - 1)
//			printf("---|---|---\n");
//	}
//
//}

void displayboard(char board[row][col], int row1, int col1)
{
	int i = 0;
	for (i = 0; i < row1; i++)
	{
		int j = 0;
		for (j = 0; j < col1; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col1 - 1)
				printf("|");
		}
		printf("\n");
		if (i < row1 - 1)
		{
			int j = 0;
			for (j = 0; j < col1; j++)
			{
				printf("---");
				if (j < col1 - 1)
					printf("|");
			}
			printf("\n");
		}
	}

}