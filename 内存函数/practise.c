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
		//ǰ->��
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//��->ǰ
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	//if (dest<src || dest>(char*)src + count); ��ʽ��
	return ret;
}
//c���Ա�׼��
//memcpy ֻҪ���� ���ص����ڴ濽���Ϳ���
//memmove �����ص��ڴ�Ŀ���
int main()
{
	/*int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 0 };
	struct S arr3[] = { { "����",20 }, { "����", 30 } };
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