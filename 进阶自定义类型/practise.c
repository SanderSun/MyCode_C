#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������(����)
//����ѧ��������-����+�绰+�Ա�

//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4, s5, s6; //ȫ�ֱ���
//
//struct Stu s3; //ȫ�ֱ���

//�����ṹ�����
/*struct
{
	int a;
	char c;
}x;

struct
{
	int a;
	char c;
}* psa;*/ //�ṹ������ָ��

//�ṹ��������
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


//����Ĭ�϶���λ��4
//#pragma pack(4)
//struct S5
//{
//	char c1;
//	double d;
//}s5;
//#pragma pack()
//ȡ�����õ�Ĭ�϶�����

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

//λ�� - ������λ
//struct S
//{
//	int a : 2; //aռ2������λ
//	int b : 5; //bռ5������λ
//	int c : 10;//cռ10������λ
//	int d : 30;//dռ30������λ
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
	//�����Ľṹ�����
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
	Print2(&s); *///�ṹ�崫�ν���ʹ�ô�ַ

	/*struct S s;
	printf("%d\n", sizeof(s));*/ //8

	struct S s = { 0 };
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;

	return 0;
}