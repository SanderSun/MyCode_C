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

	//����1����ʾС��
	//����0����ʾ���
	return u.c;
}