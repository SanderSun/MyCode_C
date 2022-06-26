#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	/*int ch = 0;
	 // EOF end of file  文件结束标志
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}*/

	//int ch;
	//int ret = 0;
	//char password[20] = { 0 };
	//printf("请输入密码：>");
	//scanf("%s", password);// 输入密码，并存放在password数组中
	//// 缓冲区还剩余一个‘\n’
	//// 读取一下'\n'
	//while ((ch = getchar())!='\n') // 循环读取，直到读到\n
	//{
	//	;
	//}
	//printf("请输入(Y/N):>");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("放弃确认\n");
	//}

	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch<'0' || ch>'9')
			continue;
		putchar(ch);
	}

	return 0;

}