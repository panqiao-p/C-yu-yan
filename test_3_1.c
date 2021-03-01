#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct stu
{
	char name[10];
	int age;
	char number[20];
	char sex[10];
};

void print1(struct stu s)
{
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.number);
	printf("%s\n", s.sex);
}

void print2(struct stu* pa)
{
	printf("%s\n", pa->name);
	printf("%d\n", pa->age);
	printf("%s\n", pa->number);
	printf("%s\n", pa->sex);
}

int main()
{
	struct stu s = { "xiaoming",18,"15940401493","ÄÐ" };
	struct stu *pa = &s;
	print1(s);
	print2(&s);
	/*printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.number);
	printf("%s\n", s.sex);
	printf("%s\n", pa->name);
	printf("%d\n", pa->age);
	printf("%s\n", pa->number);
	printf("%s\n", pa->sex);*/
	return 0;
}


struct stu
{
	char name[10];
	int age;
	char number[20];
	char sex[];
};



int main()
{
	struct stu s = { "xiaoming",18,"15940401493","man" };
	struct stu *pa = &s;
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.number);
	printf("%s\n", s.sex);
	printf("%s\n", pa->name);
	printf("%d\n", pa->age);
	printf("%s\n", pa->number);
	printf("%s\n", pa->sex);
	return 0;
}

int fun(int i)
{
	int a = i % 10;
	int b = i / 10 % 10;
	int c = i / 100 % 10;
	if ((a*a*a + b * b*b + c * c*c) == i)
	{
		return i;
	}
	else
	{
		return 0;
	}
}

int main()
{
	for (int i = 100; i <= 999; i++)
	{
		int ret =fun(i);
		if (ret != 0)
		{
			printf("%d ", ret);
		}
	}
	return 0;
}


int main()
{
	for (int i = 100; i <= 999; i++)
	{
		int a = i % 10;
		int b = i / 10 % 10;
		int c = i / 100 % 10;
		if ((a*a*a + b * b*b + c * c*c) == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

double fun(int n, int k)
{
	if (k > 0)
	{
		return fun(n, k - 1)*n;
	}
	else if (k < 0)
	{
		return (1.0/(fun(n, -k) ));
	}
	else
	{
		return 1;
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n,&k);
	double ret=fun(n,k);
	printf("%d^%d=%lf\n",n, k, ret);
	return 0;
}

int fun(unsigned int a)
{
	if (a>9)
	{
		return fun(a / 10) + a % 10;
	}
	else
	{
		return a;
	}
}

int main()
{
	unsigned int a = 0;
	scanf("%d", &a);
	int ret = fun(a);              //1236
	printf("%d\n", ret);
	return 0;
}


int my_strlen(char *pa)
{
	int count = 0;
	while ((*pa)!='\0')
	{
		count++;
		pa = pa + 1;
	}
	return count;
}

void exchange(char arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdefg";
	int sz=my_strlen(arr);
	exchange(arr,sz);
	printf("%s\n", arr);
	return 0;
}

