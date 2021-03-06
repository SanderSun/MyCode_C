#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

struct S
{
	char name[20];
	int age;
};

void* my_memcpy(void* dest,const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}

void* my_memmove(void* dest, const void* src, size_t count)
{ 
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		//前->后
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//后->前
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	//if (dest<src || dest>(char*)src + count); 方式二
	return ret;
}
//c语言标准：
//memcpy 只要处理 不重叠的内存拷贝就可以
//memmove 处理重叠内存的拷贝
int main()
{
	/*int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 0 };
	struct S arr3[] = { { "张三",20 }, { "李四", 30 } };
	struct S arr4[3] = { 0 };
	my_memcpy(arr2, arr1, sizeof(arr1));
	my_memcpy(arr4, arr3, sizeof(arr3));*/

	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	my_memmove(arr, arr+2, 20);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}*/

	/*int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 5, 4, 3 };
	int ret = memcmp(arr1, arr2, 9);
	printf("%d\n", ret);*/

	char arr[10] = "";
	memset(arr, '#', 10);
	return 0;
}