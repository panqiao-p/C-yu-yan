#include<stdio.h>
#include<stdlib.h>
//柔性数组的使用
struct S
{
	int n;
	int arr[];
};
int main()
{
	struct S* ps=(struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	printf("%d ", ps->n);
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	return 0;