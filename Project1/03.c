#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main(){
//	// �ַ�������
//	char arr1[] = "abc"; // ����洢�ַ��� '\0'�ַ����Ľ�����־
//	char arr2[] = { 'a', 'b', 'c' ,'\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main(){ 
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' ,'\0'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2)); // strlen �����ַ������ȵ�
//	printf("%s\n", arr2);
//	printf("%d\n", strlen("c:\test\32\test.c")); // \dd �ǰ˽�������ת����ʮ�������������ֵ
//	printf("%s\n", '\x61');  // \xdd ��ʮ����������ת����ʮ�������������ֵ
//	return 0;
//}

//int main(){
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//}

int main(){
	int line = 0;
	while (line < 999){
		printf("�ú�ѧרҵ��: %d\n",line);
		line++;
	}
}