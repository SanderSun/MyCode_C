#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ����һ��ѧ��
// ���� ���� �绰 �Ա�
// struct �ṹ��ؼ��� stu - �ṹ���ǩ struct Stu - �ṹ������
//struct Stu
//{
//	// ��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3; //s1,s2,s3������ȫ�ֵĽṹ�����

//typedef struct Stu
//{
//	// ��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu; // stu������
//
//int main()
//{
//	// �����ṹ��ֲ�����
//	struct Stu s = {"czc",21,"xxxxxxxxxxx","Ů"};
//	stu s1 = {"lzy",21,"17007679197","��"};
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

//typedef struct Stu
//{
//	// ��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu; // stu������
//
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name); //->���ڽṹ��ָ��
//	printf("name:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//
//
//typedef struct
//{
//	int a;//0-3 4
//	char a;//4 1
//	//5
//	short c;//6-7 2
//	short c;//8-9 2
//	//10-11
//}AA_t; //12
//
//
//struct A
//{
//	int a;//0-3 4
//	short b;//4-5 2
//	//6-7
//	int c;//8-11 4
//	char d;//12 1
//	//13-15
//}; //16
//
//struct B
//{
//	int a; //0-3 4
//	short b;//4-5 2
//	char d;//6 1
//	//7
//	int c;//8-11 4
//}; //12

#pragma pack(4)
int main(int argc, char* argv[])
{
	struct tagTest1
	{
		short a; //0-1 2
		char d;//2 1
		//3
		long b;//4-7 4
		long c;//8-11 4
	};// 12

	struct tagTest2
	{
		long b;//0-3 4
		short c;//4-5 1
		char d;//6
		long a;//8-11 4
	};//12

	struct tagTest3
	{
		short c;//0-1 2
		//2-3
		long b;//4-7 4
		char d;//8 1
		long a;//12-15
	};//16

	struct tagTest1 stT1;
	struct tagTest2 stT2;
	struct tagTest3 stT3;

	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
	return 0;
}
#pragma pack()

//int main()
//{
//	Stu s = { "lzy", 40, "17007679197", "��" };
//	//��ӡ�ṹ������
//	//Print1��Print2�ĸ����� �ṹ�崫�Σ����ṹ��ĵ�ַ 
//	Print1(s);
//	Print2(&s);
//	return 0;
//}