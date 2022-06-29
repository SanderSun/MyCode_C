#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{

	// 向内存申请10个整型的空间
	//malloc申请空间
	/*int* p = (int*)malloc(20);*/
	//calloc申请空间
	//int* p = (int*)calloc(10,sizeof(int));
	/*if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 5; i++)
		{
			printf("%d ", *(p + i));
		}

	}*/

	//假设20个字节不能满足我们的使用了
	//希望我们能够有40个字节的空间
	//这里就可以使用realloc来调整动态开劈的内存
	//
	//realloc使用的注意事项：
	/*1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
	2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
		开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回新开辟的内存空间地址
	3.得用一个新的变量来接受realloc函数的返回值*/
	//int* ptr = (int*)realloc(p, 40);
	//if (ptr)
	//{
	//	//开辟成功，把ptr赋值给p
	//	p = ptr;
	//	int i = 0;
	//	for (i = 5; i < 10; i++)
	//	{
	//		*(p + i) = i;
	//	}
	//	for (i = 0; i < 10; i++)
	//	{
	//		printf("%d ", *(p + i));
	//	}
	//}

	//当动态申请的空间不再使用的时候
	//free函数是用来释放动态开辟的空间
	/*free(p);
	p = NULL; 
	return 0; 
//*/
//}


//void GetMemory(char** p){
//	*p = (char*)malloc(100);
//}

//char* GetMemory(){
//	return (char*)malloc(100);
//}

//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str); //GetMemory(str); 传值传参，p是临时拷贝，函数操作不会影响到str
//	if (str)
//	{
//		strcpy(str, "hello world");
//		printf(str);
//	}
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//char* GetMemory(void)
//{
//	char p[] = "hello world"; // 返回栈空间的地址有 问题，static修饰变量存放在静态区
//	return p;
//} //局部变量，字符数组出了函数就被销毁
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str); //非法访问内存
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//struct S
//{
//	int n;
//	int arr[]; //未知大小的-柔性数组成员-数组的大小是可以调整的
//};

//struct S
//{
//	int n;
//	int arr[0]; //未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	/*struct S s;
//	printf("%d\n", sizeof(s));*/
//	//柔性数组成员的使用
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = (int*)malloc(5*sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//调整大小
	int* ptr = (int*)realloc(ps->arr, 10 * sizeof(int));
	if (ptr)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//释放内存
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}
