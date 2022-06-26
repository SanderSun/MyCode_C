#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 描述一个学生
// 名字 年龄 电话 性别
// struct 结构体关键字 stu - 结构体标签 struct Stu - 结构体类型
//struct Stu
//{
//	// 成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3; //s1,s2,s3是三个全局的结构体变量

//typedef struct Stu
//{
//	// 成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu; // stu是类型
//
//int main()
//{
//	// 创建结构体局部变量
//	struct Stu s = {"czc",21,"xxxxxxxxxxx","女"};
//	stu s1 = {"lzy",21,"17007679197","男"};
//	return 0;
//}


//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct s s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello world";
//	struct T t = { "hehe", {100,"w","hello",3.14}, arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//
//	return 0;
//}

typedef struct Stu
{
	// 成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu; // stu是类型

void Print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}

void Print2(Stu* ps)
{
	printf("name:%s\n", ps->name); //->用于结构体指针
	printf("name:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}

int main()
{
	Stu s = { "lzy", 40, "17007679197", "男" };
	//打印结构体数据
	//Print1和Print2哪个更好 结构体传参，传结构体的地址 
	Print1(s);
	Print2(&s);
	return 0;
}