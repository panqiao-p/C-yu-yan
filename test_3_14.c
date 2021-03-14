#include<stdio.h>
#include<string.h>
#include<assert.h>

void reverse(char* p1, char* p2,int len)
{
	while (p1<p2)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2--;
	}
}

void Left_Move(char* p,int k)
{
	int len = strlen(p);
	assert(p);
	assert(k <= len);
	reverse(p,p+k-1,len);
	reverse(p + k, p + len - 1,len);
	reverse(p, p + len - 1,len);
}

int main()
{
	char arr[] = "abcdef";
	int k = 2;   //×óÐýµÄ¸öÊý
	scanf("%d",&k);
	Left_Move(arr,k);
	printf("%s", arr);
	return 0;
}