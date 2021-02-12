#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void game()
{
	int rdm = 0;
	int num = 0;
	rdm=rand()%100+1;                    //生成1-100随机数
	printf("请猜数字:>>");
	scanf("%d", &num);
	while (1)
	{
		if (num > rdm)
		{
			printf("猜大了\n");
			scanf("%d", &num);
		}
		else if (num < rdm)
		{
			printf("猜小了\n");
			scanf("%d", &num);
		}
		else
		{
			printf("恭喜你，挑战成功！！！\n");
			break;
		}
	}
}


void menu()
{
	printf("************************\n");
	printf("***1.开始      0.退出***\n");
	printf("************************\n");
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));         //利用时间戳设置随机数的起始点     
	do
	{
		printf("游戏规则：系统会随机生成一个1-100的整数\n          用键盘输入数字，回车确认，请猜数字!!!\n");
		printf("\n");
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
		printf("选择错误，请重新选择");
		}
	} while (input);
	return 0;
}