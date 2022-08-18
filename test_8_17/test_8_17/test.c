#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()                      //求n的阶层
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


//int main()                      //求1！+2！+3！+...+n!的阶层
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
//	const int num = 10;  //锁死num的值
//	const int* p = &num; //锁死*p
//	//int** p = &p;
//	//int **p = 20;      //err  二级指针也不能了
//	int* r = p;          //能改，换个指针
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
		str++;              //省略写到上面
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