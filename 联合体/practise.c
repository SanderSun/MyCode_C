#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);
//	return 0;
//}

int check_sys()
{
	union Un
	{
		char c;
		int i;

	}u;
	u.i = 1;

	//返回1，表示小端
	//返回0，表示大端
	return u.c;
}