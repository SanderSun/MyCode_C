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

	// ���ڴ�����10�����͵Ŀռ�
	//malloc����ռ�
	/*int* p = (int*)malloc(20);*/
	//calloc����ռ�
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

	//����20���ֽڲ����������ǵ�ʹ����
	//ϣ�������ܹ���40���ֽڵĿռ�
	//����Ϳ���ʹ��realloc��������̬�������ڴ�
	//
	//reallocʹ�õ�ע�����
	/*1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
	2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
		����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
	3.����һ���µı���������realloc�����ķ���ֵ*/
	//int* ptr = (int*)realloc(p, 40);
	//if (ptr)
	//{
	//	//���ٳɹ�����ptr��ֵ��p
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

	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
	//free�����������ͷŶ�̬���ٵĿռ�
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
//	GetMemory(&str); //GetMemory(str); ��ֵ���Σ�p����ʱ������������������Ӱ�쵽str
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
//	char p[] = "hello world"; // ����ջ�ռ�ĵ�ַ�� ���⣬static���α�������ھ�̬��
//	return p;
//} //�ֲ��������ַ�������˺����ͱ�����
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str); //�Ƿ������ڴ�
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
//	int arr[]; //δ֪��С��-���������Ա-����Ĵ�С�ǿ��Ե�����
//};

//struct S
//{
//	int n;
//	int arr[0]; //δ֪��С��-���������Ա-����Ĵ�С�ǿ��Ե�����
//};
//
//int main()
//{
//	/*struct S s;
//	printf("%d\n", sizeof(s));*/
//	//���������Ա��ʹ��
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
	//������С
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
	//�ͷ��ڴ�
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}
