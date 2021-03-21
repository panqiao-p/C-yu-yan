#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


void InitContact(struct People_Information* p)
{
	p->size = 0;   //����ͨѶ¼�ʼֻ��0����
	memset(p->date, 0, sizeof(p->date));
}


void AddContact(struct People_Information* p)
{
	if (p->size>=MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", p->date[p->size].name);
		printf("�������Ա�:>");
		scanf("%s", p->date[p->size].sex);
		printf("����������:>");
		scanf("%d", &(p->date[p->size].age));     //���Σ�&һ��������
		printf("������绰:>");
		scanf("%s", p->date[p->size].tel);
		printf("�������ַ:>");
		scanf("%s", p->date[p->size].adds);
		p->size++;
		printf("��ӳɹ�\n");
	}
	
}


void ShowContact(struct People_Information* p)
{
		if (0 == p->size)
		{
			printf("��ϵ��Ϊ��\n");
		}
		else
		{
			printf("%-10s%-10s%-10s%-20s%-25s", "����", "�Ա�", "����", "�绰", "��ַ");
			printf("\n");
			int i = 0;
			for (i = 0; i < p->size; i++)
			{
				printf("%-10s%-10s%-10d%-20s%-25s",
					p->date[i].name,
					p->date[i].sex,
					p->date[i].age,
					p->date[i].tel,
					p->date[i].adds);
				printf("\n");
			}
		}
}
	

static int FindPeople(struct People_Information* p)
{
	char name[MAX_NAME];
	int i = 0;
	scanf("%s", name);
	for (i = 0; i < p->size; i++)
	{
		int ret=strcmp(name, p->date[i].name);
		if (ret == 0)
		{
			return i;
			break;
		}
	}
	//�ҵ������±꣬�Ҳ�������-1
	return -1;
}

void DelContact(struct People_Information* p)
{
	printf("������Ҫɾ���˵�����:>\n");
	int pos = FindPeople(p);
	if (-1 == pos)
	{
		printf("û�д���ϵ��\n");
	}
	else
	{
		int i = 0;
		for (i = pos; i < (p->size - 1); i++)
		{
			p->date[i] = p->date[i + 1];
		}
		p->size--;
		printf("ɾ���ɹ�\n");
	}
	
}


void SearchContact(struct People_Information* p)
{
	printf("������Ҫ�����˵�����\n");
	int pos = FindPeople(p);
	if (-1 == pos)
	{
		printf("û�д���ϵ��\n");
	}
	else
	{
		printf("%-10s%-10s%-10s%-20s%-25s", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("\n");
		printf("%-10s%-10s%-10d%-20s%-25s",
				p->date[pos].name,
				p->date[pos].sex,
				p->date[pos].age,
				p->date[pos].tel,
				p->date[pos].adds);
		printf("\n");
	}
}


void ModifyContact(struct People_Information* p)
{
	printf("������Ҫ�޸ĵ���ϵ������:>\n");
	int pos = FindPeople(p);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", p->date[pos].name);
		printf("�������Ա�:>");
		scanf("%s", p->date[pos].sex);
		printf("����������:>");
		scanf("%d", &(p->date[pos].age));     //���Σ�&һ��������
		printf("������绰:>");
		scanf("%s", p->date[pos].tel);
		printf("�������ַ:>");
		scanf("%s", p->date[pos].adds);
		printf("�޸ĳɹ�\n");
	}
}
