#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10; // ������4���ֽڵĿռ�
	printf("%p\n", &a);
	int* p = &a;// &ȡ��ַ int* ��p�ı������� *�������ǣ�p��ָ�����
	printf("%p\n", p); // p��һ������-ָ�����
	*p = 20; //* �ǽ����ò�����,�ҵ���ַ��Ӧ�ı���
	printf("%d\n", sizeof(p)); // 32λ4�ֽ� 64λ8�ֽ�
	printf("a = %d\n", a);

	double d = 3.14;
	double* pd = &d;
	*pd = 5.5;
	printf("%lf\n", d);
	printf("%lf\n", *pd);
	return 0;
}