#include<stdio.h>
#include<math.h>

int main()               // 习题5-3
{
	int m = 0, n = 0;
	scanf("%d%d", &m, &n);
	int total = m * n;
	if (m < n)
	{
		int tmp = 0;
		tmp = m;
		m = n;
		n = tmp;
	}
	int r = -1;
	while (r!=0)
	{
		r=m%n;
		m = n;
		n = r;
	}
	printf("最大公约数%d\n", m);
	printf("最小公倍数是%d\n", total / m);
	return 0;
}


int main()              //习题5-2
{
	int count = 0;
	double term = 1.0, pi = 0.0, n = 1.0;
	int sign = 1;
	while (fabs(term) >= 1e-8)
	{
		pi = pi + term;
		n = n + 2;
		sign = -sign;
		term = sign / n;
		count++;
	}
	printf("count=%d\n", count);    //50000000
	return 0;
}

int main()
{
	int count = 0;
	double term = 1.0, pi = 0.0, n = 1.0;
	int sign = 1;
	while (fabs(term) >= 1e-6)
	{
		pi = pi + term;
		n = n + 2;
		sign = -sign;
		term = sign / n;
		count++;
	}
	printf("count=%d\n", count);        //500000
	printf("%lf\n", 4 * pi);
	return 0;
}


int main()
{
	int c = 1;
	int a = 0;
	a = c + --c;
	printf("%d\n", a);
	system("pause");
	return 0;
	/*int c = 1;
	int a = 0;
	a = c + --c;
	printf("%d\n", a);
	system("pause");
	return 0;*/
}