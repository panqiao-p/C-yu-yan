#include <stdio.h>
#include <math.h>


int main()                          //习题4-12
{
	double x, y, h;
	scanf("%lf%lf", &x, &y);
	if (fabs(x)>3 || fabs(y > 3))
	{
		h = 0;
		printf("x=%lf y=%lf h=%0.0lf\n", x, y, h);
		return 0;
	}
	double x0 = 2 - fabs(x);
	double y0 = 2 - fabs(y);
	double r = sqrt(x0*x0 + y0 * y0);
    if ( r <= 1)
	{
		h = 10;
	}
	else
	{
		h = 0;
	}
	printf("x=%lf y=%lf h=%0.0lf\n", x, y, h);
	return 0;
}



int main()                        //习题4-11
{
	int a, b ,c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a > b)
	{
		int tmp1=0;
		tmp1 = a;
		a = b;
		b = tmp1;
	}
	if (a > c)
	{
		int tmp2 = 0;
		tmp2 = a;
		a = c;
		c = tmp2;
	}
	if (a > d)
	{
		int tmp3 = 0;
		tmp3 = a;
		a = d;
		d = tmp3;
	}
	if (b > c)
	{
		int tmp4 = 0;
		tmp4 = b;
		b = c;
		c = tmp4;
	}
	if (b > d)
	{
		int tmp5 = 0;
		tmp5 = b;
		b = d;
		d = tmp5;
	}
	if (c > d)
	{
		int tmp6 = 0;
		tmp6 = c;
		c = d;
		d = tmp6;
	}
	printf("%d %d %d %d", a, b, c, d);
	return 0;
}





int main()
{
	double I = 0, sa = 0;
	printf("请输入一个非负数:>>");
	scanf("%lf", &I);
	if (I < 0)
	{
		printf("输入错误退出系统");
		return -1;
	}
	int tmp = I / 100000;
	switch (tmp)
	{
	case 0:
		sa = I * 0.1;
		break;
	case 1:
		sa = 10000 + (I - 100000)*0.075;
		break;
	case 2:
	case 3:
		sa = 10000 + 7500 + (I - 200000)*0.05;
		break;
	case 4:
	case 5:
		sa = 10000 + 7500 + 200000 * 0.05 + (I - 400000)*0.03;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
		sa = 10000 + 7500 + 200000 * 0.05 + 200000 * 0.03 + (I - 600000)*0.015;
		break;
	default:
		sa = 10000 + 7500 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (I - 1000000)*0.01;
	}
	printf("sa=%.2lf\n", sa);
	return 0;
}



if实现
int main()                               //习题4-10
{
	double I = 0, sa = 0, sa1 = 0;
	printf("请输入一个非负数:>>\n");
	scanf("%lf", &I);
	if (I < 0)
	{
		printf("输入错误退出系统");
		return -1;
	}
	if (I <= 100000)
	{
		sa = I*0.1;
	}
	else if (I > 100000 && I <= 200000)
	{
		sa = 10000 + (I - 100000)*0.075;
	}
	else if (I > 200000 && I <= 400000)
	{
		sa = 10000 + 7500 + (I - 200000)*0.05;
	}
	else if (I > 400000 && I <= 600000)
	{
		sa = 10000 + 7500 + 200000 * 0.05 + (I - 400000)*0.03;
	}
	else if (I > 600000 && I <= 1000000)
	{
		sa = 10000 + 7500 + 200000 * 0.05 + 200000 * 0.03 + (I - 600000)*0.015;
	}
	else if (I > 1000000)
	{
		sa = 10000 + 7500 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (I - 1000000)*0.01;
	}
	printf(" sa=%.2lf\n", sa);

	 
	switch实现
	int tmp = I / 100000;
	switch (tmp)
	{
	case 0:
		sa1 = I * 0.1;
		break;
	case 1:
		sa1 = 10000 + (I - 100000)*0.075;
		break;
	case 2:
	case 3:
		sa1 = 10000 + 7500 + (I - 200000)*0.05;
		break;
	case 4:
	case 5:
		sa1 = 10000 + 7500 + 200000 * 0.05 + (I - 400000)*0.03;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
		sa1 = 10000 + 7500 + 200000 * 0.05 + 200000 * 0.03 + (I - 600000)*0.015;
		break;
	default:
		sa1 = 10000 + 7500 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (I - 1000000)*0.01;
	}
	printf("sa1=%.2lf\n", sa1);
	return 0;
}



int main()                         //习题2-9-3
{
	int input = 0;
	scanf("%d", &input);
	if (input > 99999 || input < 0)
	{
		printf("输入错误,退出程序\n");
		return -1;
	}
	printf("%d ", input % 10);
	if (input > 10)
	{
		printf("%d ", input % 100 / 10);
	}
	if (input > 100)
	{
		printf("%d ", input % 1000 / 100);
	}
	if (input > 1000)
	{
		printf("%d ", input % 10000 / 1000);
	}
	if (input > 10000)
	{
		printf("%d \n", input / 10000);
	}
	return 0;
}


int main()                              //习题2-9-2
{
	int input = 0;
	scanf("%d", &input);
	if (input > 99999 || input < 0)
	{
		printf("输入错误,退出程序\n");
		return -1;
	}
	if (input > 10000)
	{
		printf("%d ", input / 10000);
	}
	if (input > 1000)
	{
		printf("%d ", input % 10000/1000);
	}
	if (input > 100)
	{
		printf("%d ", input % 1000 / 100);
	}
	if (input > 10)
	{
		printf("%d ", input % 100 / 10);
	}
	printf("%d \n", input % 10);
	return 0;
}




int main()                               //习题2-9-2
{                                       //有bug
	int input = 0;
	scanf("%d", &input);
	if (input > 99999 || input < 0)
			{
				printf("输入错误,退出程序\n");
				return -1;
			}
	if(input / 10000>0)
	{
		printf("%d ", input / 10000);
	}
		if (input % 10000 / 1000 > 0)
		{
			printf("%d ", input % 10000 / 1000);
		}
			if ( input % 1000 / 100>0)
			{
				printf("%d ", input % 1000 / 100);
			}
				if (input % 100 / 10>0)
				{
					printf("%d ", input % 100 / 10);
				}
	printf("%d ", input % 10);
	return 0;
}



int main()                             // 习题4-9-1
{
	int input = 0;
	scanf("%d", &input);
	if (input > 99999 || input < 0)
	{
		printf("输入错误,退出程序\n");
	}
	else if (input >= 10000)
	{
		printf("是5位数\n");
	}
	else if (input >= 1000 && input < 10000)
	{
		printf("是4位数\n");
	}
	else if (input >= 100 && input < 1000)
	{
		printf("是3位数\n");
	}
	else if (input >= 10 && input < 100)
	{
		printf("是2位数\n");
	}
	else if (input >= 0 && input < 10)
	{
		printf("是1位数\n");
	}

	return 0;
}




int main()                              //习题4-8
{
	int score = 0;
	scanf("%d", &score);
	if (score >= 90)
	{
		printf("A\n");
	}
	else if (score >= 80 && score < 90)
	{
		printf("B\n");
	}
	else if(score >= 70 && score < 80)
		printf("C\n");
	else if (score >= 60 && score < 70)
	{
		printf("D\n");
	}
	else
	{
		printf("E\n");
	}
	return 0;
}