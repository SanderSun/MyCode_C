#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// #define �����ʶ������
#define MAX 100
//#define ���Զ���� ������
#define MAX(X,Y) (X>Y?X:Y)
int main() 
{	
	// ()ǿ��ת��������
	//int a = (int)3.14;

	// ����������
	//int b = 3;
	//int c = 4;
	//int max = 0;
	//max = b > c ? b : c;
	//printf("%d\n", max);


	// register �Ĵ��� register int a = 10 �����a����ɼĴ�������
	// signed unsigned
	// union ������/������
	// typedef ���Ͷ��� �����ض���
	// typedef unsigned int u_int;
	// u_int num1 = -10;
	// printf("%d\n", num1); 
	int a = 10;
	int b = 10;
	// ������ʽ
	int max = Max(a, b);
	printf("max = %d\n", max);
	// ��ķ�ʽ
	max = MAX(a, b); // max = (a>b?a:b)
	printf("max = %d\n", max);
	return 0;
}

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}