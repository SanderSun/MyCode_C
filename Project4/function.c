#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//		
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

// �ҵ���9��100���ڵ�����

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;dao
//		if (i/10 == 9) // /������
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//�������

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i; // ���������������Ҫ����������С����
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

// Ѱ�����ֵ

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0]; // ���������һԪ�������ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

// �˷��ھ���
// ����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d  ", i, j, i*j); //%2d ��λ�Ҷ��룬%-2d��λ�����
//		}
//		printf("\n");
//	}
//	return 0;
//}

// ��������Ϸ
// 1.�����������һ������� 1-100
// 2.������

void menu()
{
	printf("**************************\n");
	printf("***** 1.play  0.exit *****\n");
	printf("**************************\n");
};

void game()
{
	int ret = 0;
	int guess = 0;
	// 1.����һ�������
	ret = rand()%100 + 1; // rand()���ֵ��37000�࣬ģ100��0-99������
	// 2.������
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	// ��ʱ�������������������
	// time_t time(time_t *timer)
	// srand������������������ֻ������һ��
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}
