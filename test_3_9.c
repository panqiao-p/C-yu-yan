#include<stdio.h>

void Menu()        //ָ�������Ӧ��--ת�Ʊ�
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
		printf("��ѡ��\n");
		scanf("%d", &input);
		if (input>=1&&input<=5)
		{
			printf("�����������˲�����\n");
			scanf("%d%d", &x, &y);
			int tmp = parr[input](x, y);
			printf("%d\n", tmp);
		}
		else if (input==0)
		{
			printf("�˳�����\n");
		}
		else
		{
			printf("ѡ���ϴ�\n");
		}
	} 
	while (input);
	return 0;
}