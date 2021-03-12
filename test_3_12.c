#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void*e1, const void*e2)
{
	return (*(int*)e1 - *(int*)e2);
}

/*void swap(char*a1, char*a2,int width)        //qsort的实现（冒泡思想）
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *a1;
		*a1 = *a2;
		*a2 = tmp;
		a1++;
		a2++;
	}
}

void my_qsort(void* base, int sz, int width, int(*cmp)(const void*e1, const void*e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz-i-1; j++)
		{
			if (cmp((char*)base+width*j, (char*)base + width * (j+1)) > 0)
			{
				swap((char*)base + width * j, (char*)base + width * (j + 1),width);
			}
		}
	}
}*/


int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr,sz,sizeof(arr[0]),cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}






struct stu
{
	char name[20];
	int age[10]; 
};

int cmp_name(const void*e1, const void*e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

int main()
{
	struct stu arr[3] = { {"laowang",20},{"xiaoming",30},{"sisi",50} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]), cmp_name);
	return 0;
}