#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>


// strcpy
//int main()
//{
//	char arr1[] = "czc";
//	char arr2[20] = "czcczcczcczc";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//
//} 

//void * memset ( void * ptr, int value, size_t num ); �ַ��������ʮ���Ƶ���ֵ����ֵ��int
//int main()
//{
//	char arr[] = {"hello world"};
//	memset(arr, '*', 5); 
//	printf("%s\n", arr);
//	return 0;
//}

// �Զ��嶨�庯��
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = set_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

// ����������
// ʵ�δ����βΣ��β�ʵ��������ʵ��ʵ�ε�һ����ʱ����
// ���βε��޸��ǲ���ı�ʵ�εģ��βκ�ʵ�ηֱ��в�ͬ���ڴ��
// �������ã���ֵ���ã���ַ����(�Ѻ����ڲ��뺯���ⲿ�ı�����������������ϵ)
//void Swap(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

// ��ӡ����
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// ���ַ�����
// ������arr��һ��ָ��
//int binary_search(int arr[], int k, int sz)
//{
//	// �㷨ʵ��
//	int left = 0;
//	int right = sz - 1; 
//	int mid_index = 0;
//	while (right >= left)
//	{
//		mid_index = (left + right) / 2;
//		if (arr[mid_index] < k)
//		{
//			left = mid_index + 1;
//		}
//		else if (arr[mid_index] > k)
//		{
//			right = mid_index - 1;
//		}
//		else
//		{
//			return mid_index;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	// ���ַ����ң���һ�����������в��Ҿ����ĳ����
//	// ����ҵ��˷�����������±꣬�Ҳ����ķ���-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz); // arr����ȥ����Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
//	}
//	return 0;
//}


//void Add(int* np)
//{
//	(*np)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", printf("%d\n", printf("%d\n", 4343)));
//	return 0;
//}

#include "add.h"
int main()
{
	int a = 8;
	int b = 9;
	// ��������
	int sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}
