#include <stdio.h>
#include <math.h>

int main ()                   //习题5-17

{
	for (int A = 'X'; A <= 'Z'; A++)
	{
		for (int B = 'X'; B <= 'Z'; B++)
		{
			for (int C = 'X'; C <= 'Z'; C++)
			{
				if (A != 'X'&&C != 'X'&&C != 'Z'&&A != B && B != C && A != C)
				{
					printf("A->%c B->%c C->%c\n", A, B, C);
				}
			}
		}
	}
	return 0;
}


     /* *                               //习题5-16
       ***  
      ***** 
     *******
      ***** 
       ***  
        *   */
int main()
   {
	int i = 0;//行号
	for (i = 0; i < 4; i++)//打印前四行
	{
		int j = 0;
		for (j = 0; j < 3 - i; j++)//打印空格
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)//打印*
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)//打印后三行
	{
		int j = 0;
		for (j = 0; j < i+1; j++)//打印空格
		{
			printf(" ");
		}
		for (j = 0; j <7-2*(i+1) ; j++)//打印*
		{
			printf("*");
		}
		printf("\n");
	}
   }


float fun(float x)
{
	return 2* x*x*x - 4 * x*x + 3 * x - 6;
}
int main()
{
	float left=-10, right=10, mid;
	while (left<=right)
	{
		mid = (right + left) / 2;
		if (fun(mid) > 0&&fabs(fun(mid))>=1e-5)
		{
			right = mid;
		}
		else if(fun(mid)<0 && fabs(fun(mid)) >= 1e-5)
		{
			left = mid;
		}
		else
		{
			break;
		}
	}
	printf("根为%f\n", mid);
	return 0;
}






double fun1(double x)         //习题5-14
{
	return ((2*x - 4)*x + 3)*x - 6;
}

double fun2(double x)
{
	return (6 * x - 8)*x + 3;
}


int main()
{
	double x0, x1;
	x0 = 1.5;
	x1 = x0 - fun1(x0) / fun2(x0);
	do
	{
		x0 = x1;
		x1 = x0 - fun1(x0) / fun2(x0);
	} while (fabs(x1-x0)>=1e-5);
	printf("方程在1.5附近的根为%lf\n", x1);
	return 0;
}


int main()              //习题5-13
{
	float a = 0 , x0, x1 ;
	scanf("%f", &a);
	x0 = a / 2;
	x1 = (x0 + (a / x0)) / 2;
	do
	{
		x0 = x1;
		x1 = (x0 + (a / x0)) / 2;
	} while (fabs(x1 - x0) >= 1e-5);
	printf("%f\n", x1);
	return 0;
}





int main()                    // 习题5-12
{
	int i = 0;
	int n = 1;
	for (i = 0; i < 9; i++)
	{
		n = (n + 1) * 2;
	}
	printf("总共有%d个桃子\n", n);
	return 0;fount);
	for (i = 0; i < count; i++)
	{
		sum = term + sum;
		term = term / 2;
		sum = term + sum;
	}
	printf("共经过%lf米，第%d反弹%lf米", sum, count, term);
	return 0;
}



int main()                         //习题5-10
{
	int count = 0;
	double term = 0.0;
	double m = 2.0;//分子
	double n = 1.0;   //分母
	int j = 0;
	int sum = 0.0;
	scanf("%d", &count);
	for (j = 0; j < count; j++)
	{
		term = term + m / n;
		int tmp = n;
		n = m;
		m = m + tmp;
	}
	printf("%lf\n", term);
	return 0;
}


int main()                         //习题5-9
{
	int i = 0;
	for (i = 2; i <= 1000; i++)
	{
		int term = 0;
		int j = 0;
		for (j = 1; j <= i/2; j++)
		{
			if ((i%j) == 0)
			{
				term = term + j;
			}
		}
		if (term == i)
		{
			printf("%d its factors are ", i);
			for (j = 1; j <= i / 2; j++)
			{
				if ((i%j) == 0)
				{
					printf("%d,", j);
				}
			}
			printf("\n");
		}
	}
	return 0;
}



int main()           //习题5-8
{
	int a, b, c;
	int i = 0;
	for (i = 100; i < 1000; i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		if ((a*a*a + b*b*b + c * c*c) == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}



int main()            //习题5-6
{
	int n = 20;
	scanf("%d", &n);
	int term = 1;
	int sum = 0;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		term = term * i;
		sum = sum + term;
	}
	printf("sum=%d\n", sum);
	return 0;
}



int main()                //习题5-5
{
	double a, term=0, sum=0;
	int n = 0;
	scanf("%lf%d", &a, &n);
	int i;
	for (i = 0; i < n; i++)
	{
		term = term + a*pow(10,i);
		sum = sum + term;
	}
	printf("%.2lf\n", sum);
	return 0;
}


int main()                  //习题5-4
{
	int eng_char = 0;
	int space_char = 0;
	int digit_char = 0;
	int other_char = 0;
	char input;
	while ((input=getchar()) != '\n')          //getchar的工作原理？
	{
		if (input >= 'A'&&input <= 'Z' || input >= 'a'&&input <= 'z')
		{
			eng_char++;
		}
		else if (input == ' ')
		{
			space_char++;
		}
		else if (input >= '0'&&input <= '9')
		{
			digit_char++;
		}
		else
		{
			other_char++;
		}
	}
	/*putchar(eng_char);//错误
	putchar(space_char);
	putchar(digit_char);
	putchar(other_char);*/
	printf("eng_char=%d space_char=%d digit_char=%d  other_char=%d", eng_char, space_char, digit_char, other_char);
	return 0;
}