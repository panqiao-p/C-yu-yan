#include <stdio.h>
#include <math.h>

int binary_search(int arr[], int k, int sz)     //函数实现对有序数组的二分查找
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return 0;
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret=binary_search(arr, k, sz);
	if (ret == 0)
	{
		printf("找不到指定数字"); 
	}
	else
	{
		printf("找到了下标是%d", ret);
	}
	return 0;
}



int is_prime(int n)                      //函数判断素数
{
	int j = 0;
	for (j = 2; j <=sqrt(n); j++)
	{
		if (n%j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("count=%d", count);
	return 0;
}

int main()                         //判断素数
{
	int i = 1;
	int t = 1;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (t = 2; t < i; t++)
		{
			if (i%t == 0)
			{
				break;
			}
		}
		if (i == t)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("count=%d\n", count);
	return 0;
}