#include<stdio.h>
//�ݹ�˼��ʵ��strlen
int my_strlen(char* p)
{
	if (*p == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(++p);    //һ��Ҫǰ��++
	}
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}


//ʵ��strcpy

char* my_strcpy(char* dest,char* soc)
{
	char* ret = dest;
	while (*dest++ = *soc++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "panqiao";
	char arr2[] = "haoshuai";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}

ʵ��strcat
char* my_strcat(char* p1, char* p2)
{
	char* ret = p1;
	while (*p1 != '\0')
	{
		p1++;
	}
	while (*p1++ = *p2++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "efg";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
}


ʵ��my_strcmp
int my_strcmp(const char* p1, const char* p2)
{
	while (*p1 == *p2)
	{
		if (*p1 == '\0')
		{
			return 0;
		}
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	int ret=my_strcmp(arr1, arr2);
	printf("%d\n", ret);
}

ʵ��strncpy
#include<string.h>
char* my_strncpy(char* p1, char*p2, int count)
{
	for (int i = 0; i < count; i++)
	{
		if (*p2 != '\0')
		{
			*p1 = *p2;
			p1++;
			p2++;
		}
		else
		{
			*p1 = '\0';//��bug
			p1++;
			p2++;
		}
	}
}
int main()
{
	char arr1[20] = "abcdef######";
	char arr2[] = "****";
	my_strncpy(arr1, arr2,7);
	printf("%s\n", arr1);
}



