#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int arr[10] = {1,2,2}; // ����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = {'a','b'};
//	char arr3[5] = "ab";
//	char arr4[] = "lzy";
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef"; 
//	int i = 0;
//	for (i = 0; i < 6; i++){
//		printf("%c\n", arr[i]);
//	}
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	 //ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1; // ������һ��Ҫ����������Ѿ�����
//		//ÿ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}

//int main()
//{
//	int arr[] = { 2, 3, 5, 1, 6, 8, 9, 7, 0 ,4};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ&arr[0]
//	bubble_sort(arr,sz);
//
//	for (int i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	// 1.sizeof(������) - ��������ʾ�������飬sizeof(������)������������Ĵ�С
	// 2.&��������ȡ����������ĵ�ַ��&����������������ʾ�������顣
	// ����1��2�������֮�⣬���е�����������ʾ������Ԫ�صĵ�ַ��
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	return 0;
}
