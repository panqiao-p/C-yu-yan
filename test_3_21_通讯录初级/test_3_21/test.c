#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void Menu()
{
	printf("******************************\n");
	printf("*******  1.�����ϵ��  *******\n");
	printf("*******  2.ɾ����ϵ��  *******\n");
	printf("*******  3.������ϵ��  *******\n");
	printf("*******  4.�޸���ϵ��  *******\n");
	printf("*******  5.��ʾ��ϵ��  *******\n");
	printf("*******  6.����������  *******\n");
	printf("*******  0.�˳�ͨѶ¼  *******\n");
	printf("******************************\n");
}

int main()
{
	int input = 0;
	//����ͨѶ¼
	struct People_Information CON;
	//��ʼ��ͨѶ¼
	InitContact(&CON);
	do
	{
		Menu();
		printf("��ѡ��:>\n");
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
		case Sort:
			//SortContact(&CON);
			break;
		case Exit:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}

