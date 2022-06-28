#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>

//1.�������ķ���
//2.�ݹ�
//3.ָ��-ָ��
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

char* my_strcpy(char* dest,const char* src) //����Ŀ�ĵصĵ�ַ
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	// ����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
	while (*dest++ = *src++) //���±��ʽ�������\0,����Ϊ��
	{
		;
	}
	return ret;
}

char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);//����Ϊ�٣���������
	char* ret = dest;
	//1.�ҵ�Ŀ���ַ�����\0
	while (*dest != '\0')
		dest++;
	//2.׷��
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	//�Ƚ�
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	/*if (*str1 > *str2)
		return 1;
	else
		return -1;*/
	return (*str1 - *str2);
}

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)str1;
	if (!*str2)
	{
		return (char*)str1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)str2;
		while(*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (!*s2)
			return cur;//�ҵ��Ӵ�
		if (!*s1)
			return NULL;
		cur++;
	}
	return NULL;//�Ҳ����Ӵ�
}

int main()
{
	/*int len = strlen("abcdef");
	printf("%d\n", len);*/

	/*char arr1[] = "abcdefghi";
	char arr2[] = "bit";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);*/

	/*char arr1[20] = "hello";
	char arr2[] = "world";
	strcat(arr1, arr2);
	printf("%s\n", arr1);*/

	/*char* p1 = "abc";
	char* p2 = "abcd";
	int ret = my_strcmp(p1, p2);
	printf("%d\n", ret);*/

	/*char arr1[5] = "abc";
	char arr2[] = "hello world";
	strncpy(arr1, arr2, 4);
	printf("%s\n", arr1);*/

	/*const char* p1 = "abcdef";
	const char* p2 = "abcqwer";
	int ret = strncmp(p1, p2, 4);
	printf("%d\n",ret);*/

	//strstr - �����ַ���
	/*const char* p1 = "abcdef";
	const char* p2 = "defgi";
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
		printf("�Ӵ�������\n");
	else
		printf("%s\n", ret);*/

	//192.168.31.121
	//192 168 31 121 - strtok
	//zsd@bitedu.tech  @.

	/*char arr[] = "zpw@bitedu.@tech";
	char* p = "@.";
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
		printf("%s\n", ret);*/

	/*char* ret = strtok(arr, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);

	ret = strtok(NULL, p);
	printf("%s\n", ret);*/

	//0 - No error
	//1 - Operation not permitted
	//2 - No such file or directory
	//errno ��һ��ȫ�ֵĴ�����ı���
	//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
	/*char* str = strerror(errno);
	printf("%s\n", str);*/

	/*char ch = 'w';
	char ch1 = toupper(ch);
	int ret = islower(ch);
	printf("%d\n", ret);
	printf("%c\n", ch1);

	char arr[] = "I Am A Student";
	int i = 0;
	while (arr[i]){
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);*/

	return 0;
}