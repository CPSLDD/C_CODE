#define _CRT_SECURE_NO_WARNINGS_1
#include<stdio.h>

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//"abcdef"�ǳ����ַ���
//	printf("%c\n", p);
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	//int* p = NULL;
//	//char* pc = NULL;
//	//char* arr[5];
//	//char* (*pa)[5]=&arr;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;//*pa==arr
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//		printf("%d ", *(*pa + 1));
//	}
//	return 0;
//}

//void print1(int(*p)[5],int x,int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));//printf("%d ", (*(p + i))[j])//p[i][j]
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	return 0;
//}

//int Add(int x,int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n",Add(a, b));
//	printf("%d\n",(*pa)(2, 3));
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	return 0;
//}

//void Print(const char*str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void(*p)(const char*) = Print;
//	(*p)("hello world");
//	return 0;
//}

//void(* signal(int, void(*)(int)))(int)//signalΪ���������������ж�����һ����int���ͣ��ڶ����Ǻ���ָ�룬�ú���ָ��ָ����������int����������Ϊvoid
//{};									//signal�����ķ���ֵҲ��һ������ָ�룬�ú���ָ��ָ��ĺ���������int,����ֵ��void
//typedef void(*pfun_t)(int);//��
//pfun_t signal(int, pfun_t);
//typedef unsigned int unit;
