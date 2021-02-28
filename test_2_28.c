#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	*p = 20;
	printf("%d\n", &arr[9]-p);
	return 0;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		int* pa = arr;

		printf("%d ", *(pa + i)=0);
	}
	return 0;
}

int my_strlen(char* arr)//需要找到\0的地址
{
	char* pa = arr;
	for (int i = 0; (*pa) != '\0';)
	{
		pa++;
	}
		return pa - arr;
}

int main()
{
	char arr[] = "panqiaohenshuai";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int* p = &arr[10]; p > &arr[0];)
	{
		*--p = 0;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(arr + i));
	}
	return 0;
}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int* pa = arr;
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("\n");
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	return 0;
}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int* pa = arr;
	int* *ppa = &pa;
	**ppa = 20;
	printf("%p\n", &ppa);
	printf("%p\n", &pa);
	printf("%d\n", *pa);
	printf("%d\n", arr[0]);
	return 0;
}

void init(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr,sz);//初始化0
	print(arr,sz);//打印元素
	reverse(arr,sz);//逆置元素
	print(arr, sz);
	return 0;
}


void Exchange(int arr1[], int arr2[], int sz)
{
	int* pa1 = arr1;
	int* pa2 = arr2;
	int count = 0;
	while (count<sz)
	{
		int tmp = *pa1;
		*pa1 = *pa2;
		*pa2 = tmp;
		pa1++;
		pa2++;
		count++;
	}
}
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	printf("\n");
	printf("\n");
	Exchange(arr1,arr2,sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
    }
	printf("\n");
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}

int fun(unsigned int a)           //数中储存1的个数
{
	int count = 0;
	while (a!=0)
	{
		if (a % 2 == 1)
		{
			count++;
		}
		a = a / 2;
	}
	return count;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int count=fun(a);
	printf("count=%d\n", count);
	return 0;
}

int fun(int a)
{
	int count = 0;
	for (int i = 1; i <= 32; i++)
	{
		if (a & 1 == 1)
		{
			count++;
		}
		a=a >> 1;
	}
	return count;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = fun(a);
	printf("count=%d\n", count);
	return 0;
}

int fun(int a, int b)
{
	int count = 0;
	int c = a ^ b;
	while (c)
	{
		c = c & (c - 1);
		count++;
	}
}

int main()
{
	int a = 0, b = 0;
	int count = 0;
	scanf("%d%d", &a, &b);
	count=fun(a, b);
	printf("%d\n", count);
}

void fun(int m)
{
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d ", i, j, i*j);
		}
		printf("\n");
    }
}

int main()
{
	int m = 0;
	scanf("%d", &m);
	fun(m);
	return 0;
}