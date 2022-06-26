#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main(){
//	// 字符串类型
//	char arr1[] = "abc"; // 数组存储字符串 '\0'字符串的结束标志
//	char arr2[] = { 'a', 'b', 'c' ,'\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main(){ 
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' ,'\0'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2)); // strlen 计算字符串长度的
//	printf("%s\n", arr2);
//	printf("%d\n", strlen("c:\test\32\test.c")); // \dd 是八进制数字转化成十进制所代表的码值
//	printf("%s\n", '\x61');  // \xdd 是十六进制数字转化成十进制所代表的码值
//	return 0;
//}

//int main(){
//	int input = 0;
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//}

int main(){
	int line = 0;
	while (line < 999){
		printf("好好学专业课: %d\n",line);
		line++;
	}
}