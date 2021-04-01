#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* x, const void* y)
{
	return *(int*)x - *(int*)y;
}

int cmp_stu_by_name(const void*x, const void*y)
{
	return strcmp(((struct Stu*)x)->name, ((struct Stu*)y)->name);
}

int cmp_stu_by_age(const void*x, const void*y)
{
	return ((struct Stu*)x)->age - ((struct Stu*)y)->age;
}

void swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for (i + 0; i < width; i++)
	{
		char tmp;
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz-1-i; j++)
		{
			if (cmp((char*)base+width*j,(char*)base+width*(j+1) ) > 0)
			{
				swap((char*)base + width * j, (char*)base + width * (j + 1),width);
			}
		}
	}
}



void testarr()
{
	int arr[10] = { 2,5,4,6,7,1,3,9,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}


void testStr()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",26},{"wangwu",12} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
int main()
{
	testarr();
	testStr();
;	return 0;
}