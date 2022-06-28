#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//int main()
//{
	//1.sizeof(数组名) 表示整个数组
	//2.&数组名 表示整个数组
	//3.其它，数组名表示首元素的地址
	//int a[] = {1,2,3,4};
	//printf("%d\n", sizeof(a)); // 16 
	//printf("%d\n", sizeof(a+0)); // 4/8 a+0是首元素地址
	//printf("%d\n", sizeof(*a)); // 4 第一个元素的大小
	//printf("%d\n", sizeof(a+1)); // 4/8 a+1是第二个元素地址
	//printf("%d\n", sizeof(a[1]));// 4 第二个元素的大小
	//printf("%d\n", sizeof(&a));// 4/8 数组的地址
	//printf("%d\n", sizeof(*&a));// 16 &a数组的地址，数组的地址解引用访问的数组，计算的是数组的大小
	//printf("%d\n", sizeof(&a+1));// 4/8 &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址
	//printf("%d\n", sizeof(&a[0]));// 4/8 首元素的地址
	//printf("%d\n", sizeof(&a[0]+1));// 4/8 第二个元素的地址

	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr)); // 6
	//printf("%d\n", sizeof(arr+0));// 4/8
	//printf("%d\n", sizeof(*arr));// 1
	//printf("%d\n", sizeof(arr[1]));// 1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr+1));// 4/8
	//printf("%d\n", sizeof(&arr[0]+1));// 4/8

	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr+0));//随机值
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr+1));//随机值
	//printf("%d\n", strlen(&arr[0]+1));//随机值

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr)); // 7
	//printf("%d\n", sizeof(arr+0));// 4/8
	//printf("%d\n", sizeof(*arr));// 1
	//printf("%d\n", sizeof(arr[1]));// 1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr+1));// 4/8
	//printf("%d\n", sizeof(&arr[0]+1));// 4/8

	//printf("%d\n", strlen(arr));// 6
	//printf("%d\n", strlen(arr + 0));// 6
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));// 6
	//printf("%d\n", strlen(&arr + 1));// 随机值
	//printf("%d\n", strlen(&arr[0] + 1));// 5

	//char *p = "abcdef";
	//printf("%d\n", sizeof(p)); // 4/8
	//printf("%d\n", sizeof(p+1));// 4/8
	//printf("%d\n", sizeof(*p));// 1
	//printf("%d\n", sizeof(p[0]));// 1   arr[0] == *(arr+0)  p[0] == *(p+0) == 'a'
	//printf("%d\n", sizeof(&p));// 4/8
	//printf("%d\n", sizeof(&p+1));// 4/8
	//printf("%d\n", sizeof(&p[0]+1));// 4/8

	//printf("%d\n", strlen(p));// 6
	//printf("%d\n", strlen(p + 1));// 5
	////printf("%d\n", strlen(*p));//err
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));// 随机值
	//printf("%d\n", strlen(&p + 1));// 随机值
	//printf("%d\n", strlen(&p[0] + 1));// 5

	// 二维数组
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a)); // 48 
	//printf("%d\n", sizeof(a[0][0])); // 4
	//printf("%d\n", sizeof(a[0])); // 16 二维数组中，a[0]相当于一个数组名，sizeof(数组名)，&数组名，计算整个数组
	//printf("%d\n", sizeof(a[0]+1)); // 4/8 第一行第二元素的地址
	//printf("%d\n", sizeof(*(a[0] + 1)));// 4
	//printf("%d\n", sizeof(a+1));// 4/8 a是二维数组的数组名，没有sizeof(数组名)，也没有&(数组名)，所以a是首元素地址
	////把二维数组看成一位数组时，二维数组的首元素是他的第一行，a就是第一行整个数组的地址
	////a+1就是第二行整个数组地址
	//printf("%d\n", sizeof(*(a+1)));// 16
	//printf("%d\n", sizeof(&a[0]+1));// 4/8 第二行地址
	//printf("%d\n", sizeof(*(&a[0]+1)));// 16 计算第二行的大小，单位是字节
	//printf("%d\n", sizeof(*a));// 16 a是首元素地址-第一行的地址
	//printf("%d\n", sizeof(a[3]));// 16
	/*return 0;*/
//}