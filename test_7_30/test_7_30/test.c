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

//�����������ͱ�����ֵ   ����swap�Ǵ�ֵ����
//void swap(int x, int y)//��������������void,��ʾ��������������κ�ֵ,Ҳ����Ҫ����
//{                      //��������������intʱ��Ҫлreturn xxx
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	swap(a, b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}     //����  ֵδ����  ȡ��ַ����  �ⷨ������



              //�����swap�Ǵ�ַ����
//void swap(int*pa, int*pb)//��������������void,��ʾ��������������κ�ֵ,Ҳ����Ҫ����
//{                        //��������������intʱ��Ҫлreturn xxx
//	int z = 0;
//	z = *pa;             //
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}     


//�ж�����
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

//���ֲ���
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
//        printf("�Ҳ���\n");
//    }
//    else
//    {
//        printf("�ҵ���\n");
//    }
//    return 0;
//}
//
////�Զ��庯��
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
// ��������һ�Σ�+1

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
//    printf("%d\n", strlen("abc"));//��ʽ����
//    return 0;
//}



//int main()
//{
//    int a = 10;
//    int b = 20;
//    int add(int, int);//��������һ��
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



//��ӡһ������ÿһλ��
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
//    //�ݹ�   �����Լ������Լ�
//    print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
//    return 0;
//}


//�����ַ����ĳ��ȣ����ô�����ʱ����
//int my_strlen(char* str)   
//{
//    if (*str != '\0')   //�ݹ麯��
//        return 1 + my_strlen(str + 1);
//    else
//        return 0;
//}
//
//int main()
//{
//    char arr[] = "bit";
//    //[b] [i] [t] [\0] //�����\0������㵽������
//    //ģ��ʵ��һ��strlen����
//    printf("%d\n", my_strlen(arr));
//
//    return 0;
//}



//��n�Ľײ�   ����
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int m = 0;
//    int sb = 1;
//    for (m = 1; m <= n; m++)
//    {                       //ѭ����һ�ֵ���
//        sb = sb * m;
//    }
//    printf("%d\n", sb);
//    return 0;
//
//}

//��n�Ľײ�   �ݹ鷨
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


//���n��쳲�������   �� 1 1 2 3 5 8 13 21 34...
//int fuck(int n)  //�ݹ�������ϵ���
//{
//    if (n <= 2)
//        return 1;
//    else
//        return fuck(n - 1) + fuck(n - 2);
//}              //fuck(2) + fuck(1)  =  2  ��n=3ʱ
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fuck(n);
//    printf("%d", ret);
//    return 0;
//}
//��ѭ��������

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
//        n--;      //����ѭ������
//    }
//    return c;  //n=1��2ʱ��c��Ϊ1
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fuck(n);
//    printf("%d", ret);
//    return 0;
//}


//����1+1/2+1/3+1/4++...1/99+1/100��ֵ
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
//1-1/2+1/3-1/4+1/5-...+1/99-1/100��ֵ
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



//��ʮ�����������ֵ
//int main()
//{
//    int i = 0;               //������ȫ�Ǹ������޷��Ƚ�  
//    int max = 0;             //�Ż�  int max = arr[0];
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    for (i = 0; i < 10; i++) //�Ż� ��i= 1��i<=10��i++��
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    printf("%d", max);
//    return 0;
//}


//��ӡ���žų˷���
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

//�ݹ鷨���ַ���˳�򷴹���

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
//    reverse_string(arr);//������arrʱ����arr��Ԫ�صĵ�ַ
//    printf("%s\n", arr);//fedcba
//    return 0;
//}

//ʵ��һ������ÿ���������
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
//дһ��ʵ��n��k�η����õݹ�
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