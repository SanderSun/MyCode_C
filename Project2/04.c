#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


struct Book
{
	char name[20]; // C语言程序设计
	short price; // 55
};

int main()
{
	// 利用结构体类型-创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计", 55 };
	strcpy(b1.name, "C++"); //字符串拷贝
	printf("%s\n",b1.name);
	struct Book* pb = &b1;
	printf("%s\n", (*pb).name);
	printf("%s\n", pb->name);
	printf("%d\n", (*pb).price);
	printf("%d\n", pb->price);
	b1.price = 15;
	printf("书名:%s\n", b1.name);
	printf("价格:%d元\n", b1.price);
	return 0;
}
