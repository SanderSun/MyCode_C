#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	//int a = 10000;
//	//FILE* pf = fopen("test.txt", "wb");
//	//fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	//fclose(pf);
//	//pf = NULL;
//
//	//���ļ�test.txt
//	FILE* pf = fopen("a/test.txt", "w");
//	if (!pf)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//
//	FILE* pfw = fopen("TEST.txt", "w");
//
//	if (pfw == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('h', pfw);
//	fputc('e', pfw);
//	fputc('l', pfw);
//	fputc('l', pfw);
//	fputc('o', pfw);
//	fclose(pfw);
//	pfw = NULL;
//	return 0;
//}

//int main()
//{
//
//	FILE* pfr = fopen("TEST.txt", "r");
//
//	if (pfr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	printf("%c", fgetc(pfr));
//	printf("%c", fgetc(pfr));
//	printf("%c", fgetc(pfr));
//	printf("%c", fgetc(pfr));
//	printf("%c", fgetc(pfr));
//	fclose(pfr);
//	pfr = NULL;
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	//FILE* pf = fopen("TEST.txt", "r");
//	FILE* pf = fopen("TEST.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	/*fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	puts(buf);*/
//
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin); //�ӱ�׼��������ȡ
//	//fputs(buf, stdout); //�������׼�����
//	//gets(buf);
//	//puts(buf);
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[12];
//};

//int main()
//{
//	struct S s = { 100, 3.14f, "hello world" };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	//��ʽ������ʽд�ļ�
//	//fprintf(pf, "%d\n%f\n%s\n", s.n, s.score, s.arr);
//
//	//��ʽ������������
//	fscanf(pf, "%d %f %s", &s.n, &s.score, s.arr);
//
//	printf("%d %f %s", s.n, s.score, s.arr);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &s.n, &s.score, s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//	return 0;
//}

//int main()
//{
//	struct S s = { 100, 3.14f, "abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//�Ѹ�ʽ������ת�����ַ���
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	//���ַ�������ת���ɸ�ʽ������
//	sscanf(buf, "%d %f %s", &tmp.n, &tmp.score, tmp.arr);
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	//struct S s = {"����",20,55.6};
//	struct S tmp = { 0 };
//	FILE* pf = fopen("wbtest.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	/*fwrite(&s, sizeof(struct S), 1, pf);*/
//
//	//�����Ƶ���ʽ���ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %f", tmp.name, tmp.age, tmp.score);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END); //SEEK_CUR SEEK_SET SEEK_END
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//��ȡ�ļ�ָ���ƫ����
//	int pos = ftell(pf);
//	//���ļ�ָ��ص���ʼλ��
//	rewind(pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{
	FILE* pf = fopen("test.txt", "r");

	if (pf == NULL)
	{
		perror("open file test2.txt");
		return 0;
	}

	//���ļ�
	int ch = 0;
	while ((ch = fgetc(pf))!= EOF )
	{
		putchar(ch);
	}

	//���ļ���ȡ������ԭ��
	if (ferror(pf))
	{
		//��ȡ����
		printf("error\n");
	}
	else if (feof(pf))
	{
		//�����ļ�������־
		printf("end of file\n");
	}

	fclose(pf);
	pf = NULL;
	return 0;
}