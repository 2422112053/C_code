#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//c语言的指针部分  * p 与  p 区别如下：
//1、作用不同。
// 
//* p表示此指针指向的内存地址中存放的内容。
//p是一个指针变量的名字，表示此指针变量指向的内存地址。
//int main()
//{
//	 int a[5]={1,2,3,4,5};
//	 int *p;
//	 p=&a[2]; 
//	 ++*p;
//	 等同于++a[2],使p指向的值(结果)加1。
//	 
//	 ++p;//等同于p=a[2+1]，使p指向目标数组中的下一个元素a[3]。(即下标地址)
//	 return 0;
//}



//求字符串长度 
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcd");
//	printf("%d\n", len);
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i + 1;
	}
	return 0;
}