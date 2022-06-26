#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
	/*printf("%d\n", sizeof(char*));
	int a = 0x11223344;
	int* pa = &a;
	*pa = 0;*/

	//int* p;// 局部变量不初始化，里边默认放的是一个一个随机值，野指针
	//*p = 20;
	//return 0;
//}

//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int *p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		/**p = i;
//		p++;*/
//		*p++ = i; // 数组越界访问，野指针
//	}
//	return 0;
//}

//指针指向的空间被释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p - 1;
//	}
//	return 0;
//}


// 指针实现字符长度的计算
//int  my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen 求字符串长度
//	//递归 - 模拟实现strlen 计数器的方式1，递归的方式2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa; // ppa就是二级指针
//	return 0;
//}

//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	/*int arr[10];*/
//	int* arr2[3] = {&a,&b,&c}; //指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i])); 
//	}
//	return 0;
//}


//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int get_diff_bit(int m, int n)
//{
//	int tmp = m^n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count = %d\n", count);
//	return 0;
//}

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

//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0; 
//}

//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}

double Pow(int n, int k)
{
	//n^k=n*n^(k-1)
	if (k < 0)
		return (1.0 / (Pow(n, -k)));
	else if (k == 0)
		return 1;
	else
		return n*Pow(n, k - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("ret = %lf\n", ret);
	return 0;
}