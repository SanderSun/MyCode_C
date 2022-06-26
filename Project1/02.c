#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 3、define 定义的标识符常量
#define MAX 10

// 4、enum 枚举常量 枚举一一列举
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

enum Color
{
	RED,
	YELLOWE,
	BLUE
};

int main(){
	// 1、字面常量 直接写出数字
	// 2、const 常属性
	// const修饰的n是变量，但是又有常属性，所有我们说n是常变量
	// const int num = 4; 
	// const int n = 10;
	// int arr[n] = { 0 }; 报错 n不是常量
	
	// enum 定义的变量不可修改
	enum Color color = BLUE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	printf("%d\n", color);
	return 0;
}
