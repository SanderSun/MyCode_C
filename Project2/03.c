#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10; // 申请了4个字节的空间
	printf("%p\n", &a);
	int* p = &a;// &取地址 int* 是p的变量类型 *告诉我们，p是指针变量
	printf("%p\n", p); // p是一个变量-指针变量
	*p = 20; //* 是解引用操作符,找到地址对应的变量
	printf("%d\n", sizeof(p)); // 32位4字节 64位8字节
	printf("a = %d\n", a);

	double d = 3.14;
	double* pd = &d;
	*pd = 5.5;
	printf("%lf\n", d);
	printf("%lf\n", *pd);
	return 0;
}