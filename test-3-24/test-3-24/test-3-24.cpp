#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//int main()
//{
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//printf("%p\n", pa);
//	//printf("%p\n", pa+1);
//	char a = 0x11223344;
//	char* pc = &a;
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}

//int My_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = 0;
//	len = My_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int a;
//	int* pa = &a;
//	int* * ppa = &pa;
//	int* * * pppa = &ppa;
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//全局变量


//typedef struct Stu//重命名
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//类型
//void print1(Stu tmp)
//{
//	printf("%s\n", tmp.name);
//	printf("%d\n", tmp.age);
//	printf("%s\n", tmp.tele);
//	printf("%s\n", tmp.sex);
//}
//
//void print2(Stu* tmp)
//{
//	printf("%s\n", tmp->name);
//	printf("%d\n", tmp->age);
//	printf("%s\n", tmp->tele);
//	printf("%s\n", tmp->sex);
//}
//int main()
//{
//	struct Stu s = { "张三",20,"15000000000","male" };
//	print1(s);
//	print2(&s);
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[10];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello world";
//	struct T t = { "hehe",{10,'x',"heihei",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}



//int My_strlen(const char* str)
//{
//	assert(str != 0);
//	const char* start = str;
//	const char* end = str;// *end 即指针所指向的内容不能被改变，但end可改变，end可指向新的地址
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//
//}
//int main()
//{
//	char arr[] = "bitt";
//	int len = 0;
//	len = My_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

