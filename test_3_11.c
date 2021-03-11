#include<stdio.h>
#include<stdlib.h>

struct stu
{
	char name[20];
	int age;
};

int cmp_age(const void*e1, const void*e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

int cmp_name(const void*e1, const void*e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
		
}

int main()
{
	struct stu s[3] = { {"zhangsan",30},{"lisi",20},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_age);
	qsort(s, sz, sizeof(s[0]), cmp_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ",s->name);
	}
	return 0;
}

int cmp(const void* e1, const void* e2)
{
	return (*(float*)e1 - *(float*)e2);
}
int main()
{
	float arr[] = { 9.0,8.7,8.8,6.9,5.0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	qsort(arr, sz, sizeof(arr[0]), cmp);
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
	return 0;
}


void Bubble_sort(float arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j<sz-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()//冒泡排序整形数组
{
	float arr[] = { 9.0,8.7,8.8,6.9,5.0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	Bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
	return 0;
}

void Bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j<sz-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()//冒泡排序整形数组
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	Bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}