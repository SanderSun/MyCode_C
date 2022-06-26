#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//		
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

// 找到含9的100以内的数字

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;dao
//		if (i/10 == 9) // /是整除
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//分数求和

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i; // 如果不想整除，需要给被除数加小数点
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

// 寻找最大值

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0]; // 假设数组第一元素是最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

// 乘法口诀表
// 在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d  ", i, j, i*j); //%2d 两位右对齐，%-2d两位左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 猜数字游戏
// 1.电脑随机生成一个随机数 1-100
// 2.猜数字

void menu()
{
	printf("**************************\n");
	printf("***** 1.play  0.exit *****\n");
	printf("**************************\n");
};

void game()
{
	int ret = 0;
	int guess = 0;
	// 1.生成一个随机数
	ret = rand()%100 + 1; // rand()最大值是37000多，模100得0-99的数字
	// 2.猜数字
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	// 拿时间戳来设置随机数的起点
	// time_t time(time_t *timer)
	// srand函数设置随机数的起点只有设置一次
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}
