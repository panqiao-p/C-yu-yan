#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;                 //�������ź��� 1 0 2 3 4 5 6 7 8 9
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int tmp = 0;
				tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j]=tmp;
				flag = 0;              //����
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = {8,9,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}