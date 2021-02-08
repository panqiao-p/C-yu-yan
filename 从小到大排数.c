#include <stdio.h>
int main()           
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp1 = a;
		a = b;
		b = tmp1;
	}
	if (a < c)
	{
		int tmp2 = a;
		a = c;
		c = tmp2;
	}
	if (b < c)
	{
		int tmp3 = b;
		b = c;
		c = tmp3;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}