#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>


// strcpy
//int main()
//{
//	char arr1[] = "czc";
//	char arr2[20] = "czcczcczcczc";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//
//} 

//void * memset ( void * ptr, int value, size_t num ); 字符串存的是十进制的码值，码值是int
//int main()
//{
//	char arr[] = {"hello world"};
//	memset(arr, '*', 5); 
//	printf("%s\n", arr);
//	return 0;
//}

// 自定义定义函数
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = set_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

// 交换两个数
// 实参传给形参，形参实例化后其实是实参的一份临时拷贝
// 对形参的修改是不会改变实参的，形参和实参分别有不同的内存块
// 函数调用：传值调用，传址调用(把函数内部与函数外部的变量建立起真正的联系)
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

// 打印素数
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// 二分法查找
// 本质上arr是一个指针
//int binary_search(int arr[], int k, int sz)
//{
//	// 算法实现
//	int left = 0;
//	int right = sz - 1; 
//	int mid_index = 0;
//	while (right >= left)
//	{
//		mid_index = (left + right) / 2;
//		if (arr[mid_index] < k)
//		{
//			left = mid_index + 1;
//		}
//		else if (arr[mid_index] > k)
//		{
//			right = mid_index - 1;
//		}
//		else
//		{
//			return mid_index;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	// 二分法查找，在一个有序数组中查找具体的某个数
//	// 如果找到了返回这个数的下标，找不到的返回-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz); // arr传过去是首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n",ret);
//	}
//	return 0;
//}


//void Add(int* np)
//{
//	(*np)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", printf("%d\n", printf("%d\n", 4343)));
//	return 0;
//}

#include "add.h"
int main()
{
	int a = 8;
	int b = 9;
	// 函数调用
	int sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}
