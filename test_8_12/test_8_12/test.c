#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//c���Ե�ָ�벿��  * p ��  p �������£�
//1�����ò�ͬ��
// 
//* p��ʾ��ָ��ָ����ڴ��ַ�д�ŵ����ݡ�
//p��һ��ָ����������֣���ʾ��ָ�����ָ����ڴ��ַ��
//int main()
//{
//	 int a[5]={1,2,3,4,5};
//	 int *p;
//	 p=&a[2]; 
//	 ++*p;
//	 ��ͬ��++a[2],ʹpָ���ֵ(���)��1��
//	 
//	 ++p;//��ͬ��p=a[2+1]��ʹpָ��Ŀ�������е���һ��Ԫ��a[3]��(���±��ַ)
//	 return 0;
//}



//���ַ������� 
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