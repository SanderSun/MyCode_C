#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	/*int ch = 0;
	 // EOF end of file  �ļ�������־
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}*/

	//int ch;
	//int ret = 0;
	//char password[20] = { 0 };
	//printf("���������룺>");
	//scanf("%s", password);// �������룬�������password������
	//// ��������ʣ��һ����\n��
	//// ��ȡһ��'\n'
	//while ((ch = getchar())!='\n') // ѭ����ȡ��ֱ������\n
	//{
	//	;
	//}
	//printf("������(Y/N):>");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("ȷ�ϳɹ�\n");
	//}
	//else
	//{
	//	printf("����ȷ��\n");
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