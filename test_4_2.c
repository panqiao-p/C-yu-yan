#include<stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	FILE* p = fopen("test.txt", "w");
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	fputc('p', p);
	fputc('a', p);
	fputc('n', p);
	fclose(p);
	p = NULL;
	return 0;
}

int main()
{
	FILE* p = fopen("test.txt", "r");
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	int a = fgetc(p);
	printf("%c\n", a);
	a = fgetc(p);
	printf("%c\n", a);
	a = fgetc(p);
	printf("%c\n", a);
	return 0;
}

struct S
{
	int n;
	float f;
	char arr[10];
};

int main()
{
	char arr[20] = { 0 };
	FILE* ps = fopen("test.txt", "w");
	fgets(arr, 1024, ps);
	printf("%s\n", arr);
	struct S s = { 10,3.14f,"panqiao" };
	fputs("panqiaohaoshuai", ps);
	fclose(ps);
	ps = NULL;
	return 0;
}

struct S
{
	int n;
	float f;
	char arr[10];
};


int main()
{
	struct S s = { 0 };
	FILE* ps = fopen("test.txt", "w");
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	fprintf(ps, "%d %f %s", 1000,3.14,"abcdef");
	fscanf(stdin, "%d %f %s", &(s.n),&(s.f),&(s.arr));
	printf("%d%f%s", s.n,s.f,s.arr);
	return 0;
}

struct S
{
	int n;
	float f;
	char arr[10];
};
	
int main()
{
	struct S s = { 1000,3.2,"abc" };
	char arr[100] = { 0 };
	FILE* ps = fopen("test.txt", "w");
	sprintf(arr, "%d %f %s", s.n, s.f, s.arr);
	printf("%s\n", arr);
	return 0;
}