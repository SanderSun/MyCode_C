#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


struct Book
{
	char name[20]; // C���Գ������
	short price; // 55
};

int main()
{
	// ���ýṹ������-����һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������", 55 };
	strcpy(b1.name, "C++"); //�ַ�������
	printf("%s\n",b1.name);
	struct Book* pb = &b1;
	printf("%s\n", (*pb).name);
	printf("%s\n", pb->name);
	printf("%d\n", (*pb).price);
	printf("%d\n", pb->price);
	b1.price = 15;
	printf("����:%s\n", b1.name);
	printf("�۸�:%dԪ\n", b1.price);
	return 0;
}
