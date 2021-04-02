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
#define Present_capacity 1   //当前容量
#define Every_add  1         //每增加的容量

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
	struct People* date;    //用来指向动态开辟的空间
	int size;               //当前通讯录已有的人数
	int Capacity;           //当前容量
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