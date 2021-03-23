#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void getmem(char** p)
{
	*p = (char*)malloc(40);
}

void test()
{
	char* str = NULL;
	getmem(&str);
	strcpy(str, "panqiaohaoshuai");
	printf(str);
}

int main()
{
	test();
	return 0;
}