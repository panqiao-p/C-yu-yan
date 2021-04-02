#define _CRT_SECURE_NO_WARNINGS 1
#include"file_contact.h"

void Menu()
{
	printf("******************************\n");
	printf("*******  1.添加联系人  *******\n");
	printf("*******  2.删除联系人  *******\n");
	printf("*******  3.查找联系人  *******\n");
	printf("*******  4.修改联系人  *******\n");
	printf("*******  5.显示联系人  *******\n");
	printf("*******  6.保存通讯录  *******\n");
	printf("*******  0.退出通讯录  *******\n");
	printf("******************************\n");
}

int main()
{
	int input = 0;
	//创建通讯录
	struct People_Information CON;//里面包含指向动态开辟的指针，现有人数，当前容量
	//初始化通讯录
	InitContact(&CON);
	do
	{
		Menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddContact(&CON);
			break;
		case Del:
			DelContact(&CON);
			break;
		case Search:
			SearchContact(&CON);
			break;
		case Modify:
			ModifyContact(&CON);
			break;
		case Show:
			ShowContact(&CON);
			break;
		case Save:
			SaveContact(&CON);
			break;
		case Exit:
			SaveContact(&CON);
			//销毁通讯录，释放内存
			RelesseContact(&CON);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
