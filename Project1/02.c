#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 3��define ����ı�ʶ������
#define MAX 10

// 4��enum ö�ٳ��� ö��һһ�о�
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

enum Color
{
	RED,
	YELLOWE,
	BLUE
};

int main(){
	// 1�����泣�� ֱ��д������
	// 2��const ������
	// const���ε�n�Ǳ������������г����ԣ���������˵n�ǳ�����
	// const int num = 4; 
	// const int n = 10;
	// int arr[n] = { 0 }; ���� n���ǳ���
	
	// enum ����ı��������޸�
	enum Color color = BLUE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	printf("%d\n", color);
	return 0;
}
