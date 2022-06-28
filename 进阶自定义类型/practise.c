#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量(对象)
//描述学生：属性-名字+电话+性别

//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4, s5, s6; //全局变量
//
//struct Stu s3; //全局变量

//匿名结构体变量
/*struct
{
	int a;
	char c;
}x;

struct
{
	int a;
	char c;
}* psa;*/ //结构体类型指针

//结构体自引用
//struct Node
//{
//	int data;
//	struct Node* next;
//};

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

//struct T
//{
//	double weight;
//	short age;
//};

//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//	struct T st;
//};


//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//}; //16
//
//struct S4
//{
//	char C1;
//	struct S3 s3;
//	double d;
//}; // 32


//设置默认对齐位数4
//#pragma pack(4)
//struct S5
//{
//	char c1;
//	double d;
//}s5;
//#pragma pack()
//取消设置的默认对齐数

//#include <stddef.h>
//struct S6
//{
//	char c;
//	int i;
//	double d;
//};

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}

//位段 - 二进制位
//struct S
//{
//	int a : 2; //a占2个比特位
//	int b : 5; //b占5个比特位
//	int c : 10;//c占10个比特位
//	int d : 30;//d占30个比特位
//};

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};




int main()
{
	//创建的结构体变量
	/*struct S s = { 'l', 10, 3.14, "hello world", {60.0,22} };
	printf("%c %d %lf %s %lf %d\n",s.c,s.a,s.d,s.arr,s.st.weight,s.st.age);*/
	//struct S1 s1 = { 0 };
	//printf("%d\n", sizeof(s1)); //12
	//struct S2 s2 = { 0 };
	//printf("%d\n", sizeof(s2)); //8
	/*printf("%d\n", sizeof(s5));*/

	//printf("%d\n", offsetof(struct S6, c)); //0
	//printf("%d\n", offsetof(struct S6, i)); //4
	//printf("%d\n", offsetof(struct S6, d)); //8

	/*struct S s = { 0 };
	Init(&s);
	Print1(s);
	Print2(&s); *///结构体传参建议使用传址

	/*struct S s;
	printf("%d\n", sizeof(s));*/ //8

	struct S s = { 0 };
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;

	return 0;
}