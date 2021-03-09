#include<stdio.h>

void Menu()        //指针数组的应用--转移表
{
	printf("*********************\n");
	printf("**1.Add       2.Sub**\n");
	printf("**3.Mul       4.Div**\n");
	printf("**5.Xor      0.Exit**\n");
	printf("*********************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int Xor(int x, int y)
{
	return x ^ y;
}


int main()
{
	int input = 0;
	int(*parr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
	int x = 0;
	int y = 0;
	do
	{
		Menu();
		printf("请选择\n");
		scanf("%d", &input);
		if (input>=1&&input<=5)
		{
			printf("请输入两个人操作数\n");
			scanf("%d%d", &x, &y);
			int tmp = parr[input](x, y);
			printf("%d\n", tmp);
		}
		else if (input==0)
		{
			printf("退出程序\n");
		}
		else
		{
			printf("选择认错\n");
		}
	} 
	while (input);
	return 0;
}