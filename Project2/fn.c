#define _CRT_SECURE_NO_WARNINGS 1

static int add(int x, int y)
{
	int a = x + y;
	return a;
}

// static 修饰局部变量 局部变量的生命周期变长
// static 修饰全局变量 改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
// static 修饰函数，改变函数的链接属性，外部链接属性变内部链接属性
