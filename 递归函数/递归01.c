#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("haha\n");
//	main();
//	return 0;
//}
// 每次递归调用之后越来越接近限制条件
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	// 递归
//	print(num);
//	return 0;
//}

//求字符串的长度，但不能创建临时变量
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//递归实现
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//} 
//
//int main()
//{
//	char arr[] = "陈梓澄";
//	//int len = strlen(arr);
//	int len = my_strlen(arr); // arr传参，传的是首元素地址
//	printf("%d\n", len);
//	return 0;
//}

// 求n的阶乘
//int Facl(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
// 递归实现
//int Facl(int n)
//{
//	if (n > 1)
//		return n*Facl(n - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("%d\n", ret);
//	return 0;
//}

//求第n个斐波那契数
// 斐波那契数列 1 1 2 3 5 8 13 21 34 55 前两数之和等于第三个数
//int count = 0;
//递归实现
//int Fib(int n)
//{
//	if (n == 3) //测试第三个斐波那契数的计算次数
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//循环实现
//int Fib(int n)
//{
//	int a = 1; 
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}