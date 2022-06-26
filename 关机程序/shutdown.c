#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	// shutdown -s -t 60
	// system() - 执行系统命令
	char input[20] = { 0 };
	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在一分钟内关机，如果输入：我是人，就取消关机\n请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是人") == 0) // 比较两个字符串-strcmp();
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
	while (1){
		printf("请注意，你的电脑在一分钟内关机，如果输入：我是人，就取消关机\n请输入>:");
		scanf("%s", input);
		if (strcmp(input, "我是人") == 0) // 比较两个字符串-strcmp();
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}