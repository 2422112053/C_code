#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//交换两个数的值，不创第三变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//
//	a = a ^ b;//用二进制  ^为异或的符号
//	b = a ^ b;//异或：相同为0，相异为1
//	a = a ^ b;
//
//	printf("a=%d b=%d\n", a, b);
//	  
//	return 0;
//}

//编代码实现一个整数存储在内存中的二进制中1的个数














//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);//a与上（1的二进制左移四位）
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);//sizeof括号中的表达式不参与运算
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++; 
//	printf("%d %d %d %d \n", a, b, c, d);
//	printf("%d\n", i);
//	return 0;
//}



//结构体操作符
//struct book
//{
//	char name[10];
//	char id[20];
//	int price;
//};
//int main()
//{   //结构体变量名.成员名
//	struct book b= { "c语言","c2022",28 };
//	printf("书名:%s\n", b.name);  //访问一个结构的成员
//	printf("书号:%s\n", b.id);
//	printf("价格:%d\n", b.price);
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%c\n", c);
//	return 0;
//}


//int main()
//{
//	char a[] = "abcdefg";
//	char b[] = { 'a','b','c','d','e','f','g' };
//	printf("%d ", strlen(a));
//	printf("%d ", strlen(b));
//	return 0;
//}


//void init(int(arr []), int(sz))//初始化数组全为0
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr [i] = 0;
//	}
//}
// 
//void print(int arr[], int sz)//打印函数
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)//数组逆置
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while(left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof (arr) / sizeof (arr[0]);
//
//	print(arr, sz);
//	reverse(arr, sz);//逆置
//	print(arr, sz);//逆置打印
//	init(arr, sz);//数组初始化全为0
//	print(arr, sz);
//	return 0;
//}



//int main()    //两个数组一一对应交换
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for(i= 0;i<sz;i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("%d \n",sz);
//	printf("%d %d %d %d %d\n",arr1[0], arr1[1],arr1[2],arr1[3],arr1[4]);
//	printf("%d %d %d %d %d\n",arr2[0], arr2[1],arr2[2],arr2[3],arr2[4]);
//	return 0;
//}


