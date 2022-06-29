#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	//int a = 10000;
//	//FILE* pf = fopen("test.txt", "wb");
//	//fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	//fclose(pf);
//	//pf = NULL;
//
//	//打开文件test.txt
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
//	//写文件
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
//	//读文件
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
//	//读文件
//	/*fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	puts(buf);*/
//
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin); //从标准输入流读取
//	//fputs(buf, stdout); //输出到标准输出流
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
//	//格式化的形式写文件
//	//fprintf(pf, "%d\n%f\n%s\n", s.n, s.score, s.arr);
//
//	//格式化的输入数据
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
//	//把格式化数据转化成字符串
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	//把字符串数据转化成格式化数据
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
//	//struct S s = {"张三",20,55.6};
//	struct S tmp = { 0 };
//	FILE* pf = fopen("wbtest.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	/*fwrite(&s, sizeof(struct S), 1, pf);*/
//
//	//二进制的形式读文件
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
//	//1.定位文件指针
//	fseek(pf, -2, SEEK_END); //SEEK_CUR SEEK_SET SEEK_END
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//读取文件指针的偏移量
//	int pos = ftell(pf);
//	//让文件指针回到起始位置
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

	//读文件
	int ch = 0;
	while ((ch = fgetc(pf))!= EOF )
	{
		putchar(ch);
	}

	//找文件读取结束的原因
	if (ferror(pf))
	{
		//读取错误
		printf("error\n");
	}
	else if (feof(pf))
	{
		//读到文件结束标志
		printf("end of file\n");
	}

	fclose(pf);
	pf = NULL;
	return 0;
}