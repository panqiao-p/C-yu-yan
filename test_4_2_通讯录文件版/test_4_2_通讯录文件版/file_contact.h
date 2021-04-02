#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<windows.h>

#define MAX_NAME 10
#define MAX_SEX 10
#define MAX_TEL 15
#define MAX_ADDS 20
#define Present_capacity 1   //��ǰ����
#define Every_add  1         //ÿ���ӵ�����

enum Contact
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Save
};

struct People
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tel[MAX_TEL];
	char adds[MAX_ADDS];
};

struct People_Information
{
	struct People* date;    //����ָ��̬���ٵĿռ�
	int size;               //��ǰͨѶ¼���е�����
	int Capacity;           //��ǰ����
};

void Menu();
void InitContact(struct People_Information* p);
void AddContact(struct People_Information* p);
void ShowContact(struct People_Information* p);
void DelContact(struct People_Information* p);
void SearchContact(struct People_Information* p);
void ModifyContact(struct People_Information* p);
void RelesseContact(struct People_Information* p);
void SaveContact(struct People_Information* p);
void Check_capacity(struct People_Information* p);