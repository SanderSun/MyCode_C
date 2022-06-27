#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//c语言类型：1.内置类型char short int long float double
//			2.自定义类型(构造)
//整形家族：char unsigned char signed char
//			short unsigned short [int] signed short [int]
//			int unsigned int signed int
//			long unsigned long [int] signed long [int]
//浮点类型：float double
//构造类型：数组类型 结构体类型 struct 枚举类型 enum 联合类型 union
//指针类型：int* pi; char* pc; float* pf; void* pv; 4个或8个字节
//空类型：void


//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	printf("%d %d %d %d %d %d", sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(float), sizeof(double));
//	return 0;
//}

//int main()
//{
//	//整形数据存放内存中其实存放的是补码
//	//正数原反补相同 负数原反补不同
//	int a = 20;//4个字节-32bit 
//	//00000000000000000000000000010100 --原码
//	//00000000000000000000000000010100 --反码
//	//000000000000000000000000 0001 0100 --补码
//	//0x00000014 十六进制
//	int b = -10;
//	//10000000000000000000000000001010 --原码
//	//11111111111111111111111111110101 --反码
//	//1111 1111 1111 1111 1111 1111 1111 0110 --补码
//	//0xFFFFFFF6
//}

//int check_sys(void)
//{
//	int a = 1;
//	char *p = (char*)&a; // char*类型解引用只访问一个字节即8bit
//	//返回1，小端
//	//返回0，大端
//	return *p;
//	/*if (*p == 1)
//		return 1;
//	else
//		return 0;*/
//}

//int check_sys(){
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是什么
//	//返回1，小端
//	//返回0，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	//1000 0000 0000 0000 0000 0000 0000 0001
//	//1111 1111 1111 1111 1111 1111 1111 1110
//	//1111 1111 1111 1111 1111 1111 1111 1111
//	//1111 1111
//	signed char b = -1;
//	//1111 1111
//	unsigned char c = -1;
//	//1111 1111
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%d\n", a);
//
//	//%d - 打印十进制的有符号数字
//	//%u - 打印十进制的无符号数字
//	
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d ", i + j);
//	return 0;
//}

//#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a)); // 字符0就是'\0'
//	return 0;
//}

//int main()
//{
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

int main()
{
	int n = 9;
	//0 00000000 000000000000000001001
	float *pFloat = (float *)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	//(-1)^0*0.000000000000000001001*2^-126

	*pFloat = 9.0;
	//1001.0
	//1.001*2^3
	//(-1)^0*1.001*2^3
	//01000001000100000000000000000000
	printf("num的值为：%d\n", n);//1,091,567,616
	printf("*pFloat的值为：%f\n", *pFloat);//9.000000
	return 0;
}

//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)*0 * 1.011*2^2
//	//s=0
//	//M=1.011
//	//E=2
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//0x40b00000
// 	return 0;
//}