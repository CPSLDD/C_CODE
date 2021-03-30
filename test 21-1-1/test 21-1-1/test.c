#include <stdio.h>
#include<string.h>
//int main()
//{   int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d", &a ,&b);
//		sum = a + b;
//		printf("sum = %d\n", sum);
//
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0};//\0是字符串结束标志
//	char arr3[] = { 'a','b','c' };
//	printf("%s\n", arr1);
//	printf("%d\n", strlen(arr1));
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr2));
//	printf("%s\n", arr3);
//	printf("%d\n", strlen(arr3));
		//return 0;

//}
//int main()
//{
//	int line = 0;
//	while(line<20000)
//	{
//		printf("敲代码");
//		printf("%d\n", line);
//		line++;
//	}
//	return 0;
//
//}
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = a & b;
//	printf("%d\n", c);
//	return 0;
//
//}
//int main()
//{
//	int a = 10;
//	int* p = &a; //取a的地址
//	*p = 20;//解引用p对a进行操作
//	printf("%d\n", a);
//	printf("%d\n", p);
//
//	return 0;
//}
//struct student
//{
//	char name[20];
//	int num;
//	};
//int main()
//{
//	struct student s1 = { "张力",2019642064 };
//	struct student* ps = &s1;
//	printf("姓名：%s\n", (*ps).name);
//	printf("学号：%d\n", ps->num);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("输入数字（0~100）：");
//		scanf("%d", &a);
//	if (a % 2 == 0)
//		printf("偶数\n");
//	else
//		printf("奇数\n");
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 0)
//		{
//			a++;
//		}
//		else
//		{
//			printf("%d\n", a);
//			a++;
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	for (ch = 0; ch != EOF; ch = getchar())
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 1;
//	int n1 = 0;
//	printf("输入数字n: ");
//	scanf("%d", &n);
//	n1 = n;
//	for(n=n;n>0;n--)
//	{
//		m = m * n;
//	}
//	printf("%d!= %d\n",n1,m);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int k = 1;
//	int n = 0;
//	for (scanf("%d", &i); i > 0; i--)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			k = k * j;
//		}
//		n = n + k;
//		k = 1;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int k = 1;
//	int n = 0;
//	scanf("%d", &j);
//	for (i=1; i <= j; i++)
//	{
//		k = k * i;
//		n = n + k;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	printf("查找数字：");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (right >= left)
//	{
//		int mid = (left + right) / 2;
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
//			printf("find that at no.%d\n", (mid + 1));
//			break;
//		}
//		
//	}
//	if (left > right)
//			printf("can't find\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	scanf("%d%d",&a,&b);
//	while (a%b)
//	{
//		n = a % b;
//		a = b;
//		b = n;
//	}
//	printf("最大公约数：%d\n", b);
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2020; y++)
//	{
//		if ((y % 4 == 0) && (y % 100 != 0))
//			printf("%d  ", y);
//		else if ((y % 100 == 0) && (y % 400 == 0))
//			printf("%d  ", y);
//		else
//			;
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d	", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;	
//}
