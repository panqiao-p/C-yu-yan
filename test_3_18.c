#include<stdio.h>
#include<assert.h>

char* my_memcpy(void* dest,void* src,size_t count)
{
	char* ret = dest;
	while (count--)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[10] = { 0 };
	my_memcpy(arr2,arr1,sizeof(arr1));
	return 0;
}

ģ��ʵ��memmove                   //��һ���Ÿ�ţ��
void* my_memmove(void* dest, void* src, size_t count)
{
	void* ret = dest;


	char* dest1 = (char*)dest + count-1;
	char* src1 = (char*)src + count-1;
	if ((char*)src < (char*)dest)
	{
		while ((char*)src <= src1)
		{
			*dest1 = *src1;
			dest1--;
			src1--;
		}
	}
	else
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
	}
	return ret;
}

ģ��ʵ��memmove�Ż��汾   
void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest&&src);
	void* ret = dest;
	if (src < dest)   //ֻ�Ƚϴ�С������Ҫת��
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);  //����count�����贴����ʱ���������������Լ�1.
		}
	}
	else
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
	}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 1,3,5,7,9 };
	my_memmove(arr1 , arr1+2, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}
