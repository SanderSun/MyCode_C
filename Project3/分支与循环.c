#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>


// else �����δƥ���if����ƥ��
// return �˳���������

//int main()
//{
	/*int num = 6;
	if (6 == num)
	{
		printf("�漰����������ıȽϣ���ðѳ�����ǰ�������ź�\n");
	}*/

	// �ж�һ�����Ƿ�Ϊ����
	/*int num1 = 99;
	if (num1 % 2 == 1)
	{
		printf("%d������\n", num1);
	}
	else
	{
		printf("%d��ż��\n", num1);
	}*/

	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{*/
		//case ���γ������ʽ
	/*case 1:
		printf("����1\n");
		break;
	case 2:
		printf("����2\n");
		break;
	case 3:
		printf("����3\n");
		break;
	case 4:
		printf("����4\n");
		break;
	case 5:
		printf("����5\n");
		break;
	case 6:
		printf("����6\n");
		break;
	case 7:
		printf("����7\n");
		break;
	default:
		break;*/
	/*case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("ѧϰ��\n");
		break;
	case 6:
	case 7:
		printf("ѧϰ��\n");
		break;

	default:
		break;
	}*/

	//int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		continue; // continue ��������ѭ���������´�ѭ��
	//	i++;
	//	printf("%d\n", i);
	//	// break; ������ֹѭ��
	//}

	//int ch = getchar(); // �����ַ�
	//putchar(ch); // ��ӡ�ַ�
	//return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++) // ������Ʊ�������ǰ�պ�д��
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	/*for (;;)
//	{
//		printf("forѭ���ĳ�ʼ�����������ж϶�����ʡ�ԣ��ж�ʡ�Ժ�Ϊ��");
//	}*/
//
//
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//	
//}


// do while���
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			//continue; 1234���������ѭ������������Ĵ�������ж�
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//}

//��ϰ
//int main()
//{
//	// ����n�Ľ׳�
//	/*long n = 0;
//	long result = 1;
//	for (n = 1; n <= 30; n++)
//	{
//	result = result * n;
//	}
//	printf("result = %d\n", result);*/
//
//	// ����1��+2��+3��+...+10!
//	/*int x,y,res;
//	int sum = 0;
//	for (x = 1; x <= 10; x++)
//	{
//	res = 1;
//	for (y = 1; y <= x; y++)
//	{
//	res = res*y;
//	}
//	sum = sum + res;
//	}
//	printf("sum = %d\n", sum);*/
//
//
//	/*int n = 0;
//	long ret = 1;
//	long sum1 = 0;
//	for (n = 1; n <= 10; n++)
//	{
//	ret = ret*n;
//	sum1 = sum1 + ret;
//	}
//	printf("sum1 = %d\n", sum1);*/
//
//	// �������������Ԫ��
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 10;
//	//����һ
//	//int i = 0;
//	// дһ�����룬��arr�����ҵ�7
//	//int sz = sizeof(arr) / sizeof(arr[0]); //���鳤��
//	//for (i = 0; i < sz; i++)
//	//{
//	//	if (k == arr[i])
//	//	{
//	//		printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//	//		break;
//	//	}
//	//}
//	//if (i == sz)
//	//{
//	//	printf("�Ҳ���\n");
//	//}
//
//	// ������
//	//int sz = sizeof(arr) / sizeof(arr[0]); // ����Ԫ�ظ���
//	//int left = 0; //���±�
//	//int right = sz - 1; //���±�
//	//while (left<=right)
//	//{
//	//	int mid = (left + right) / 2;
//	//	if (arr[mid] > k)
//	//	{
//	//		right = mid - 1;
//	//	}
//	//	else if (arr[mid]<k)
//	//	{
//	//		left = mid + 1;
//	//	}
//	//	else
//	//	{
//	//		printf("�ҵ���,�±��ǣ�%d\n", mid);
//	//		break;
//	//	}
//	//}
//	//if (left>right)
//	//{
//	//	printf("�Ҳ�����\n");
//	//}
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) -1;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2; // �ַ�����\0ռһ���ֽ�
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password,"520520") == 0)// ==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��strcmp,�����ַ�����Ⱦ͵���0
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("�������������,�˳�����\n");
	}
	return 0;
}