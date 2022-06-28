#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//
//}* p;

//假设p 的值为0x100000 如下表达式的值分别为多少?
//已知，结构体Test类型的变量大小是20个字节

//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1); //0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 }; // 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2); //ptr1[-1]==*(ptr1-1);
//	return 0; 
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); //p[4][2] == * (*(p+4)+2)
//	return 0;
//}

//int main()
//{
//	char* a[]  = {"work","at","alibaba"}; //指针数组
//	char* *pa = a; //指向指针数组的指针，pa指针指向一个元素，元素的类型是char*
//
//	pa++; // pa移动一个char*
//	printf("%s\n", *pa); //以a地址开头打印一个字符串
//	return 0;
//}


int main()
{
	char *c[] = {"ENTER","NEW","POINT","FIRST"};
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n", cpp[-1][-1]+1);
	return 0;
}