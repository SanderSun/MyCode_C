#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("haha\n");
//	main();
//	return 0;
//}
// ÿ�εݹ����֮��Խ��Խ�ӽ���������
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	// �ݹ�
//	print(num);
//	return 0;
//}

//���ַ����ĳ��ȣ������ܴ�����ʱ����
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�ݹ�ʵ��
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//} 
//
//int main()
//{
//	char arr[] = "������";
//	//int len = strlen(arr);
//	int len = my_strlen(arr); // arr���Σ���������Ԫ�ص�ַ
//	printf("%d\n", len);
//	return 0;
//}

// ��n�Ľ׳�
//int Facl(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
// �ݹ�ʵ��
//int Facl(int n)
//{
//	if (n > 1)
//		return n*Facl(n - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("%d\n", ret);
//	return 0;
//}

//���n��쳲�������
// 쳲��������� 1 1 2 3 5 8 13 21 34 55 ǰ����֮�͵��ڵ�������
//int count = 0;
//�ݹ�ʵ��
//int Fib(int n)
//{
//	if (n == 3) //���Ե�����쳲��������ļ������
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//ѭ��ʵ��
//int Fib(int n)
//{
//	int a = 1; 
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}