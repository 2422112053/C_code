#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//������������ֵ��������������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//
//	a = a ^ b;//�ö�����  ^Ϊ���ķ���
//	b = a ^ b;//�����ͬΪ0������Ϊ1
//	a = a ^ b;
//
//	printf("a=%d b=%d\n", a, b);
//	  
//	return 0;
//}

//�����ʵ��һ�������洢���ڴ��еĶ�������1�ĸ���














//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);//a���ϣ�1�Ķ�����������λ��
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);//sizeof�����еı��ʽ����������
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



//�ṹ�������
//struct book
//{
//	char name[10];
//	char id[20];
//	int price;
//};
//int main()
//{   //�ṹ�������.��Ա��
//	struct book b= { "c����","c2022",28 };
//	printf("����:%s\n", b.name);  //����һ���ṹ�ĳ�Ա
//	printf("���:%s\n", b.id);
//	printf("�۸�:%d\n", b.price);
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


//void init(int(arr []), int(sz))//��ʼ������ȫΪ0
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr [i] = 0;
//	}
//}
// 
//void print(int arr[], int sz)//��ӡ����
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)//��������
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
//	reverse(arr, sz);//����
//	print(arr, sz);//���ô�ӡ
//	init(arr, sz);//�����ʼ��ȫΪ0
//	print(arr, sz);
//	return 0;
//}



//int main()    //��������һһ��Ӧ����
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


