#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

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
//	char* p = "abcdef";//"abcdef"��һ�������ַ���
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef"; // �����ַ��������ܱ�ָ���޸�
//	//*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef"; //�����ַ��������ɸı�,����ͬһ�ڴ�
//	const char* p2 = "abcdef";
//	//if (arr1 == arr2) // ������Ԫ�ص�ַ���бȽ�
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

//ָ�����������飬�������ָ���
//int main()
//{
//	int arr[10] = { 0 }; //��������
//	char ch[5] = { 0 }; //�ַ�����
//	int* parr[4];// �������ָ������� - ָ������
//	char* pch[5];// ����ַ�ָ������� - ָ������
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

//����ָ����ָ��
//int main()
//{
//	int *p = NULL;//p������ָ�� - ָ�����ε�ָ�� - ���Դ�����εĵ�ַ
//	char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	int arr[10] = { 0 };//����ָ�� - ָ�������ָ�� - ���Դ������ĵ�ַ
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�صĵ�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr; //����ĵ�ַҪ������
//	//�����p��������ָ��
//	
//	char* arr1[5];
//	char* (*pa)[5] = &arr1;
//	//char* ˵��paָ��������Ԫ��������char*,*pa˵��pa��ָ�룬[5]˵��paָ���������5��Ԫ�ص�
//
//	return 0;
//}

//�������������ʽ
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

//������ָ�����ʽ
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%2d ", *(*(p + i) + j));
//			printf("%2d ", (*(p + i))[j]); // *(p+i)�൱���ҵ���i�е�������
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
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//ָ������ - ���� - ���ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ��
//	int *p3; //����ָ�� - ָ�����ε�ָ��
//	char* p4;//�ַ�ָ�� - ָ���ַ���
//	int arr2[5];//����
//	int(*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa����һ������ָ��
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
//	test(arr);//ָ�����鴫��Ҳ����
//	return 0;
//}


//����ָ�� - ��ָ������ָ��
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
//	//&�������ͺ��������Ǻ����ĵ�ַ
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

typedef void(* pfun_t )(int); //����ָ�����ͽ���������
//signal��һ����������
//signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
void (*signal(int, void(*)(int)))(int);
pfun_t signal(int, pfun_t);

//int main()
//{
//	int *ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//ָ�����鴫��Ҳ����
//	return 0;
//}


//����ָ�� - ��ָ������ָ��
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
//	int (*pa)(int, int) = Add; //���������ǵ�ַ
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
//	//ָ������
//	int* arr[5];
//	//int(*pa)(int, int) = Add;
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	int(*parr[4])(int, int) = {Add,Sub,Mul,Div};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//ȡ��ÿ��������ָ�룬�����е���
//	}
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);
//2.дһ������ָ������pfArr,�ܹ����4��my_strcpy�����ĵ�ַ
//char*(*pfArr[4])(char*, const char*);

//������

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
//	printf("����������������:>");
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
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			int(*pfArr[6])(int, int) = { 0, Add, Sub, Mul, Div ,Xor};
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
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
//		printf("��ѡ��>");
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

int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//ȡ������ĵ�ַ

	int(*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
	int(*(*ppfArr)[4])(int, int) = &pfArr;
	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
	//ָ��������ÿ��Ԫ�ص�������һ������ָ��int(*)(int,int)
	return 0;
}