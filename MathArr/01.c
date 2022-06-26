#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int arr[10] = {1,2,2}; // 不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = {'a','b'};
//	char arr3[5] = "ab";
//	char arr4[] = "lzy";
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef"; 
//	int i = 0;
//	for (i = 0; i < 6; i++){
//		printf("%c\n", arr[i]);
//	}
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	 //确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1; // 假设这一趟要排序的数据已经有序
//		//每趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}

//int main()
//{
//	int arr[] = { 2, 3, 5, 1, 6, 8, 9, 7, 0 ,4};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址&arr[0]
//	bubble_sort(arr,sz);
//
//	for (int i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	// 1.sizeof(数组名) - 数组名表示整个数组，sizeof(数组名)计算整个数组的大小
	// 2.&数组名，取出的是数组的地址。&数组名，数组名表示整个数组。
	// 除此1，2两种情况之外，所有的数组名都表示数组首元素的地址。
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	return 0;
}
