#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)

struct S
{
	char c1;
	int a;
	char c2;
};

int main()
{
	//struct S s;
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", offsetof(struct S, a));
	return 0;
}