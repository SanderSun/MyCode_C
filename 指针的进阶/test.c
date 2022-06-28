#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//
//int main()
//{
//	int arr[10] = {0};
//	test(arr);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//"abcdef"是一个常量字符串
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef"; // 常量字符串，不能被指针修改
//	//*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef"; //常量字符串，不可改变,共用同一内存
//	const char* p2 = "abcdef";
//	//if (arr1 == arr2) // 两个首元素地址进行比较
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//指针数组是数组，用来存放指针的
//int main()
//{
//	int arr[10] = { 0 }; //整形数组
//	char ch[5] = { 0 }; //字符数组
//	int* parr[4];// 存放整形指针的数组 - 指针数组
//	char* pch[5];// 存放字符指针的数组 - 指针数组
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = {&a,&b,&c,&d};
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int arr2[] = { 1, 2, 3, 4, 5, 6, 9 };
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 8 };
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 7; j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针是指针
//int main()
//{
//	int *p = NULL;//p是整形指针 - 指向整形的指针 - 可以存放整形的地址
//	char* pc = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//	int arr[10] = { 0 };//数组指针 - 指向数组的指针 - 可以存放数组的地址
//	//arr - 首元素地址
//	//&arr[0] - 首元素的地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr; //数组的地址要存起来
//	//上面的p就是数组指针
//	
//	char* arr1[5];
//	char* (*pa)[5] = &arr1;
//	//char* 说明pa指向的数组的元素类型是char*,*pa说明pa是指针，[5]说明pa指向的数组是5个元素的
//
//	return 0;
//}

//参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//参数是指针的形式
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%2d ", *(*(p + i) + j));
//			printf("%2d ", (*(p + i))[j]); // *(p+i)相当于找到第i行的数组名
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 5, 6, 7, 8, 9 }, { 9, 10 ,11,12,13} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//指针数组 - 数组 - 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针
//	int *p3; //整形指针 - 指向整形的指针
//	char* p4;//字符指针 - 指向字符的
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针
//	return 0;
//}

//void test(int arr[3][5])
//{
//
//}

//void test1(int arr[][5])
//{
//
//}

//void test2(int arr[3][]) //err
//{}

//void test2(int arr[][]) //err
//{}

//void test(int** p)
//{
//
//}
//
//int main()
//{
//	int *ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//指针数组传参也可以
//	return 0;
//}


//函数指针 - 是指向函数的指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*printf("%d\n", Add(a, b));*/
//	//&函数名和函数名都是函数的地址
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello world");
//	return 0;
//}

typedef unsigned int uint;

typedef void(* pfun_t )(int); //函数指针类型进行重命名
//signal是一个函数声明
//signal函数的参数有2个，第一个是int。第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void
void (*signal(int, void(*)(int)))(int);
pfun_t signal(int, pfun_t);

//int main()
//{
//	int *ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//指针数组传参也可以
//	return 0;
//}


//函数指针 - 是指向函数的指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add; //函数名就是地址
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", Add(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int Sub(int x, int y)
//{
//	int z = 0;
//	z = x - y;
//	return z;
//}
//int Mul(int x, int y)
//{
//	int z = 0;
//	z = x * y;
//	return z;
//}
//int Div(int x, int y)
//{
//	int z = 0;
//	z = x / y;
//	return z;
//}

//int main()
//{
//	//指针数组
//	int* arr[5];
//	//int(*pa)(int, int) = Add;
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	int(*parr[4])(int, int) = {Add,Sub,Mul,Div};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//取出每个函数的指针，并进行调用
//	}
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//1.写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char*, const char*);
//2.写一个函数指针数组pfArr,能够存放4个my_strcpy函数的地址
//char*(*pfArr[4])(char*, const char*);

//计算器

//void menu()
//{
//	printf("***************************\n");
//	printf("*******1.add	2.sub******\n");
//	printf("*******3.mul	4.div******\n");
//	printf("*******5.Xor    0.exit******\n");
//	printf("***************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x^y;
//}
//void Calc(int (*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			int(*pfArr[6])(int, int) = { 0, Add, Sub, Mul, Div ,Xor};
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		default:
//			break;
//		}
//	} while (input);
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//
//	int(*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针int(*)(int,int)
//	return 0;
//}
//void print1(char* str)
//{
//	printf("hehe:%s\n", str);
//}
//
//void print2(char* str)
//{
//	printf("haha:%s\n", str);
//}
//
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	//回调函数
//	test(print2);
//
//	return 0;
//}
//int Add(int x, int y);
//
//int main()
//{
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int*(*pa)[10] = &arr;
//	//函数指针
//	int(*pAdd)(int, int) = Add;
//	//函数指针的数组
//	int(*pArr[5])(int, int);
//	//指向函数指针数组的指针
//	int(*(*ppArr)[5])(int, int) = &pArr;
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

struct Stu
{
	char name[20];
	int age;
};
//void qsort(void *base, size_t num, size_t width, int(*cmp)(const void *el, const void *e2));

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
}

int cmp_float(const void* el, const void* e2)
{
	if (*(float*)el == *(float*)e2)
		return 0;
	else if (*(float*)el > *(float*)e2)
		return 1;
	else
		return -1;
}

void test2()
{
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%f ", f[i]);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	//字符串比较不能直接用<>=来比较，应该用strcmp函数
	return strcmp(((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
}


void test3()
{
	struct Stu s[3] = { { "张三", 20 }, { "李四", 30 }, { "王五", 35 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

void Swap(char* buf1, char* buf2, int width) //一个字节一个字节交换，交换四次，相当于交换一个int类型
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width,int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i;j++)
		{
			//两个元素的比较
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				//交换
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			}
		}
	}
}

void test4()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
}

void test5()
{
	struct Stu s[3] = { { "张三", 20 }, { "李四", 30 }, { "王五", 35 } };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
}


int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	test5();
	return 0;
}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//char* pc = &a;
//	void* p = &a;
//	char ch = 'w';
//	p = &ch;
//	return 0;
//}