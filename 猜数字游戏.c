#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void game()
{
	int rdm = 0;
	int num = 0;
	rdm=rand()%100+1;                    //����1-100�����
	printf("�������:>>");
	scanf("%d", &num);
	while (1)
	{
		if (num > rdm)
		{
			printf("�´���\n");
			scanf("%d", &num);
		}
		else if (num < rdm)
		{
			printf("��С��\n");
			scanf("%d", &num);
		}
		else
		{
			printf("��ϲ�㣬��ս�ɹ�������\n");
			break;
		}
	}
}


void menu()
{
	printf("************************\n");
	printf("***1.��ʼ      0.�˳�***\n");
	printf("************************\n");
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));         //����ʱ����������������ʼ��     
	do
	{
		printf("��Ϸ����ϵͳ���������һ��1-100������\n          �ü����������֣��س�ȷ�ϣ��������!!!\n");
		printf("\n");
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
		printf("ѡ�����������ѡ��");
		}
	} while (input);
	return 0;
}