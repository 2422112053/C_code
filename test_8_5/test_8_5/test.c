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
//	printf("%p\n", &arr);//ȥ����ʱ����ĵ�ַ
//	printf("%p\n", &arr+1);//��ʾ���˸�����Ĵ�С
//
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//
//	int sz = sizeof(arr);//��������ʾ��������
//	printf("%d\n", sz);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);//������ʱ��Ԫ�صĵ�ַ
//	return 0;
//}


//��һ����������Ϸ
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
	//�洢����  -  ��ά����
	char board[row][col]; //��������game.hͷ�ļ�
    //��ʼ������ - ��ʼ���ո�
	initboard(board, row, col);
	//��ӡһ������-����ʱ��ӡ���������
	displayboard(board, row, col);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
				break;
			default :
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (input);

	return 0;
}