#include<stdio.h>
#include<string.h>
#include<assert.h>

两个空瓶换一瓶水
int main()
{
	int money = 0;
	int sum = 0;
	int empty = 0;
	scanf("%d", &money);
	//买回来的汽水喝掉
	empty = money;
	sum = money;
	//换回来的汽水
	while (empty>=2)
	{
		sum = sum + empty/2;
		empty = empty / 2 + empty % 2;
	}
	printf("sum=%d",sum);
	return 0;
}

模拟实现strcpy

void my_strcpy(char* p1, char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	while (*p2!='\0')
	{
		*p1++ = *p2++;
	}
	*p1 = *p2;
}

int main()
{
	char arr1[] = "abcdefghijk";
	char arr2[] = "panqiao";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}  

void Move(int* p, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		//从左边找偶数
		while (left < right&&p[left] % 2 != 0)
		{
			left++;
		}
		//从右边找奇数
		while (left < right&&p[right] % 2 == 0)
		{
			right--;
		}
		int tmp = p[left];
		p[left] = p[right];
		p[right] = tmp;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Move(arr,sz);
	for (int i = 0; i < sz - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}