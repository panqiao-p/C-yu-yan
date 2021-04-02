#define _CRT_SECURE_NO_WARNINGS 1
#include"file_contact.h"


void LoadContact(struct People_Information* p)
{
	struct People tmp = { 0 };
	FILE* pfread = fopen("contact.date", "rb");
	if (pfread == NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));
	}
	while (fread(&tmp, sizeof(struct People), 1, pfread))
	{
		Check_capacity(p);
		p->date[p->size] = tmp;
		p->size++;
	}
	fclose(pfread);
	pfread = NULL;
}

void InitContact(struct People_Information* p)
{
	p->date = malloc(Present_capacity * sizeof(struct People));
	if (p->date == NULL)
	{
		return;
	}
	p->size = 0;
	p->Capacity = Present_capacity;
	//��ȡ�ϴα������Ϣ
	LoadContact(p);
}


 void Check_capacity(struct People_Information* p)      //����Ƿ���Ҫ����
{
	if (p->size == p->Capacity)
	{
		struct People* ptr = (struct People*)realloc(p->date, (p->Capacity + Every_add) * sizeof(struct People));
		if (ptr != NULL)
		{
			p->date = ptr;
			p->Capacity = p->Capacity + Every_add;
			//printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void AddContact(struct People_Information* p)
{
	Check_capacity(p);
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
	Sleep(1000);
	system("cls");
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
		int ret = strcmp(name, p->date[i].name);
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
		p->Capacity--;    //ÿɾ��һ����������һ
		struct People* ptr = (struct People*)realloc(p->date, (p->Capacity) * sizeof(struct People));
		if (ptr != NULL)
		{
			p->date = ptr;
			printf("ɾ���ɹ�\n");
		}
	}
	Sleep(1000);
	system("cls");
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
	Sleep(1000);
	system("cls");
}

void RelesseContact(struct People_Information* p)
{
	free(p->date);
	p->date = NULL;
}


void SaveContact(struct People_Information* p)
{
	FILE* pfwrite = fopen("contact.date", "wb");
	if (pfwrite == NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
	}
	//д�����ݵ��ļ�����
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		fwrite(&(p->date[i]), sizeof(struct People), 1, pfwrite);//ȡ��ַ��������
	}
	fclose(pfwrite);
	pfwrite = NULL;
	printf("����ɹ�\n");
	Sleep(1000);
	system("cls");
}