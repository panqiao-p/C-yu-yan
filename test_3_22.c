#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>

//malloc��ʹ��
int main()
{
	int* p=(int*)malloc(10*sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p+i));//==p[i]
	}
	free(p);
	p = NULL;
	return 0;
}

calloc��ʹ��,�ܳ�ʼ�����ٵĿռ�Ϊ0
int main()
{
	char* p = (char*)calloc(10, sizeof(char));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			*(p + i) = '*';
		}
	}
	for (int i = 0; i < 15; i++)
	{
		printf("%c", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}

int main()
{
	char* p = (char*)calloc(10, sizeof(char));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		char* p = "panqiaohaoshui";
		for (int i = 0; i < 15; i++)
		{
			printf("%c", *(p + i));
		}
	}
	
	free(p);
	p = NULL;
	return 0;
}

realloc��ʹ��
int main()
{
	int* p = (int*)calloc(10, 4);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
	}
	int*ptr = (int*)realloc(p, 80);
	if (ptr != NULL)                       //��������ָ����ܣ��ж���Ч���ٸ�ֵ���ʼ��ָ��
	{
		p = ptr;
	}
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 20; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}
