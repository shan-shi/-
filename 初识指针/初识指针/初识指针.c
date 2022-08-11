#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;//a在内存中要分配空间：4字节byte
//	printf("%p\n", &a);//%p专门用来打印地址
//	int* pa = &a;//pa用来存放地址，在c语言中叫pa为指针变量,*说明pa是指针变量，int说明pa执行的对象是int类型的
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}


//1.内存
//内存是电脑上特别重要的储存器，计算机中所有的程序运行都是再内存中进行的
//所以为了有效的使用内存，就把内存划分成了一个个小小的内存单元，每个内存单元的大小是一个字节
//为了能够有效的访问到内存的每一个单元，就给内存单元进行了编号，这些编号被称为该内存单元的地址
//						内存
//					一个字节     0xFFFFFFFF										现实生活中对空间的运用相似
//					一个字节     0xFFFFFFFE

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//	*pa = 20;//*解引用操作  *pa就是通过pa里的地址，找到a，此时a=20
//	printf("%d\n", a);
//	return 0;
//}


//指针变量的大小
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	return 0;
}
//指针大小在32位平台为4字节，64位平台为8字节