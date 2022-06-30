#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "add.h"
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

//#define MAX 100
//#define STR "abc"
//#define SU_DO for(;;)

//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of ""a"" is %d\n",a);
//	PRINT(b);
//	//printf("the value of ""b"" is %d\n",a);
//	return 0;
//}

//#define CAT(X,Y) X##Y
//int main()
//{
//	int Class17 = 2019;
//	printf("%d\n", CAT(Class, 17));
//	return 0;
//}

#define MAX(X,Y) ((X)>(Y)?(X):(Y))
#define __DEBUG__
int main()
{
	int a = 10;
	int b = 11;
//#undef MAX 
	int max = MAX(a++, b++);
	//int max = ((a++)>(b++)?(a++):(b++)) 
#ifdef __DEBUG__
	printf("%d\n",max);
	printf("%d\n", a);
	printf("%d\n", b);
#endif

#if a>b
	printf("%d\n", max);
#elif a<b
	printf("%d\n", a);
#else
	printf("%d\n", b);
#endif

	return 0;
}



