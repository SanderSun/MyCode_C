#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

enum Sex
{
	//枚举的可能取值-常量
	MALE = 2,
	FEMALE = 4,
	SECRET = 8
};

enum Color
{
	RED,
	GREEN,
	BLUE
};

int main()
{
	enum Sex s = MALE;
	enum Color c = BLUE;
	printf("%d %d %d\n", RED, GREEN, BLUE);
	printf("%d %d %d\n", MALE, FEMALE, SECRET);
	return 0;
}