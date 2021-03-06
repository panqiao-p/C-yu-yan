#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


void InitContact(struct People_Information* p)
{
	p->size = 0;   //设置通讯录最开始只有0个人
	memset(p->date, 0, sizeof(p->date));
}


void AddContact(struct People_Information* p)
{
	if (p->size>=MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", p->date[p->size].name);
		printf("请输入性别:>");
		scanf("%s", p->date[p->size].sex);
		printf("请输入年龄:>");
		scanf("%d", &(p->date[p->size].age));     //整形，&一定别忘了
		printf("请输入电话:>");
		scanf("%s", p->date[p->size].tel);
		printf("请输入地址:>");
		scanf("%s", p->date[p->size].adds);
		p->size++;
		printf("添加成功\n");
	}
	
}


void ShowContact(struct People_Information* p)
{
		if (0 == p->size)
		{
			printf("联系人为空\n");
		}
		else
		{
			printf("%-10s%-10s%-10s%-20s%-25s", "姓名", "性别", "年龄", "电话", "地址");
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
	//找到返回下标，找不到返回-1
	return -1;
}

void DelContact(struct People_Information* p)
{
	printf("请输入要删除人的姓名:>\n");
	int pos = FindPeople(p);
	if (-1 == pos)
	{
		printf("没有此联系人\n");
	}
	else
	{
		int i = 0;
		for (i = pos; i < (p->size - 1); i++)
		{
			p->date[i] = p->date[i + 1];
		}
		p->size--;
		printf("删除成功\n");
	}
	
}


void SearchContact(struct People_Information* p)
{
	printf("请输入要查找人的姓名\n");
	int pos = FindPeople(p);
	if (-1 == pos)
	{
		printf("没有此联系人\n");
	}
	else
	{
		printf("%-10s%-10s%-10s%-20s%-25s", "姓名", "性别", "年龄", "电话", "地址");
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
	printf("请输入要修改的联系人姓名:>\n");
	int pos = FindPeople(p);
	if (-1 == pos)
	{
		printf("要修改的联系人不存在\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", p->date[pos].name);
		printf("请输入性别:>");
		scanf("%s", p->date[pos].sex);
		printf("请输入年龄:>");
		scanf("%d", &(p->date[pos].age));     //整形，&一定别忘了
		printf("请输入电话:>");
		scanf("%s", p->date[pos].tel);
		printf("请输入地址:>");
		scanf("%s", p->date[pos].adds);
		printf("修改成功\n");
	}
}
