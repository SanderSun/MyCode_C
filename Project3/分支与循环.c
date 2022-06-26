#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>


// else 与最近未匹配的if进行匹配
// return 退出整个程序

//int main()
//{
	/*int num = 6;
	if (6 == num)
	{
		printf("涉及常量与变量的比较，最好把常量放前，变量放后\n");
	}*/

	// 判断一个数是否为奇数
	/*int num1 = 99;
	if (num1 % 2 == 1)
	{
		printf("%d是奇数\n", num1);
	}
	else
	{
		printf("%d是偶数\n", num1);
	}*/

	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{*/
		//case 整形常量表达式
	/*case 1:
		printf("星期1\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期7\n");
		break;
	default:
		break;*/
	/*case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("学习日\n");
		break;
	case 6:
	case 7:
		printf("学习日\n");
		break;

	default:
		break;
	}*/

	//int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		continue; // continue 跳出本次循环，进入下次循环
	//	i++;
	//	printf("%d\n", i);
	//	// break; 永久终止循环
	//}

	//int ch = getchar(); // 接收字符
	//putchar(ch); // 打印字符
	//return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++) // 建议控制变量采用前闭后开写法
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	/*for (;;)
//	{
//		printf("for循环的初始化、调整、判断都可以省略，判断省略恒为真");
//	}*/
//
//
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//	
//}


// do while语句
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			//continue; 1234后面进入死循环，跳过后面的代码进入判断
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//}

//练习
//int main()
//{
//	// 计算n的阶乘
//	/*long n = 0;
//	long result = 1;
//	for (n = 1; n <= 30; n++)
//	{
//	result = result * n;
//	}
//	printf("result = %d\n", result);*/
//
//	// 计算1！+2！+3！+...+10!
//	/*int x,y,res;
//	int sum = 0;
//	for (x = 1; x <= 10; x++)
//	{
//	res = 1;
//	for (y = 1; y <= x; y++)
//	{
//	res = res*y;
//	}
//	sum = sum + res;
//	}
//	printf("sum = %d\n", sum);*/
//
//
//	/*int n = 0;
//	long ret = 1;
//	long sum1 = 0;
//	for (n = 1; n <= 10; n++)
//	{
//	ret = ret*n;
//	sum1 = sum1 + ret;
//	}
//	printf("sum1 = %d\n", sum1);*/
//
//	// 查找有序数组的元素
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 10;
//	//方法一
//	//int i = 0;
//	// 写一个代码，在arr数组找到7
//	//int sz = sizeof(arr) / sizeof(arr[0]); //数组长度
//	//for (i = 0; i < sz; i++)
//	//{
//	//	if (k == arr[i])
//	//	{
//	//		printf("找到了，下标是：%d\n", i);
//	//		break;
//	//	}
//	//}
//	//if (i == sz)
//	//{
//	//	printf("找不到\n");
//	//}
//
//	// 方法二
//	//int sz = sizeof(arr) / sizeof(arr[0]); // 计算元素个数
//	//int left = 0; //左下标
//	//int right = sz - 1; //右下标
//	//while (left<=right)
//	//{
//	//	int mid = (left + right) / 2;
//	//	if (arr[mid] > k)
//	//	{
//	//		right = mid - 1;
//	//	}
//	//	else if (arr[mid]<k)
//	//	{
//	//		left = mid + 1;
//	//	}
//	//	else
//	//	{
//	//		printf("找到了,下标是：%d\n", mid);
//	//		break;
//	//	}
//	//}
//	//if (left>right)
//	//{
//	//	printf("找不到了\n");
//	//}
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) -1;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2; // 字符包含\0占一个字节
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password,"520520") == 0)// ==不能用来比较两个字符串是否相等，应该使用一个库函数strcmp,两个字符串相等就等于0
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均错误,退出程序\n");
	}
	return 0;
}