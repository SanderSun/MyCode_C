#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	// shutdown -s -t 60
	// system() - ִ��ϵͳ����
	char input[20] = { 0 };
	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺�����ˣ���ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0) // �Ƚ������ַ���-strcmp();
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
	while (1){
		printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺�����ˣ���ȡ���ػ�\n������>:");
		scanf("%s", input);
		if (strcmp(input, "������") == 0) // �Ƚ������ַ���-strcmp();
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}