#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // 4*9 = 36
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	// printf("%d\n",sizeof int); ����
	printf("%d\n", sizeof(arr)/sizeof(arr[0])); //�����������

	int b = 0;
	int c = ~b;
	// ԭ�� ���� ����
	printf("%d\n", c);
	return 0;
}