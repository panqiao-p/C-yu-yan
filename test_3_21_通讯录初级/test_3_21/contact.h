#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAX_NAME 10
#define MAX_SEX 10
#define MAX_TEL 15
#define MAX_ADDS 20
#define MAX 10
enum Contact
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show,
	Sort
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
	struct People date[MAX];
	int size;
};

void InitContact(struct People_Information* p);
void AddContact(struct People_Information* p);
void ShowContact(struct People_Information* p);
void DelContact(struct People_Information* p);
void SearchContact(struct People_Information* p);
void ModifyContact(struct People_Information* p);
//void SortContact(struct People_Information* p);