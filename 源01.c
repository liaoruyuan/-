#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define YUAN 100
#include <string.h>
struct BOOK
{
	char name[20];
	short price;
};
int main()
{
	struct BOOK b1 = { "C���Գ������",55 };
	struct BOOK* pb1 = &b1;
	printf("%s\n",(*pb1).name);
	printf("�ڶ���%d\n",pb1->price);
	printf("�ڶ���%s\n",pb1->name);
	
	strcpy(b1.name, "C���Գ�����Ƶڶ���");
		printf("�޸�������%s", pb1->name);
}