#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
	//int age = 16;
	// 
	//if (age >= 18)
	//	printf("����\n");
	// 
	//else
	//	printf("δ����\n");
	// 
	//return 0;




	/*int age = 25;

	if (age < 18)
		printf("����\n");

	else if (age >= 18 && age < 26)
		printf("����\n");

	else if (age >= 26 && age < 40)
		printf("׳��\n");

	else if (age >= 40 && age < 60)
		printf("����\n");
	else
		printf("����\n");

		return 0;*/





	//int num = 7;

	//if (7 == num)//�������ͱ����Ƚ�ʱ�������������һ���õĴ�����
	//	printf("haha\n");

	//return 0;

	/*int a = 0;


	if (a % 2 == 0)
		printf("ż/n");

	else
		printf("��/n");


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

	//return 0;//ɶҲ����


	//1��100������
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
//	int a = 1;//��ʼ��
//	while (a <= 10) // �жϲ���
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
//	int i = 1;//��ʼ��
//	while (i <= 10)//�жϲ���
//	{
//		printf("%d", i);
//		i++;//��������
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


//int main()//do while���
//{
//	int a = 0;
//	do
//	{
//		
//		printf("%d ", a);
//		a++;
//	} while (a <= 10);
//}



//����n�Ľ׳�
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
//����1��+2��+...+9��+10����ֵ
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
//	int k = 7;//Ҫ���ҵ���
//	//��arr����������ҵ�k��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}
 