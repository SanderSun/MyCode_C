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

typedef struct Stu
{
	// ��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu; // stu������

void Print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}

void Print2(Stu* ps)
{
	printf("name:%s\n", ps->name); //->���ڽṹ��ָ��
	printf("name:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}

int main()
{
	Stu s = { "lzy", 40, "17007679197", "��" };
	//��ӡ�ṹ������
	//Print1��Print2�ĸ����� �ṹ�崫�Σ����ṹ��ĵ�ַ 
	Print1(s);
	Print2(&s);
	return 0;
}