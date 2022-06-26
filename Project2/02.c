#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// #define 定义标识符常量
#define MAX 100
//#define 可以定义宏 带参数
#define MAX(X,Y) (X>Y?X:Y)
int main() 
{	
	// ()强制转化操作符
	//int a = (int)3.14;

	// 条件操作符
	//int b = 3;
	//int c = 4;
	//int max = 0;
	//max = b > c ? b : c;
	//printf("%d\n", max);


	// register 寄存器 register int a = 10 建议把a定义成寄存器变量
	// signed unsigned
	// union 联合体/共用体
	// typedef 类型定义 类型重定义
	// typedef unsigned int u_int;
	// u_int num1 = -10;
	// printf("%d\n", num1); 
	int a = 10;
	int b = 10;
	// 函数方式
	int max = Max(a, b);
	printf("max = %d\n", max);
	// 宏的方式
	max = MAX(a, b); // max = (a>b?a:b)
	printf("max = %d\n", max);
	return 0;
}

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}