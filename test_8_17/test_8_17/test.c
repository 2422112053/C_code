#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()                      //��n�Ľײ�
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = i * ret;
//	}
//	printf("%d", ret);
//	return 0;
//}


//int main()                      //��1��+2��+3��+...+n!�Ľײ�
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int i = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret = i * ret;
//		}
//		sum  += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	const int num = 10;  //����num��ֵ
//	const int* p = &num; //����*p
//	//int** p = &p;
//	//int **p = 20;      //err  ����ָ��Ҳ������
//	int* r = p;          //�ܸģ�����ָ��
//	*r = 20;
//	printf("%d\n", num);
//	return 0;
//}

#include<assert.h>
 int my_strlen(const char* str)
{
	 int count = 0;
	assert(*str != NULL);
	while (*str != '\0')     //(*(str++) !='\0')
	{
		str++;              //ʡ��д������
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "fuck";
	int len = my_strlen(arr);
	printf("%d\n", len);
	
	return 0;
}