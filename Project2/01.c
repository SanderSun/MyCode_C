#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // 4*9 = 36
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	// printf("%d\n",sizeof int); 报错
	printf("%d\n", sizeof(arr)/sizeof(arr[0])); //计算数组个数

	int b = 0;
	int c = ~b;
	// 原码 反码 补码
	printf("%d\n", c);
	return 0;
}