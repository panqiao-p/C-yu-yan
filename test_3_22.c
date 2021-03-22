#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>

//malloc的使用
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

calloc的使用,能初始化开辟的空间为0
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

realloc的使用
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
	if (ptr != NULL)                       //先用其他指针接受，判断有效后再赋值给最开始的指针
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
