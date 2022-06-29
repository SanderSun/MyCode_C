#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

extern int add(int x, int y);

//int main()
//{
//	/*int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//
//	/*int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("c = %d\n", c);*/
//
//	/*printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);*/
//
//	写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#define MAX 100
#define STR "abc"