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
	struct BOOK b1 = { "C语言程序设计",55 };
	struct BOOK* pb1 = &b1;
	printf("%s\n",(*pb1).name);
	printf("第二种%d\n",pb1->price);
	printf("第二种%s\n",pb1->name);
	
	strcpy(b1.name, "C语言程序设计第二版");
		printf("修改书名后：%s", pb1->name);
}