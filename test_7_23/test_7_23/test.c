#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{              //程序从大到小输出三个整数
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
// 
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
// 
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
// 
//	printf("%d %d %d\n", a, b, c); 
// 
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
// 
// 
//求两个数的最大公约数
//int main()
//{
//	int i = 0;
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	if (m < n)
//	{
//		i = m;
//	}
//	else
//		(i = n);
//	while (1)
//	{
//		if (m % i == 0 && n % i == 0)
//		{
//			printf("最大公约数是：%d\n", i);
//			break;
//		}
//		i--;
//	}
//	return 0;
//} 
// 
// 
//判断闰年
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0)
//		{ 
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount =%d\n", count);
//	return 0;
//}

//换种方式

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}

//打印100-200的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//#include <string.h>
//#include <stdlib.h>
//int main()        //goto语句示例 
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 120");
//
//	again:
//	printf("请注意，你打电脑在2分钟后关机，输入：我是猪，取消关机\n");
//	scanf("%s", &input);
//
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//int main()        //无goto语句示例 
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 120");
//
//	while (1)
//	{
//		printf("请注意，你打电脑在2分钟后关机，输入：我是猪，取消关机\n");
//		scanf("%s", &input);
//		 
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);//将arr2的字符串复制到arr1
//	printf("%s", arr1);
//	return 0;
//}


//int main()
//{
//	char arr[] = "are you sb";
//	memset(arr, 'x', 7);//内存设置，将arr前7个字符改成x
//	printf("%s\n", arr);
//	return 0;
//}


