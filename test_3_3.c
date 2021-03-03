#include <stdio.h>
#include <assert.h>

int main()
{
	char a = -128;
	printf("%d\n", a);
	printf("%u\n", a);
	return 0;
}

int main()
{
	unsigned char a = -128;
	printf("%d\n", a);
	printf("%u\n", a);
	return 0;
}

int my_strlen(const char* pa)
{
	assert(pa != NULL);
	int count = 0;
	while (*pa != '\0')
	{
		count++;
		pa++;
	}
	return count;
}
int main()
{
	char arr[] = "asdf";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}

char* my_strcpy(char *d, const char *s)
{
	char* tmp = d;
	assert(d!=NULL);
	assert(s!=NULL);
	while (*d++ = *s++)
	{
		;
	}
	return tmp;
}

void my_strcpy(char *d, char *s)
{
	assert(d!=NULL);
	assert(s!=NULL);
	while (*d++ = *s++)
	{
		;
	}
}

void my_strcpy(char *d, char *s)
{
	while (*d++ = *s++)
	{
		;
	}
}

void my_strcpy(char *d, char *s)
{
	while (*s!='\0')
	{
		*d = *s;
		d++;
		s++;
	}
	*d = *s;
}

int main()
{
	char arr1[] = "*#*#*#*****";
	char arr2[] = "bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}