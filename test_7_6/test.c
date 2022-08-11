#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
	//int age = 16;
	// 
	//if (age >= 18)
	//	printf("成年\n");
	// 
	//else
	//	printf("未成年\n");
	// 
	//return 0;




	/*int age = 25;

	if (age < 18)
		printf("少年\n");

	else if (age >= 18 && age < 26)
		printf("青年\n");

	else if (age >= 26 && age < 40)
		printf("壮年\n");

	else if (age >= 40 && age < 60)
		printf("中年\n");
	else
		printf("老年\n");

		return 0;*/





	//int num = 7;

	//if (7 == num)//两个整型变量比较时，常量放左边是一个好的代码风格
	//	printf("haha\n");

	//return 0;

	/*int a = 0;


	if (a % 2 == 0)
		printf("偶/n");

	else
		printf("奇/n");


	return 0;*/


	//int a = 0;
	//int b = 0;
	//b = a % 2;
	//while (a < 200)
	//	a++;

	//if (a % 2 == 0)
	//	printf("\n");

	//else
	//	printf("%d\n", b);

	//return 0;//啥也不是


	//1到100的奇数
	/*int a = 0;
	for (a = 1; a < 100; a++)
	{
		if (1 == a % 2)
			printf("%d\n", a);
	}
	return 0;*/


	//int n = 1; int m = 2;
	//switch (n)
	//{
	//case 1: m++;
	//case 2: n++;
	//case 3:
	//	switch (n)
	//	{
	//	case 1: n++;
	//	case 2: m++; n++;
	//		break;
	//	}
	//case 4:
	//	m++;
	//	break;
	//default:
	//	break;
	//}
	//printf("m = %d, n = %d\n", m, n);
	//return 0;

//}


//int main()
//{
//	int a = 1;//初始化
//	while (a <= 10) // 判断部分
//	{
//		if (a == 5)
//			continue;
//		printf("%d\n", a);
//		a++; 
//	}
//	return 0;
//
//}

//int main()
//{
//	int i = 1;//初始化
//	while (i <= 10)//判断部分
//	{
//		printf("%d", i);
//		i++;//调整部分
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	for (i = 1;i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;

//} 


//int main()//do while语句
//{
//	int a = 0;
//	do
//	{
//		
//		printf("%d ", a);
//		a++;
//	} while (a <= 10);
//}



//计算n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	int s = 1;  
//	
//	for (i = 1; i <= n; i++)
//	{
//		s = (s * i);
//	}
//	printf("%d ", s);
//	return 0;
//}
//计算1！+2！+...+9！+10！的值
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	int s = 1;
//	int num = 0;
//
//	for (i = 1; i <= n; i++)
//	{
//		s = (s * i);
//		num = num + s;
//	} 
//	printf("%d ", num);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数
//	//在arr这个数组中找到k的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}
 