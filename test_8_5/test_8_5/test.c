#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("&arr[%d] = %p\n", i, &arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);//去除掉时数组的地址
//	printf("%p\n", &arr+1);//表示加了个数组的大小
//
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//
//	int sz = sizeof(arr);//数组名表示整个数组
//	printf("%d\n", sz);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);//数组名时首元素的地址
//	return 0;
//}


//做一个三子棋游戏
#include "game.h"
void menu()
{
	printf("***************************\n");
	printf("*****    1.play   *********\n");
	printf("*****    0.exit   *********\n");
	printf("***************************\n");
}

void game()
{
	//存储数据  -  二维数组
	char board[row][col]; //这里引用game.h头文件
    //初始化棋盘 - 初始化空格
	initboard(board, row, col);
	//打印一下棋盘-本质时打印数组的内容
	displayboard(board, row, col);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
				break;
			default :
				printf("选择错误，请重新选择\n");
				break;
		}
	} while (input);

	return 0;
}