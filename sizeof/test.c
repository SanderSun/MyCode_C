#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//int main()
//{
	//1.sizeof(������) ��ʾ��������
	//2.&������ ��ʾ��������
	//3.��������������ʾ��Ԫ�صĵ�ַ
	//int a[] = {1,2,3,4};
	//printf("%d\n", sizeof(a)); // 16 
	//printf("%d\n", sizeof(a+0)); // 4/8 a+0����Ԫ�ص�ַ
	//printf("%d\n", sizeof(*a)); // 4 ��һ��Ԫ�صĴ�С
	//printf("%d\n", sizeof(a+1)); // 4/8 a+1�ǵڶ���Ԫ�ص�ַ
	//printf("%d\n", sizeof(a[1]));// 4 �ڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&a));// 4/8 ����ĵ�ַ
	//printf("%d\n", sizeof(*&a));// 16 &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬�����������Ĵ�С
	//printf("%d\n", sizeof(&a+1));// 4/8 &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ
	//printf("%d\n", sizeof(&a[0]));// 4/8 ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0]+1));// 4/8 �ڶ���Ԫ�صĵ�ַ

	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr)); // 6
	//printf("%d\n", sizeof(arr+0));// 4/8
	//printf("%d\n", sizeof(*arr));// 1
	//printf("%d\n", sizeof(arr[1]));// 1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr+1));// 4/8
	//printf("%d\n", sizeof(&arr[0]+1));// 4/8

	//printf("%d\n", strlen(arr));//���ֵ
	//printf("%d\n", strlen(arr+0));//���ֵ
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr+1));//���ֵ
	//printf("%d\n", strlen(&arr[0]+1));//���ֵ

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr)); // 7
	//printf("%d\n", sizeof(arr+0));// 4/8
	//printf("%d\n", sizeof(*arr));// 1
	//printf("%d\n", sizeof(arr[1]));// 1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr+1));// 4/8
	//printf("%d\n", sizeof(&arr[0]+1));// 4/8

	//printf("%d\n", strlen(arr));// 6
	//printf("%d\n", strlen(arr + 0));// 6
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));// 6
	//printf("%d\n", strlen(&arr + 1));// ���ֵ
	//printf("%d\n", strlen(&arr[0] + 1));// 5

	//char *p = "abcdef";
	//printf("%d\n", sizeof(p)); // 4/8
	//printf("%d\n", sizeof(p+1));// 4/8
	//printf("%d\n", sizeof(*p));// 1
	//printf("%d\n", sizeof(p[0]));// 1   arr[0] == *(arr+0)  p[0] == *(p+0) == 'a'
	//printf("%d\n", sizeof(&p));// 4/8
	//printf("%d\n", sizeof(&p+1));// 4/8
	//printf("%d\n", sizeof(&p[0]+1));// 4/8

	//printf("%d\n", strlen(p));// 6
	//printf("%d\n", strlen(p + 1));// 5
	////printf("%d\n", strlen(*p));//err
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));// ���ֵ
	//printf("%d\n", strlen(&p + 1));// ���ֵ
	//printf("%d\n", strlen(&p[0] + 1));// 5

	// ��ά����
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a)); // 48 
	//printf("%d\n", sizeof(a[0][0])); // 4
	//printf("%d\n", sizeof(a[0])); // 16 ��ά�����У�a[0]�൱��һ����������sizeof(������)��&��������������������
	//printf("%d\n", sizeof(a[0]+1)); // 4/8 ��һ�еڶ�Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*(a[0] + 1)));// 4
	//printf("%d\n", sizeof(a+1));// 4/8 a�Ƕ�ά�������������û��sizeof(������)��Ҳû��&(������)������a����Ԫ�ص�ַ
	////�Ѷ�ά���鿴��һλ����ʱ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ����������ĵ�ַ
	////a+1���ǵڶ������������ַ
	//printf("%d\n", sizeof(*(a+1)));// 16
	//printf("%d\n", sizeof(&a[0]+1));// 4/8 �ڶ��е�ַ
	//printf("%d\n", sizeof(*(&a[0]+1)));// 16 ����ڶ��еĴ�С����λ���ֽ�
	//printf("%d\n", sizeof(*a));// 16 a����Ԫ�ص�ַ-��һ�еĵ�ַ
	//printf("%d\n", sizeof(a[3]));// 16
	/*return 0;*/
//}