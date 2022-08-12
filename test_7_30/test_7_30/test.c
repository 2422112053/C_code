#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max =%d\n", max);
//	return 0;
//}

//交换两个整型变量的值   这里swap是传值调用
//void swap(int x, int y)//函数返回类型是void,表示这个函数不返回任何值,也不需要返回
//{                      //函数返回类型是int时，要谢return xxx
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	swap(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}     //翻车  值未交换  取地址问题  解法见下面



              //这里的swap是传址调用
//void swap(int*pa, int*pb)//函数返回类型是void,表示这个函数不返回任何值,也不需要返回
//{                        //函数返回类型是int时，要谢return xxx
//	int z = 0;
//	z = *pa;             //
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}     


//判断闰年
//int is_leap_year(int i)
//{
//    if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
//        return 1;
//    else
//        return 0;
//     
//}
//int main()
//{
//    int y = 0;
//    for (y = 1000; y <= 2000; y++)
//    {
//        if (is_leap_year(y) == 1)
//        {
//            printf("%d\n", y);
//        }
//    }
//    return 0;
//}
//

//二分查找
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int key = 7;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    
//    int ret = binary_search(arr, key, sz);
//
//    if (-1 == ret)
//    {
//        printf("找不到\n");
//    }
//    else
//    {
//        printf("找到了\n");
//    }
//    return 0;
//}
//
////自定义函数
//int binary_search(int a[], int k, int s)
//{
//    int left = 0;
//    int right = s - 1;
//
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (mid > k)
//        {
//            right = mid - 1;
//        }
//        else if (mid < k)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//}

#include <string.h>
#include <stdlib.h>
// 函数调用一次，+1

//void add(int* p)
//{
//    (*p)++;
//}
//int main()
//{
//    int num = 0;
//    add(&num);
//    printf("%d\n", num);//  1
//
//    add(&num);
//    printf("%d\n", num);//  2
//
//    add(&num);
//    printf("%d\n", num);//  3
//
//    return 0;
//}

//int main()
//{
//    int len = strlen("abc");
//    printf("%d\n", len);
//
//    printf("%d\n", strlen("abc"));//链式访问
//    return 0;
//}



//int main()
//{
//    int a = 10;
//    int b = 20;
//    int add(int, int);//函数声明一下
//
//    int c = add(a, b);
//    printf("%d\n", c);
//    return 0;
//}
//
//int add(int x, int y)
//{
//    return x + y;
//}



//打印一个数的每一位数
//void print(unsigned int n)
//{
//    if (n > 9)
//    {
//        print(n / 10);
//    }
//    printf("%d ", n % 10);
//}
//
//int main()
//{
//    unsigned int num = 0;
//    scanf("%u", &num);
//    //递归   函数自己调用自己
//    print(num);//print函数可以打印参数部分数字的每一位
//    return 0;
//}


//计算字符串的长度，不得创建临时变量
//int my_strlen(char* str)   
//{
//    if (*str != '\0')   //递归函数
//        return 1 + my_strlen(str + 1);
//    else
//        return 0;
//}
//
//int main()
//{
//    char arr[] = "bit";
//    //[b] [i] [t] [\0] //这里的\0不会计算到长度中
//    //模拟实现一个strlen函数
//    printf("%d\n", my_strlen(arr));
//
//    return 0;
//}



//求n的阶层   常法
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int m = 0;
//    int sb = 1;
//    for (m = 1; m <= n; m++)
//    {                       //循环是一种迭代
//        sb = sb * m;
//    }
//    printf("%d\n", sb);
//    return 0;
//
//}

//求n的阶层   递归法
//int fuck(int n)
//{
//    if (n <= 1)
//        return 1;
//    else
//        return n * fuck(n - 1);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//
//    int ret = fuck(n);
//    printf("%d", ret);
//    return 0;
//}


//求第n个斐波那契数   例 1 1 2 3 5 8 13 21 34...
//int fuck(int n)  //递归算这题废电脑
//{
//    if (n <= 2)
//        return 1;
//    else
//        return fuck(n - 1) + fuck(n - 2);
//}              //fuck(2) + fuck(1)  =  2  当n=3时
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fuck(n);
//    printf("%d", ret);
//    return 0;
//}
//用循环算上题

//int fuck(n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n>2)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;      //控制循环次数
//    }
//    return c;  //n=1或2时，c都为1
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fuck(n);
//    printf("%d", ret);
//    return 0;
//}


//计算1+1/2+1/3+1/4++...1/99+1/100的值
//int main()
//{
//    int i = 0;
//    double sum = 0.0;
//    for (i = 1; i <= 100; i++)
//    { 
//        sum += 1.0 / i;
//    }
//    printf("%lf", sum);
//    return 0;
//}
//1-1/2+1/3-1/4+1/5-...+1/99-1/100的值
//int main()
//{
//    int i = 0;
//    double sum = 0.0;
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 2 == 0)
//            sum -= 1.0 / i;
//        else
//            sum += 1.0 / i;
//    }
//    printf("%lf", sum);
//    return 0;
//}



//求十个整数的最大值
//int main()
//{
//    int i = 0;               //当数组全是负数，无法比较  
//    int max = 0;             //优化  int max = arr[0];
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    for (i = 0; i < 10; i++) //优化 （i= 1；i<=10；i++）
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    printf("%d", max);
//    return 0;
//}


//打印出九九乘法表
//int main()
//{
//    int i = 1;
//    for (i = 1; i <= 9; i++)
//    {
//        int j = 0;
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%d ", i, j, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//#include <string.h>
//int fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * fun(n + 1);
//    
//}
//int main() 
//{
//
//    printf("%d", fun(2));
//    
//    return 0;
//}

//递归法将字符串顺序反过来

//int my_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    } 
//    return count;
//}
//void reverse_string(char *str)
//{
//    char tmp = *str;
//    int len = my_strlen(str);
//    *str = *(str + len - 1);
//    *(str + len - 1) = '\0';
//
//    if (my_strlen(str + 1) >= 2)
//    {
//        reverse_string(str + 1);
//    }
//
//    *(str + len - 1) = tmp;
//}
//int main()
//{ 
//    char arr[] = "abcdef";
//    reverse_string(arr);//数组名arr时数组arr首元素的地址
//    printf("%s\n", arr);//fedcba
//    return 0;
//}

//实现一个数的每个个数相加
//int fuck(int n)
//{
//    if (n > 9)
//        return fuck(n / 10) + n % 10;
//    else
//        return n;
//
//}
//
//int main()
//{
//    int num = 1729;
//    int sum = fuck(num);
//    printf("%d\n", sum);
//    return 0;
//}
//写一个实现n的k次方，用递归
//double fuck(int n,int k)
//{
//    if (k == 0)
//        return 1.0;
//    else if (k > 0)
//        return n * fuck(n, k - 1);
//    else
//        return 1.0 / (fuck(n, -k));
//}
//
//int main()
//{
//    int n = 0;
//    int k = 0;
//    scanf("%d %d", &n, &k);
//    double num = fuck(n,k);
//    printf("%lf\n", num);
//    return 0;
//}

int main()
{
    int arr[10] = { 0 };
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("&arr[%d] = %p\n", i, &arr[i]);
    }
    return 0;
}